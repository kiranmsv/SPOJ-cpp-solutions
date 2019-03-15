#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    long long a[1000001];
    a[2]=2;
    for(long i=3;i<=1000000;i++){
        if(i%2==0) a[i]=1+a[i/2];
        else a[i]=1+a[i/2+1];
    }
    while(t--){
        long n;
        cin>>n;
        cout<<a[n]<<endl;
    }
}