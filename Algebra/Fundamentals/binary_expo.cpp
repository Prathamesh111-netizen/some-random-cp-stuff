#include <bits/stdc++.h>
using namespace std;

// recursive
int binpow(int a, int b)
{
    if (b == 0)
        return 1;

    int num = binpow(a, b / 2);
    if (b % 2)
        return num * num * a;
    else
        return num * num;
}

// interative
int binpowi(int a, int b)
{
    int res = 1;

    while (b > 0)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }

    return res;
}

// modular multiplicatin
uint64_t mul_mod(uint64_t a, uint64_t b, uint64_t m)
{
    a %= m;
    b %= m;
    long double x = a;
    uint64_t c = x * b / m;
    int64_t r = (int64_t)(a * b - c * m) % (int64_t)m;
    return r < 0 ? r + m : r;
}

int main()
{
    for (int i = 1; i <= 10; i++)
        cout << binpow(2, i) << " ";
    return 0;
}