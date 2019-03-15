#include <iostream>
#include <cmath>
using namespace std;
long long n,M;
void multiply(long long f[2][2],long long m[2][2]){
  long long x =  ((f[0][0]*m[0][0])%M + (f[0][1]*m[1][0])%M)%M; 
  long long y =  ((f[0][0]*m[0][1])%M + (f[0][1]*m[1][1])%M)%M; 
  long long z =  ((f[1][0]*m[0][0])%M + (f[1][1]*m[1][0])%M)%M; 
  long long k =  ((f[1][0]*m[0][1])%M + (f[1][1]*m[1][1])%M)%M; 
  f[0][0]=x,f[0][1]=y,f[1][0]=z,f[1][1]=k;
}
void power(long long f[2][2],long long  n){
    if(n==0||n==1) return;
    long long m[2][2]={{1,1},{1,0}};
    power(f,n/2);
    multiply(f,f);
    if(n%2) multiply(f,m);
}
long long fib(long long n){
    long long f[2][2]={{1,1},{1,0}};
    power(f,n-1);
    return f[0][0]; 
}
main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>M;
        M=pow(2,M);
        cout<<fib(n+1)<<endl;
    }
}