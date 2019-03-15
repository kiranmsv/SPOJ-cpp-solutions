#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n+1]={0},c[n+1]={0},count=0;
        long long ways[n][5],sum=1;
        ways[0][0]=1,ways[0][1]=0,ways[0][2]=0,ways[0][3]=0,ways[0][4]=1;
        for(int i=0;i<n;i++) cin>>a[i];
        b[n-1]=0;
        for(int i=0;i<=n-1;i++) if(a[i]==1){
            c[i]=1;
            if(a[i+1]==2) c[i]=2;
        }
        for(int i=n-2;i>=0;i--){
            if(a[i+1]==2) b[i]=++count;
            else b[i]=0,count=0; 
    }
        for(int i=0;i<n;i++) if(b[i]%2==0) b[i]+=c[i+b[i]+1];
        for(int i=1;i<n-1;i++) if(b[i]==0) b[i]=1;
        //for(int i=0;i<n;i++) cout<<b[i]<<" ";
        for(int i=1;i<n;i++){
        if(i>1&&a[i-2]==2){
            ways[i][0]=(ways[i-2][4]-ways[i-2][3]+mod)%mod;
        }else ways[i][0]=0;
        ways[i][1]=(ways[i-1][0]+ways[i-1][1])%mod;
        if(a[i-1]==2&&b[i]>0) ways[i][2]=ways[i][1],b[i]-=1; else ways[i][2]=0;
        if(b[i]>0) ways[i][3]=(ways[i][2]*b[i])%mod;else ways[i][3]=0;
        ways[i][4]=(ways[i][0]+ways[i][1]+ways[i][2]+ways[i][3])%mod;
        sum=(sum+ways[i][4])%mod;
    }
       /* for(int i=0;i<n;i++){
        for(int j=0;j<5;j++) cout<<ways[i][j]<<" ";
        cout<<endl;
    }*/
        cout<<sum<<endl;
}}