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
    ll n,x;
    cin >> n >> x;
    ll Total_IceCream = x,Distressed = 0;
    re(i,n){
        string symbol;
        ll number;
        cin >> symbol >> number;    
        // cout << symbol << " " << number << endl;
        if(symbol == "+"){
            Total_IceCream += number;
        }else if(symbol == "-"){
            if(Total_IceCream < number){
                Distressed++;
            }else{
                Total_IceCream -= number;
            }
        }                
    }
    cout << Total_IceCream << " " << Distressed;
    
    return 0;
}
