#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        int a[1000];
        a[0]=0;
        for(i=1;i<=2*(n-1);i++){
            if(c==0) a[i]==a[i-1]+1;
            if(i==n) c=1;
            if(c==1&&a[i-1]==n) a[i]=n;
            else a[i]=a[i-1]-1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
            }cout<<"/n";;
        }
    }
}