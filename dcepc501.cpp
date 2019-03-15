#include <iostream>
using namespace std;
long long int max(long long int a,long long int b,long long int c){
    return a>b?(a>c?a:c):(b>c?b:c);
}
main(){
    int t;
    cin>>t;
    while(t--){
        long int n,i;
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        long long int dp[n+4]={0};
        dp[n-1]=a[n-1];dp[n-2]=dp[n-1]+a[n-2];dp[n-3]=dp[n-2]+a[n-3];
        for(i=n-4;i>=0;i--) dp[i]=max(a[i]+dp[i+2],a[i]+a[i+1]+dp[i+4],a[i]+a[i+1]+a[i+2]+dp[i+6]);
        cout<<dp[0]<<endl;
    }
}