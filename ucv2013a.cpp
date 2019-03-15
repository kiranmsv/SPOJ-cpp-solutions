#include <iostream>
using namespace std;
main(){
    long long mod=1e9+7;
    while(1){
        long long i,n,l,sum=0;
        cin>>n>>l;
        if(n==0&&l==0) break;
        long long dp[l+1];
        dp[1]=n;
        for(i=2;i<=l;i++){
            if(i%2) dp[i]=(((dp[i/2]%mod)*(dp[i/2]%mod))%mod*dp[1])%mod;
            else dp[i]=((dp[i/2]%mod)*(dp[i/2]%mod))%mod;
        }
        for(i=1;i<=l;i++){
          sum=(sum+dp[i])%mod;
        }
        cout<<sum<<endl;
    }
}