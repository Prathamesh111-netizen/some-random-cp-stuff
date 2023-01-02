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

signed main(int argc, char **argv)
{
    fastio();
    init_code();

    int t = 0;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n == 1)
        {
            cout << "a" << nline;
            continue;
        }
        else if (n % 2 == 0)
        {
            if (x > n / 2)
                cout << -1 << nline;
            else
            {
                char c = 'a';
                string ans = "";
                for (int i = 1; i <= x; i++, c++)
                    ans += c;

                if (x < n / 2)
                {
                    c--;
                    for (int i = x + 1; i <= n / 2; i++)
                        ans += c;
                }
                string rev = ans;
                reverse(rev.begin(), rev.end());
                ans += rev;
                cout << ans << nline;
            }
        }
        else
        {
            if (x > n / 2 + 1)
                cout << -1 << nline;
            else
            {
                char c = 'a';
                string ans = "";

                if (x == n / 2 + 1)
                {
                    for (int i = 1; i <= n / 2; i++, c++)
                        ans += c;
                    string temp = ans;
                    reverse(temp.begin(), temp.end());
                    ans += c;
                    ans += temp;
                    cout << ans << nline;
                    continue;
                }
                for (int i = 1; i <= x; i++, c++)
                    ans += c;
                if (x < n / 2)
                {
                    c--;
                    for (int i = x + 1; i <= n / 2; i++)
                        ans += c;
                    c++;
                }
                c--;
                string rev = ans;
                reverse(rev.begin(), rev.end());
                ans += c;
                ans += rev;

                cout << ans << nline;
            }
        }
    }
    return 0;
}
