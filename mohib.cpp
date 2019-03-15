#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        long x,a,sum,n;
        cin>>x>>a;
        n=a-x;
        sum=(a-x)*(a+1);
        cout<<sum-((n-1)*n)/2<<endl;
    }
}