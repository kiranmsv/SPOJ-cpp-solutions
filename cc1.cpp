#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b,k;
        cin>>n>>a>>b>>k;
        long long sum=n/a+n/b-n/(a*b);
        if(sum>=k) cout<<"Win"<<endl;
        else cout<<"Lose"<<endl;
    }
}