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
    ll n;
    cin >> n;
    ll officer_free = 0,crime_un = 0;
    re(i,n){
        ll temp;
        cin >> temp;
        if(temp != -1){
            officer_free+= temp;
        }
        else if(temp == -1){
            if(officer_free == 0){
                crime_un++;
            }
            if(officer_free > 0){
                officer_free--;
            }
        }
    }
    cout << crime_un;
    
    return 0;
}
