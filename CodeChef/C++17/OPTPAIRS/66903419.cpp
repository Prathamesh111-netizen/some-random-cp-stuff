#include <bits/stdc++.h>

using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define mod 1000000007
#define nline "\n"
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
    freopen("debug.txt", "w", stderr);
#endif
}
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int div(int n)
{
    int num = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            num++;
            if (n / i != i)
                num++;
        }
    }
    return num;
}
signed main(int argc, char **argv)
{
    fastio();
    // init_code();

    int t = 0;
    cin >> t;

    while (t--)
    {
        // int n;
        // cin >> n;
        // for (int n = 2; n <= 30; n++)
        // {
        //     int mini = INT_MAX;
        //     for (int i = 1; i <= n / 2; i++)
        //     {
        //         int temp = gcd(n - i, i);
        //         int sum = temp + ((i) * (n - i)) / temp;
        //         cout << sum << " ";
        //         mini = min(sum, mini);
        //     }
        //     cout << "\n"
        //          << mini << nline << nline;
        // }
        // int n;
        // cin >> n;

        // if (n % 2 == 0)
        // {
        //     int ans = 0;
        //     for (int i = 1; i <= n / 2 - 1; i++)
        //         if ((n - i) % i == 0)
        //             ans += 2;
        //     ans++;
        //     cout << ans << nline;
        // }
        // else
        // {
        //     int ans = 0;
        //     for (int i = 1; i <= n / 2; i++)
        //         if ((n - i) % i == 0)
        //             ans += 2;
        //     cout << ans << nline;
        // }

        int n;
        cin >> n;

        int divs = div(n) - 1;

        if (n % 2 == 0)
        {
            cout << divs * 2 - 1 << nline;
        }
        else
        {
            cout << divs * 2 << nline;
        }
    }
    return 0;
}
