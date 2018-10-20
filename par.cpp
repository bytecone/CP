#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll par(ll a,ll b)
{
    ll c;
    if (a<b)
        swap(a,b);

    c = (a-b)/b+1;
    a -= c*b;
    if (a>0)
        c+=par(a,b);

    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;
    cin >> a >> b;

    cout << par(a,b) << "\n";
    return 0;
}
