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
    string l1;
    set<char> s1;
    cin >> l1;
    for(char i:l1){
        s1.insert(i);
    }
    string r = s1.size() % 2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!";
    cout << r;

    return 0;
}
