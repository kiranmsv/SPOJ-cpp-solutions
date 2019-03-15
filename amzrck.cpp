#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,k,sub1;
        cin>>n;
        if(n%2) sub1=n/2+1;
        else sub1=n/2;
        long long a[sub1+1][n+1]={0},sum=0;
        for(i=1;i<=n;i++) a[1][i]=i;
        for(i=2;i<=sub1;i++){
            for(j=i*2-1;j<=n;j++){
            sum=0;
            for(k=j-2;k>=0;k--) sum+=a[i-1][k];
            a[i][j]=sum;
        }
    }
    sum=0;
    for(i=1;i<=sub1;i++) sum+=a[i][n];
    cout<<sum+1<<endl;
}}