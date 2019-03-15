#include <iostream>
#include <cmath>
using namespace std;
main(){
    long long mod=1000000003,a[1000001],i;
    a[1]=1;
    long long pre=1;
    for(i=2;i<=1000000;i++){
        a[i]=((i*i*i)%mod+(a[i-1])%mod+(pre%mod))%mod;
        pre=(pre+(i*i*i))%mod;
        }
    long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}