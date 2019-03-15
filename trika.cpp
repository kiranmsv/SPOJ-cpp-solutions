#include <iostream>
using namespace std;
main(){
    int n,m,x,y,i,j;
    cin>>n>>m>>x>>y;
    int a[n+1][m+1],dp[n+1][m+1];
    for(i=1;i<=n;i++) for(j=1;j<=m;j++) cin>>a[i][j];
    dp[n][m]=a[n][m];
    for(i=n-1;i>0;i--) dp[i][m]=a[i][m]+dp[i+1][m];
    for(i=m-1;i>0;i--) dp[n][i]=a[n][i]+dp[n][i+1];
    for(j=m-1;j>0;j--) for(i=n-1;i>0;i--){
        dp[i][j]=min(dp[i+1][j]+a[i][j],dp[i][j+1]+a[i][j]);
    }
    if(2*a[x][y]-dp[x][y]>=0) cout<<"Y "<<2*a[x][y]-dp[x][y]<<endl;
    else cout<<"N"<<endl;
}