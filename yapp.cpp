#include <iostream>
#include <cmath>
using namespace std;
long long mod=1e9+7;
long long pow(long long n){
    if(n==1) return 2;
    else if(n%2==0) return ((pow(n/2)%mod)*(pow(n/2)%mod))%mod;
    else return (2*(pow(n/2)%mod)*(pow(n/2)%mod))%mod;
}
main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1) cout<<"1"<<endl;
        else cout<<pow(n-1)<<endl;
    }
    
}