#include <bits/stdc++.h>
using namespace std;
bool check(double a[],double mid,long long int n,long long int f){
    long long int count=0;
    for(long long int i=0;i<n;i++) count=count+a[i]/mid;
    if(count>140) return 1;else return 0;
}
void bs(double a[],double s,double e,long long int n,long long int f,int count){
if(count==1000) {printf("%.4lf\n",s); return;} 
double mid=(s+e)/2;
if(check(a,mid,n,f)==1) bs(a,mid,e,n,f,++count); 
else bs(a,s,mid,n,f,++count);
}   
main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,f,i;
        cin>>n>>f;
        double a[n],pi=acos(-1);
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++) a[i]=pi*a[i]*a[i];
        bs(a,0,a[n-1],n,++f,0);
    }
}