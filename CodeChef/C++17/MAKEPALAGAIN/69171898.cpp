#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
}

signed main(int argc, char **argv)
{
    fastio();
    // init_code();

    int t = 0;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;

        bool flag = true;
        map<char, int> m1, m2;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                m1[s[i]]++;
            else
                m2[s[i]]++;
        }
        vector<pair<char, int>> v1, v2;
        for (auto x : m1)
            v1.push_back({x.first, x.second});
        for (auto x : m2)
            v2.push_back({x.first, x.second});

        if (v1.size() != v2.size())
            flag = false;

        for (int i = 0; flag && i < v1.size(); i++)
            if (v1[i].first != v2[i].first || v1[i].second != v2[i].second)
                flag = false;

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
