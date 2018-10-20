#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll A,B,Q,C,D,n,r;
    cin >> A >> B >> Q;
    n = __gcd(A,B);
    //cout << n << "\n";

    for(ll i=0;i<Q;i++)
    {
        cin >> C >> D;
        r = -1;
        for(ll i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                if((i>=C)&&(i<=D))
                    r=i;
            }
        }
        cout << r << "\n";
    }

    return 0;
}
