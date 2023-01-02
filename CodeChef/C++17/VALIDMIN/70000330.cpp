#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin >> t;

    while (t--)
    {
        map<int, int> mp;
        for (int i = 0; i < 3; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        
        if (mp.size() == 3)
            cout << "NO" << endl;
        else if (mp.size() == 2){
            auto itr = mp.begin();
            if(itr->second == 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}