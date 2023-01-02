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

signed main(int argc, char **argv)
{
    fastio();
    init_code();

    int t = 0;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        read(arr, n);

        vector<int> req(n);
        for (int i = 0; i < n; i++)
            req[arr[i] - 1] = abs(arr[i] - 1 - i);

        // int odd = 0, even = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (req[i] == 0)
        //         continue;
        //     else if (req[i] % 2 == 1)
        //         odd++;
        //     else
        //         even++;
        // }
        // debug(req);
        // debug(even);
        // debug(odd);

        // if (even > 0 && odd > 0)
        //     cout << 1 << endl;
        // else
        // {
        int answer = 0;
        int i = 0;
        for (i = 0; i < n; i++)
            if (req[i] != 0)
            {
                answer = req[i];
                break;
            }

        for (int j = i + 1; j < n; j++)
        {
            if (req[j] == 0 || req[j] == answer)
                continue;
            else
            {
                answer = gcd(max(req[j], answer), min(req[j], answer));
                if (answer == 1)
                    break;
            }
        }

        cout << answer << endl;
        // }

        // int n = 4;
        // vector<int> temp;
        // for (int i = 1; i <= n; i++)
        //     temp.push_back(i);

        // do
        // {
        //     for (auto x : temp)
        //         cout << x << " ";
        //     cout << endl;
        // } while (next_permutation(temp.begin(), temp.end()));
    }
    return 0;
}
