#include <bits/stdc++.h>
using namespace std;
main(){
    long t;
    cin>>t;
    while(t--){
        int h,p,a;
        scanf("%d %d %d",&h,&p,&a);
        if(h<=p){
            printf("1\n");
            continue;
        } 
        double A=p,B=p-2*a,C=2*(a-h),temp;
        temp=sqrt(B*B-4*A*C);
        long r=ceil(((-B+temp)/(2*A)));
        printf("%ld\n",r*2-1);
    }
}