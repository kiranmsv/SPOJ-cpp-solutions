#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7; 
main(){ 
    int n,v,temp;
    cin>>n>>v;
    if(n-1>v) {temp=n-v;
    cout<<((temp*(temp+1))/2+v-1)<<endl;}
    else{ cout<<n-1<<endl;}
}