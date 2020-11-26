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
#define sort_a(a) sort(a.begin(), a.end());
#define sort_desc(a) sort(a.begin(), a.end(), greater<ll>());
#define find_a(a, e) find(a.begin(), a.end(), e)
#define count_a(a, e) count(a.begin(), a.end(), e)
#define find_aw(a, e) find(a.begin(), a.end(), e);
#define count_aw(a, e) count(a.begin(), a.end(), e);

#define printV(a)         \
    for (int i : a)       \
        cout << i << " "; \
    cout << "\n";

bool arr[100001];
ll current;
void Print(ll x,ll current2){
    if(x == current2){
        for(ll i = current2;i > 0;i--){
            if(arr[i]){
                cout << i << " ";
                arr[i] = 0;
                current = i - 1;
            }else{
                break;
            }
        }
    }
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
    current = n;
    re(i,n){
        ll x;
        cin >> x;
        arr[x] = 1;
        Print(x,current);
        cout << endl;
    }

    return 0;
}
