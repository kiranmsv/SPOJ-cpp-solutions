#include <bits/stdc++.h>
using namespace std;
long bit[100002];
struct ranks{
    long a,b,c;
};
bool compare(ranks r1,ranks r2){
    return r1.a<r2.a;
}
void update(long i,long value,int n){
    while(i<=n){
        if(bit[i]>value) bit[i]=value;
        i+=(-i&i);
            }
}
long readtree(long i){
    long pre=INT_MAX;
    while(i){
        pre=min(pre,bit[i]);
        i-=(i&-i);
    }return pre;
}
main(){
    int t,i;
    cin>>t;
    while(t--){
    long n,excellent=0;
    cin>>n;
    ranks r[n];
    for(i=0;i<n;i++) r[i].a;
    for(i=0;i<n;i++) r[i].b;
    for(i=0;i<n;i++) r[i].c;
    sort(r,r+n,compare);
    fill(bit,bit+n+2,INT_MAX);
    for(i=0;i<n;i++){
      if(readtree(r[i].b)>r[i].c) excellent++;
      update(r[i].b,r[i].c,n);
    }cout<<excellent<<endl;
    }
}