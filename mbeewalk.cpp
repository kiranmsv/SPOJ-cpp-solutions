#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,k;
        cin>>n;
        long long a[2*n+3][2*n+3][n+1];
        for(i=0;i<2*n+3;i++) for(j=0;j<2*n+3;j++) a[i][j][1]=0;
        a[n+2][n+1][1]=1;a[n][n+1][1]=1;a[n+1][n+2][1]=1;a[n+2][n+2][1]=1;a[n+2][n][1]=1;a[n+1][n][1]=1;
        for(k=2;k<=n;k++){
            for(i=1;i<=2*n+1;i++){
                for(j=1;j<=2*n+1;j++){
                    if(n%2==0){
                        if(j%2==1) a[i][j][k]=a[i-1][j][k-1]+a[i+1][j][k-1]+a[i][j+1][k-1]+a[i+1][j+1][k-1]+a[i][j-1][k-1]+a[i+1][j-1][k-1];
                        else a[i][j][k]=a[i-1][j][k-1]+a[i+1][j][k-1]+a[i][j+1][k-1]+a[i-1][j+1][k-1]+a[i][j-1][k-1]+a[i-1][j-1][k-1];
                    }else{
                        if(j%2==1) a[i][j][k]=a[i-1][j][k-1]+a[i+1][j][k-1]+a[i][j+1][k-1]+a[i-1][j+1][k-1]+a[i][j-1][k-1]+a[i-1][j-1][k-1];
                        else a[i][j][k]=a[i-1][j][k-1]+a[i+1][j][k-1]+a[i][j+1][k-1]+a[i+1][j+1][k-1]+a[i][j-1][k-1]+a[i+1][j-1][k-1];
                    }
                }
            }
        }
        cout<<a[n+1][n+1][n]<<endl;
    }
}