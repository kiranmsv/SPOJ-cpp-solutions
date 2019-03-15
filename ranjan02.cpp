#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    long long a[36];a[1]=2;
    for(int i=2;i<=35;i++) a[i]=3*a[i-1]+2;
    while(t--){
    int n;
    cin>>n;
    cout<<a[n]<<endl;
    }
}