#include <bits/stdc++.h>
using namespace std;
main(){
    int test;
    cin>>test;
    while(test--){
        int n,time,m,i,j,k,tt;
        cin>>n>>time;
        int t[n+1][n+1],r[n+1][n+1];
        for(i=1;i<=n;i++) for(j=1;j<=n;j++) cin>>t[i][j];
        for(i=1;i<=n;i++) for(j=1;j<=n;j++) cin>>r[i][j];
        int dp[time+1][n+1];
        for(i=0;i<=n;i++) dp[0][i]=-1;
        for(i=1;i<=time;i++) dp[i][1]=-1;
        dp[0][1]=0;
        for(i=1;i<=time;i++){
            for(j=2;j<=n;j++){
                m=-1;
                for(k=1;k<=n;k++){
                    if(j==k){
                        continue;
                    }
                    if(i-t[k][j]>=0){
                        if(dp[i-t[k][j]][k]!=-1){
                            if(m==-1) m=r[k][j]+dp[i-t[k][j]][k];
                            else m=min(m,r[k][j]+dp[i-t[k][j]][k]);
                        }
                    }
                }dp[i][j]=m;
            }
        }
        m=-1;
        for(i=1;i<=time;i++){
            if(dp[i][n]!=-1) {
                if(m==-1){
                m=dp[i][n];
                tt=i;}
            else{
                if(dp[i][n]<m){
                    m=dp[i][n];
                    tt=i;
                }
            }
        }}
        /*for(i=0;i<=time;i++){
        for(j=1;j<=n;j++) cout<<dp[i][j]<<" ";
        cout<<endl;}*/
        if(m==-1) cout<<m<<endl;
        else cout<<m<<" "<<tt<<endl;
    }
}