#include <iostream>
using namespace std;
main(){
    while(1){
        long long w,i;
        cin>>w;
        if(w==-1) break;
        long long t[w+1],t1[w+1],t2[w+1];
        t[1]=0;t[2]=3;t1[2]=0;t2[2]=1;
        for(i=3;i<=w;i++){
            t[i]=t[i-2]+2*t1[i-1];
            t1[i]=t2[i-1]+t[i-1];
            t2[i]=t1[i-1];
        }
        //for(i=0;i<4;i++) cout<<t[i]<<" "<<t1[i]<<" "<<t2[i]<<" "<<t3[i]<<endl;
        cout<<t1[w]<<endl;
    }
}