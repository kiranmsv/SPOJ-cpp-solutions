#include <iostream>
#include <cmath>
using namespace std;
main(){
int t;
cin>>t;
while(t--){
    long long int n,k,m,count=0;
    cin>>n>>k>>m;
    if(m<n){cout<<"0"<<endl; continue;}
    m=m/n;
    count=log(m)/log(k);
    cout<<count<<endl;
}
}