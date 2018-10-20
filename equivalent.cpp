#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool eq(ll N,vector<ll> A,vector<ll> B)
{
    for(ll i=0;i<N;i++)
    {
        if(A[i]!=B[i])
            break;
        else
        {
            if(i==N-1)
                return true;
            else
                continue;
        }
    }

    if(N%2==1)
        return false;

    ll Nd = N/2;
    vector<ll> A1,A2,B1,B2;

    for(ll i=0;i<N/2;i++)
    {
        A1.push_back(A[i]);
        B1.push_back(B[i]);
        A2.push_back(A[i+Nd]);
        B2.push_back(B[i+Nd]);
    }

    if(((eq(Nd,A1,B1))&&(eq(Nd,A2,B2)))||((eq(Nd,A1,B2))&&(eq(Nd,A2,B1))))
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N,ip;
    cin >> N;
    vector<ll> A,B;

    for(ll i=0;i<N;i++)
    {
        cin >> ip;
        A.push_back(ip);
    }
    for(ll i=0;i<N;i++)
    {
        cin >> ip;
        B.push_back(ip);
    }

    if(eq(N,A,B))
        cout << "EQ\n";
    else
        cout << "NEQ\n";
    return 0;
}


