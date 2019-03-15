#include <iostream>
#include <cmath>
using namespace std;
long long prime[50000000]={0};
double mod(double a,double b){
    return a>b?(a-b):(b-a);
}
main(){
    long long i,j;
    for(i=3;i<10000;i+=2){
        if(prime[i/2]==0){
        for(j=i*3;j<100000000;j+=2*i){
            prime[j/2]=1;
        }}
    }
    prime[0]=1;
    for(i=1;i<50000000;i++) prime[i]=prime[i-1]+(1-prime[i]);
    //for(i=22;i<=25;i++) cout<<prime[i]<<" ";
    //cout<<prime[5000000]<<endl;
    while(1){
        long long x;
        cin>>x;
        if(x==0) break;
        double d=x/log(x);
        double d1;
        if(x%2) d1=prime[x/2];
        else d1=prime[(x-1)/2];
        //cout<<d<<" "<<d1<<" ";
        d=(mod(d1,d)/d1)*100;
        printf("%.1f\n",d);
    }
}