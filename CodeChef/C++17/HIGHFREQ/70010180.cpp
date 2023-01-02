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
        long long n;
        cin >> n;
        vector<long long>arr;
        map<int, int> mp;
        for (long long i = 0; i < n; i++)
        {    long long x; cin >> x ; arr.push_back(x); mp[x]++;}
        
        int maxi = 0, maxi2 = 0;
        for (auto x : mp){
            if (x.second > maxi){
                maxi2 = maxi;
                maxi = x.second;
            }
            else
                maxi2 = max(maxi2, x.second);
        }
        cout << max(maxi2, max(maxi/2 ,(maxi + 1) / 2)) << "\n";
    }   

    return 0;
}