#include <iostream>
using namespace std;
main(){
int t,i,j;
cin>>t;
while(t--){
    int m,n;
    cin>>m>>n;
    string s[m];
for(i=0;i<m;i++) cin>>s[i];
int dp[m+1][n];
for(i=0;i<=m;i++) for(j=0;j<n;j++) dp[i][j]=0;
for(i=m-1;i>=0;i--){
    int sum=0;
    if(i%2==0){
        for(j=n-1;j>=0;j--){
            if(s[i][j]=='T'){
                dp[i][j]=max(++sum,1+dp[i+1][j]);
                sum=dp[i][j];
            }
            if(s[i][j]=='#'){
                dp[i][j]=0;
                sum=0;
            }if(s[i][j]=='0'){
                dp[i][j]=max(sum,dp[i+1][j]);
                sum=dp[i][j];
            }
        }
    }else{
        for(j=0;j<n;j++){
            if(s[i][j]=='T'){
                dp[i][j]=max(++sum,1+dp[i+1][j]);
                sum=dp[i][j];
            }
            if(s[i][j]=='#'){
                dp[i][j]=0;
                sum=0;
            }if(s[i][j]=='0'){
                dp[i][j]=max(sum,dp[i+1][j]);
                sum=dp[i][j];
            }
        }

    }
}cout<<(dp[0][0])<<endl;

}
}