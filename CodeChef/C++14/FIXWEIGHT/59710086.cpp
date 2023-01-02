#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define mod 1000000007
#define mod1 998244353
#define inf 1e18
#define nline "\n"
#define PI 3.141592653589793238462
#define read(arr, n)            \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define write(arr, n)           \
    for (int i = 0; i < n; i++) \
        cout << arr[i] << " ";  \
    cout << "\n";
#define loop(i, n) for (int i = 0; i < n; i++)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.first);
    cerr << ",";
    _print(p.second);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void debug_code()
{
#ifndef ONLINE_JUDGE
    freopen("debug.txt", "w", stderr);
#endif
}
signed main(int argc, char **argv)
{
    fastio();
    // init_code();
    // debug_code();

    long long t = 0;
    cin >> t;

    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        bool flag = false;

        for (long long i = 1; i <= n; i++){

            if ( x % i == 0){
                long long num = x / i;
                if ( n - num + 1 >= i){
                    flag = true;
                    break;
                }
            }
        }

        if (flag == true)
            cout << "YES" << nline;
        else
            cout << "NO" << nline;
    }
    return 0;
}
