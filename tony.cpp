#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N,a,b,t,z;
    cin >> N;
    priority_queue<ll> S;
    S.push(0);

    for(ll i=0;i<N;i++)
    {
        cin >> b;
        if(i==0)
        {
            a=b;
            continue;
        }
        else
        {
            S.push(b-a);
            a=b;
        }
    }

    t = S.top();
    S.pop();
    if(S.top()==t)
        t++;
    cout << t << "\n";

    return 0;
}
