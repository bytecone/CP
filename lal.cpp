#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N;
    cin >> N;

    queue<long long int> res;

    long double ip;
    for (long long int i=0;i<N;i++)
    {
        cin >> ip;
        res.push(round(ip*2/3));
    }
    for (long long int i=0;i<N;i++)
    {
        cout << res.front() << "\n";
        res.pop();
    }

    return 0;
}
