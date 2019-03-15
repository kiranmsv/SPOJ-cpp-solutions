#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double base[1000000],len[1000000],depth[1000000],bre[1000000],v,temp;
int n;
double mod(double a,double b){
    return a>b?(a-b):(b-a);
}
int check(double x){
    double sum=0;
    for(int i=0;i<n;i++){
        if(base[i]<x){
            if(x-base[i]>=depth[i]) sum+=depth[i]*len[i]*bre[i];
            else sum+=(x-base[i])*len[i]*bre[i]; 
        }
    }
    if(sum>=v) return 1;
    return 0; 
}
double bs(double s,double e){
if(check(e)==0) return -1;
if(e-s<0.000001) return s;
double mid=(s+e)*0.5;
if(check(mid)==1) return bs(s,mid);
return bs(mid,e);
}
main(){
    int t;
    cin>>t;
    while(t--){
     cin>>n;
     for(int i=0;i<n;i++){
         cin>>base[i]>>depth[i]>>bre[i]>>len[i];
     }
     cin>>v;
    temp=bs(0,2000000);
    if(temp==-1) cout<<"OVERFLOW"<<endl;
    else printf("%.2lf\n",temp);
    }
}