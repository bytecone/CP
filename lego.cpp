#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll max_p(ll a,ll b,ll c,ll d,ll K)
{
    ll x = abs(a-c);
    ll y = abs(b-d);

    if (K < max(x,y))
        return -1;

    if ((x%2==0)&&(y%2==0))
    {
        if (K%2==0)
            return K;
        else
            return K-2;
    }
    else if ((x%2==1)&&(y%2==1))
    {
        if (K%2==1)
            return K;
        else
            return K-2;
    }
    else
        return K-1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T,a,b,c,d,K;
    cin >> T;

    ll res[T];

    for (ll i=0;i<T;i++)
    {
        cin >> a >> b >> c >> d >> K;
        res[i] = max_p(a,b,c,d,K);
    }

    for (ll i=0;i<T;i++)
    {
        cout << res[i] << "\n";
    }

    return 0;
}
