#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double fl;
typedef vector<ll> vll;
#define re(i, n) for (int i = 0; i < n; i++)
#define endl "\n"
#define rep(i, a, n) for (int i = a; i < n; i++)
#define in(a, n) \
    vll a(n);    \
    re(i, n) cin >> a[i];
#define printV(a)         \
    for (int i : a)       \
        cout << i << " "; \
    cout << "\n";

ll flipSign(ll a)
{
    ll neg = 0;

    ll tmp = a < 0 ? 1 : -1;
    while (a != 0)
    {
        neg += tmp;
        a += tmp;
    }
    return neg;
}

bool areDifferentSign(int a, int b)
{
    return ((a < 0 && b > 0) || (a > 0 && b < 0));
}

ll division(ll a, ll b)
{
    if (b == 0)
        throw(b);

    ll quotient = 0, dividend;

    ll divisor = flipSign(abs(b));

    for (dividend = abs(a); dividend >= abs(divisor);
         dividend += divisor)
        quotient++;

    if (areDifferentSign(a, b))
        quotient = flipSign(quotient);
    return quotient;
}

ll getRemainder(int num, int divisor)
{
    while (num >= divisor)
        num -= divisor;

    return num;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // ll n;
    unsigned int n;
    unsigned int x;
    cin >> n;
    re(i, n)
    {
        cin >> n;
        if (n == 0)
        {
            cout << "no";
            break;
        }
        x = sqrt(n);
        if (n != x * x)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
