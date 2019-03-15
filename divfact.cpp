#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
long long mod=1e9+7;
long long legndre(int n,int d){
    int e=1;
    long long count=0;
    while(n>=pow(d,e)) {
        count+=n/pow(d,e);
        count=count%mod;
        e++;}
        return count;
}
main(){
    int i,j;
    long long prime[50001]={0};
    vector <long> v;
        for(i=2;i<50000;i++){   
            if(prime[i]==0){    
            v.push_back(i);
            for(j=i*2;j<50000;j+=i){
                prime[j]=1;
            }}
        }
    int t;
    cin>>t;
    while(t--){
        long long count=1;
        long n;
        cin>>n;
        for(i=0;i<v.size();i++) count=((count%mod)*((legndre(n,v[i])+1)%mod))%mod;
        cout<<count<<endl;
    }
}