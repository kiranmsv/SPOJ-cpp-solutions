#include <bits/stdc++.h>
using namespace std;
main(){
    int a[1000001];
    long c=0,i,j;
    for(i=2;i<=1e6;i++) a[i]=2;
    for(i=2;i<=5e5;i++){
        for(j=i*2;j<=1e6;j+=i){
            a[j]++;
        }
    }
    for(i=2;i<=100;i++){
        if(a[i]==2) a[i*i*i]=3;
    }
    for(i=3;i<=1e6;i++){
        if(a[a[i]]==4){
            c++; 
            if(c%9==0){
            cout<<i<<endl;
        } }
    }
}