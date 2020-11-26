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

void solve()
{
    ll n, m;
    cin >> n >> m;
    in(a, n);
    printV(a);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    in(a, n);
    map<ll, ll> indices;
    re(i, n)
    {
        indices[i] = a[i];
    }
    // sort(a.begin(), a.end());
    ll first_l = 0, second_l = 0, t_l = 0;
    // for (ll i = 0; i < n - 1; i++)
    // {
    //     if (a[i] == 1 && (a[i + 1] == 2 || (i + 1) == (n - 1)))
    //     {
    //         first_l = i + 1;
    //     }
    //     if (a[i] == 2 && (a[i + 1] == 3 || (i + 1) == (n - 1)))
    //     {
    //         second_l = (i + 1);
    //     }
    //     if (a[i] == 3 && (i + 1) == (n - 1))
    //     {
    //         t_l = (i + 2);
    //     }
    //     // cout << a[i] << endl ;
    // }
    // if (t_l == 0 || second_l == 0 || first_l == 0)
    // {
    //     cout << 0;
    //     return 0;
    // }
    // cout << first_l << " " << second_l << " " << t_l << endl;
    // for (const auto &kv : indices)
    // {
    //     cout << kv.first << " has value " << kv.second << endl;
    // }
    vector<vll> stores(n, vll(3, -1));
    ll J = 0;
    ll Current_1 = 0, Current_2 = 0, Current_3 = 0;
    re(i, n)
    {
        if (a[i] == 1)
        {
            stores[Current_1][0] = i + 1;
            Current_1++;
        }
        if (a[i] == 2)
        {
            stores[Current_2][1] = i + 1;
            Current_2++;
        }
        if (a[i] == 3)
        {
            stores[Current_3][2] = i + 1;
            Current_3++;
        }
        if(stores[J][0] != -1 && stores[J][1] != -1 && stores[J][2] != -1){
            J++;
        }
    }
    cout << J << endl;
    re(i, J)
    {
        printV(stores[i]);
    }
    // cout << min(first_l,min(second_l - first_l,t_l - second_l));

    return 0;
}
