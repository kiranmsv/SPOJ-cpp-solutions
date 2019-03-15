#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int sa=0;
void fill_segt(long long segt[],long long s,long long e,long long a[],long long node){
    if(s==e) {
        segt[node]=a[s-1];
        return;}
        else{
        fill_segt(segt,s,(s+e)/2,a,2*node);
        fill_segt(segt,(s+e)/2+1,e,a,2*node+1);
        segt[node]=segt[2*node]&segt[2*node+1];
        }
}
long long query(long long segt[],long long s,long long e,long long node,long long min,long long max){
    long long l=__LONG_LONG_MAX__;
    if(s>max||e<min) return l;
    if(s>=min&&e<=max) return segt[node];
    return (query(segt,s,(s+e)/2,node*2,min,max))&(query(segt,(s+e)/2+1,e,node*2+1,min,max));
}
main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,i,temp=__LONG_LONG_MAX__;
        cin>>n>>k;
        long long p=log(n)/log(2);
        p=2*pow(2,p+1);
        long long a[n],segt[p];
        for(i=0;i<n;i++) cin>>a[i];
        if(k>=n/2){
            for(i=0;i<n;i++) temp=temp&a[i];
            for(i=0;i<n;i++) cout<<temp<<" ";
            continue;
        }
        fill_segt(segt,1,n,a,1);
        for(i=0;i<n;i++){
            if(i-k<0){
                cout<< (query(segt,1,n,1,1,i+k+1) & query(segt,1,n,1,n-(k-i)+1,n)) <<" ";
            }else if(i+k>n-1){
                cout<< (query(segt,1,n,1,i-k+1,n)&query(segt,1,n,1,1,k-n+i+1)) <<" ";            
            }else {
                cout<<query(segt,1,n,1,i-k+1,i+k+1)<<" ";
                }
        }
        cout<<endl;
    }
} 
