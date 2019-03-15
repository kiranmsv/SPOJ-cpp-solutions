#include <iostream>
using namespace std;
main(){
    while(1){
        int n,m,i,j;
        cin>>n>>m;
        if(n==0&&m==0) break;
        int bm[n][m],ym[n][m];
        long long dp[n+1][m+1];
        for(i=0;i<=n;i++) for(j=0;j<=m;j++) dp[i][j]=0;
        for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>ym[i][j];
        for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>bm[i][j];
        for(j=m-1;j>=0;j--) for(i=n-2;i>=0;i--) ym[i][j]+=ym[i+1][j];
        for(i=m-1;i>=0;i--) for(j=n-2;j>=0;j--) bm[i][j]+=bm[i][j+1];
        for(j=m-1;j>=0;j--) for(i=n-1;i>=0;i--){
            dp[i][j]=max(ym[i][j]+dp[i][j+1],bm[i][j]+dp[i+1][j]);
        }
        cout<<dp[0][0]<<endl;
    }
}