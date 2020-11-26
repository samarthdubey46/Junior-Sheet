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


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a1,a2,a3,a4,total = 0;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    for(char i : s){
        if(i == '1'){
            total += a1;
        }
        if(i == '2'){
            total += a2;

        }
        if(i == '3'){
            total += a3;
        }
        if(i == '4'){
            total += a4;
        }
    }
    cout << total;
    return 0;
}
