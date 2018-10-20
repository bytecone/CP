#include <iostream>
#define ll long long
using namespace std;

ll f(ll x)
{
	if (x==0)
		return 10;
	else if (x<10)
		return x;
	else
	{
		ll r = 0;
		ll ten = 1;
		for(ll i=9;i>=2;i--)
		{
			while(x%i==0)
			{
				x/=i;
				r+=i*ten;
				ten*=10;
			}
		}
		if (x==1)
			return r;
		else
			return -1;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll N,ip;
	cin >> N;
	for(ll i=0;i<N;i++)
	{
		cin >> ip;
		cout << f(ip) << "\n";
	}
	return 0;
}