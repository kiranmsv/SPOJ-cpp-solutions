#include <bits/stdc++.h>
using namespace std;
bool m[200001];
long long segt[300000];
void build(long long a[],int node,int s,int e){
    if(s==e) {
        segt[node]=a[s-1];
        return;}
        build(a,node*2,s,(s+e)/2);
        build(a,node*2+1,(s+e)/2+1,e);
        segt[node]=segt[node*2]+segt[node*2+1];
}
void update(int node,int l,int r,int s,int e){
    if(s>r||e<l) return;
    if(s==e) {
        segt[node]=sqrt(segt[node]);
        if(segt[node]==1) m[s]=1;
        return;}
    update(node*2,l,r,s,(s+e)/2);
    update(node*2+1,l,r,(s+e)/2+1,e);
    segt[node]=segt[node*2]+segt[node*2+1];
}
long long query(int node,int l,int r,int s,int e){
    if(s>r||e<l) return 0;
    if(s>=l&&e<=r) return segt[node];
    return query(node*2,l,r,s,(s+e)/2)+query(node*2+1,l,r,(s+e)/2+1,e);
}
main(){
    int c=0,n,i;
    while(scanf("%d",&n)!=EOF){
      for(i=1;i<=n;i++) m[i]=0;
      cout<<"Case #"<<(++c)<<":"<<endl;
      long long a[n];
      for(i=0;i<n;i++) scanf("%lld",&a[i]);
      int q,l,r,type;
      scanf("%d",&q);
      build(a,1,1,n);
      while(q--){
        int check=0;
        scanf("%d %d %d",&type,&l,&r);
        if(l>r) swap(l,r);
        if(type) {
            for(i=l;i<=r;i++){
                if(m[i]!=1){
                    check=1;
                    break;
                } 
            }if(check==1) printf("%lld\n",query(1,l,r,1,n));
            else printf("%d",r-l+1);
            }
        else {
             for(i=l;i<=r;i++){
                if(m[i]!=1){
                    check=1;
                    break;
                }  
      } }}
      cout<<endl;
        }
}