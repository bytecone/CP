#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N,nines,res;
    ld group;
    cin >> N;

    if (N < 5)
    {
        cout << 0 << "\n";
        return 0;
    }

    nines = log10(N/5)+1;
    group = floor((N-5*pow(10,nines-1))/pow(10,nines))+1;

    res = (group/2)*((pow(10,nines)*(group+1))-2) - group*((((group*pow(10,nines)+5*pow(10,nines-1))-1) - N));

    if (N < group*pow(10,nines)-1)
        res++;

    cout << res << "\n";
    return 0;
}
