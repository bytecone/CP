#include <bits/stdc++.h>
#define ll long long
using namespace std;

void f(string A,string B,int N,int M)
{
    int len[N+1][M+1];

    for(int i=0;i<=N;i++) len[i][0]= 0;
    for(int i=0;i<=N;i++) len[0][i]= 0;

    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=M;j++)
        {
            if(i==0 || j==0) len[i][j]= 0;
            else if(A[i-1]==B[j-1]) len[i][j]= len[i-1][j-1]+1;
            else len[i][j]= max(len[i][j-1],len[i-1][j]);
        }
    }

    int mlen= len[N][M];
    if(mlen==0)
    {
        cout << "NONE\n";
        return;
    }

    //

    char res[mlen];
    int i=N,j=M,z=mlen-1;
    while(j>0)
    {
        if(len[i][j]==len[i][j-1]) j--;
        else if(len[i][j]==len[i-1][j]) i--;
        else
        {
            res[z]= B[j-1];
            i--;j--;z--;
        }
    }

    for(int p=0;p<len[N][M];p++)
    {
        cout << res[p];
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N,M;
    string A,B;
    cin >> N >> M >> A >> B;

    f(A,B,N,M);

    return 0;
}
