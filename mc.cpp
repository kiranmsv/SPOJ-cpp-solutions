#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
main(){
    while(1){
        string s,t;
        cin>>s;
        if(s[0]=='#') break;
        cin>>t;
        int m=s.length(),n=t.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++) dp[i][0]=i*15;
        for(int i=0;i<=n;i++) dp[0][i]=i*30;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
               if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
               else dp[i][j]=min(15+dp[i-1][j],30+dp[i][j-1]);
            }
        }
        cout<<dp[m][n]<<endl;
    }
}