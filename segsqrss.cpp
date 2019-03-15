#include <iostream>
#include <cmath>
using namespace std;
long long l;
void build_tree(long long segt[],long long a[],long long s,long long e,long long node){
    if(s==e) segt[node]=a[s-1]*a[s-1];
    else{
        build_tree(segt,a,s,(s+e)/2,2*node);
        build_tree(segt,a,(s+e)/2+1,e,2*node+1);
        segt[node]=segt[node*2]+segt[node*2+1];
    }
}
void update0(long long segt[],long long a[],long long s,long long e,long long node,long long start,long long end,long long x){
    if(s>end||e<start) return;
    if(s==e) {
        a[s-1]=x;
        segt[node]=a[s-1]*a[s-1];
        return;}
    else{
            update0(segt,a,s,(s+e)/2,node*2,start,end,x);
            update0(segt,a,(s+e)/2+1,e,node*2+1,start,end,x);
            segt[node]=segt[node*2]+segt[node*2+1];
        }
}
void update1(long long segt[],long long a[],long long s,long long e,long long node,long long start,long long end,long long x){
    if(s>end||e<start) return;
    if(s==e) {
        a[s-1]+=x;
        segt[node]=a[s-1]*a[s-1];
        return;}
    else{
            update1(segt,a,s,(s+e)/2,node*2,start,end,x);
            update1(segt,a,(s+e)/2+1,e,node*2+1,start,end,x);
            segt[node]=segt[node*2]+segt[node*2+1];
    } 
}
long long query(long long segt[],long long s,long long e,long long node,long long start,long long end){
    if(s>end||e<start) return 0;
    if(s>=start&&e<=end) return segt[node];
    return query(segt,s,(s+e)/2,node*2,start,end)+query(segt,(s+e)/2+1,e,node*2+1,start,end);
}
main(){
long long c=0,t;
cin>>t;
while(t--){
    long long n,q,i;
    cin>>n>>q;
    cout<<"Case "<<++c<<":"<<endl;
    long long a[n];
    for(i=0;i<n;i++) cin>>a[i];
    l=log(n)/log(2);
    l=2*pow(2,l+1);
    long long segt[l],x,start,end,temp,node=1;
    build_tree(segt,a,1,n,node);
    for(i=0;i<q;i++){
        cin>>temp;
        if(temp==2){
            cin>>start>>end;
            cout<<query(segt,1,n,node,start,end)<<endl;
        }else {
            cin>>start>>end>>x;
            if(temp==1) update1(segt,a,1,n,node,start,end,x);
            else update0(segt,a,1,n,node,start,end,x);
}
    }
}
}