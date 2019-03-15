#include <iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
        long  w,i;
        cin>>w;
        long long t[w+1],t1[w+1],t2[w+1],t3[w+1];
        t[1]=1;t[2]=5;t1[2]=2;t2[2]=1;t3[2]=1;t[0]=0;
        for(i=3;i<=w;i++){
            t[i]=t[i-1]+t[i-2]+2*t1[i-1]+t2[i-1];
            t1[i]=t1[i-1]+t[i-1];
            t2[i]=t[i-1]+t3[i-1];
            t3[i]=t2[i-1];
        }
        //for(i=0;i<4;i++) cout<<t[i]<<" "<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
        cout<<j<<" "<<t[w]<<endl;
    }
}