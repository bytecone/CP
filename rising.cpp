#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,A,B,sum;
	cin >> N >> A >> B;
	if ((B==0)&&(A+1==N))
	{
		cout << -1 << "\n";
		return 0;
	}
	queue<int> res;
	sum = 1;
	
	for(int i=2;i<=A+2;i++)
	{
		sum+=i;
		res.push(i);
	}
	for(int i=0;i<B-1;i++)
	{
		if (sum+1 > 50000)
		{
			cout << -1 << "\n";
			return 0;
		}
		res.push(sum+1);
		sum+=sum+1;
	}
	
	cout << 1;
	for(int i=0;i<A+B;i++)
	{
		cout << " " << res.front();
		res.pop();
	}
	for(int i=0;i<N-A-B-1;i++)
		cout << " " << 1;
	cout << "\n";
	
	return 0;
}