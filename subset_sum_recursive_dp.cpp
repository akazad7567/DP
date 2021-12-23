#include<bits/stdc++.h>
using namespace std;
#define M 500
int dp[M][M];

void ini()
{
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<M;j++)
        {
            dp[i][j]=-1;
        }
    }
}

int f(int ar[],int i,int n,int w)
{
    if(w==0) return 1;
    if(i==n) return 0;
    if(dp[i][w]!=-1) return dp[i][w];

    int r1=f(ar,i+1,n,w-ar[i]);
    int r2=f(ar,i+1,n,w);
    dp[i][w]=r1+r2;
    return dp[i][w];
}
int main()
{
    ini();
    int n,w;
    cin>>n>>w;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<f(ar,0,n,w)<<endl;
}
