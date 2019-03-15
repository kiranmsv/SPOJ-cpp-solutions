#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    int square[32];
    int dp[1001];
    for(int i=0;i<1001;i++) dp[i]=i;
    for(int i=0;i<32;i++) square[i]=i*i;
    for(int i=1;i<1001;i++){
        for(int j=1;j<32;j++){
            if(square[j]>i) break;
            if(1+dp[i-square[j]]<dp[i]) dp[i]=1+dp[i-square[j]];
        }
    }
    while(t--){
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
}