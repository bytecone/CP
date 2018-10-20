#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N,K,ip;
    cin >> N >> K;

    priority_queue<long long int> A;

    for(long long int i=0;i<N;i++)
    {
        cin >> ip;
        A.push(-1*ip);
    }

    long long int c = 0;
    while (A.top() > -1*K)
    {
        long long int m1 = A.top();
        A.pop();
        long long int m2 = A.top();
        A.pop();
        A.push(m1+2*m2);

        if (c < N-1)
            c++;
        else
        {
            c = -1;
            break;
        }
    }

    cout << c << "\n";
    return 0;
}
