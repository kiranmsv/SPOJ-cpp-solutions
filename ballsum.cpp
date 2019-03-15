#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b){
if(b%a==0)return a; else return GCD(b%a,a);
}
main(){
    while(1){
        long long n,k,num,den,gcd;
        scanf("%lld %lld",&n,&k);
        if(k<3||k>2*n-1) {
            printf("0\n");
            continue;
        }
        if(k==-1&&n==-1) break;
        if(k==3) {
            printf("1\n");
            continue;}
            k-=2;
            num=(k/2)*((k/2)+1);
            if(k%2==1) num+=k/2+1;
            den=(n*(n-1))/2;
            gcd=GCD(num,den);
            num=num/gcd;
            den=den/gcd;
            printf("%lld/%lld\n",num,den);
    }
}