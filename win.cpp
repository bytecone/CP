#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A,B,R;
    cin >> A >> B >> R;

    if ((2*R>A)||(2*R>B))
        cout << "Irfan\n";
    else
        cout << "Iwang\n";

    return 0;
}
