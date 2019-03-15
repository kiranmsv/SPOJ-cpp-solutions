#include <bits/stdc++.h>
using namespace std;
main(){
    long long i,n,k,m,sum=0,ind=0;
    cin>>n>>k>>m;
    long long a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
        ind=i;
        break;
        }}
    if(m>=ind){
        sum=(n-ind)*a[n-1];
        if((n-ind)*k<=(m-ind)) sum+=(n-ind)*k;
        else sum+=m-ind;
        printf("%.17f\n",double(sum)/double(n-ind));
    }else{
        for(i=m;i<n;i++) sum+=a[i];
        printf("%.17f\n",double(sum)/double(n-m));
    }
        
}