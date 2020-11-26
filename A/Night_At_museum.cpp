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

ll ca(char i){
    return (int)i - 97;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll Current = 0,total = 0;
    re(i,s.size()){
        ll ind = ca(s[i]);
        ll w = abs(Current - ind);
        if(w < 13){
            total += w;
        }else{
            total += 26 - w;
        }
        Current = ind;
    }
    cout << total;

    return 0;
}
