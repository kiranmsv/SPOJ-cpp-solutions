#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        double n,sum;
        cin>>n;
        sum=1.0/2.0+(n*(n+3))/((n+1)*(n+2)*4);
        cout<<fixed<<setprecision(11)<<sum<<endl;
    }}
