#include <bits/stdc++.h>
using namespace std;

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
}
int main()
{
    // init_code();
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        cin.ignore();

        string s;
        cin >> s;
        int zeroes = 0, ones = 0;
        for (auto x : s)
            x == '1' ? ones++ : zeroes++;

        if (ones == zeroes)
            cout << 0 << endl;
        else if (k == 1)
            cout << abs(ones - zeroes) << endl;
        else
        {
            int a = zeroes / k;
            int b = ones / k;

            int rema = zeroes % k;
            int remb = ones % k;

            if (rema == remb)
                cout << abs(a - b) << endl;
            if (rema > remb)
                cout << max(abs(a + 1 - b), abs(a - b)) << endl;
            if (rema < remb)
                cout << max(abs(a - b - 1), abs(a - b)) << endl;
        }
    }

    return 0;
}