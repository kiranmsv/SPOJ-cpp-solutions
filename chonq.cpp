#include <bits/stdc++.h>
using namespace std;
int n;
long long anger(int a[],int ind){
    long long sum=0,j=0;
    for(int i=ind;i<n;i++){
        ++j;
        sum+=a[i]/j;
    }return sum;
}
main(){
int t;
cin>>t;
while(t--){
    long long k;
    cin>>n>>k;
    int a[n],pos=-1;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(anger(a,i)<=k){
            pos=i+1;
            break;
        }
    }
    if(pos==-1) pos=n+1;
    cout<<pos<<endl;
}
}