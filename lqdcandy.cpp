#include <iostream>
#include <cmath>
using namespace std;
main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long p=log(n)/log(2);
        if(pow(2,p)!=n) p++;
        long long t2=pow(2,p);
        for(long long i=0;i<=p;i++){
            long long t1=pow(2,i);
            if((t1&n)==t1){
                cout<<t2<<" "<<p-i<<endl;
                break;
            }
        } 
    }
}