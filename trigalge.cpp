#include <iostream>
#include <cmath>
using namespace std;
main(){
     int t;
     cin>>t;
     while(t--){
         int ite=10;
         double a,b,c;
         scanf("%lf %lf %lf",&a,&b,&c);
         double x=-1,x2=c/a;
         while(x2!=x&&ite--){
             x=x2;
             x2=x-(a*x+b*sin(x)-c)/(a+b*cos(x));
         }
         printf("%.6lf\n",x2);
     }
}