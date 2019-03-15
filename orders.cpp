#include <bits/stdc++.h> 
using namespace std;
long cfre(long Bit[],long idx){
    long sum=0;
    while(idx){
        sum+=Bit[idx];
        idx-=(idx & -idx);
    }return sum;
}
bool value_At(long Bit[],long idx){
    long sum=Bit[idx],z=idx-(idx&-idx);
    idx--;
    while(idx!=z){
        sum-=Bit[idx];
        idx-=(idx&-idx);
    }
    return sum;
}
long bs(long Bit[],long value,long s,long e){
    long mid=(s+e)/2;
    if(s==e) return mid;
    if(cfre(Bit,mid)==value && value_At(Bit,mid)) return mid;
    if(cfre(Bit,mid)==value && !value_At(Bit,mid)) return bs(Bit,value,s,mid-1);
    if(cfre(Bit,mid)<value) return bs(Bit,value,mid+1,e);
    else return bs(Bit,value,s,mid-1);
}
    void updateBit(long Bit[],long idx,long n){
    while(idx<=n){
        Bit[idx]--;
        idx+=(idx&-idx);
    }
    }
main(){
    int t;
    cin>>t;
    while(t--){
        long n,i;
        cin>>n;
        long a[n],arrange[n],Bit[n+1]={0};
        for(i=1;i<=n;i++){
           Bit[i]=(-i&i);
        }
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++){
            arrange[n-i-1]=bs(Bit,n-i-a[n-i-1],1,n);
            updateBit(Bit,arrange[n-i-1],n);
        }
        for(i=0;i<n;i++) cout<<arrange[i]<<" ";
    }
}