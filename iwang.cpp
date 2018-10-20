#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,p,ip;
    cin >> N;

    priority_queue<int> A;
    for (int i=0;i<N;i++)
    {
        cin >> ip;
        A.push(ip);
    }

    p = N*A.top();
    A.pop();

    for (int i=N;i>1;i--)
    {
        p += i*A.top();
        A.pop();
    }

    cout << p << "\n";
    return 0;
}
