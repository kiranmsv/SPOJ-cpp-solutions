#include <iostream>
#include <limits>
using namespace std;
main(){
    int n;
    cin>>n;
    int c[n+1],a[n+1],i,j;
    for(i=1;i<=n;i++) cin>>c[i]>>a[i];
    long long dp[n/2+1][n+1];
    dp[0][0]=0; 
    for(i=1;i<=n;i++){
     if(i<=n/2) dp[0][i]=dp[0][i-1]+a[i];
     else dp[0][i]=1e16;
    }
    for(i=1;i<=n/2;i++){    
        for(j=i;j<=n;j++){
            if(j/2<i) dp[i][j]=1e16;
            else{
            if(i==n/2){
            if(j==n) dp[i][j]=dp[i-1][j-1]+c[j];
            else dp[i][j]=1e16;
            }
            else dp[i][j]=min(dp[i-1][j-1]+c[j],dp[i][j-1]+a[j]);
        }}
    } 
    cout<<dp[n/2][n]<<endl;
}