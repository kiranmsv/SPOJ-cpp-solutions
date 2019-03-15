#include <bits/stdc++.h>
using namespace std;
int prime[200001]={0};
main(){
    long long sum=0;
  for(int i=2;i<2000000/2;i++){
      if(prime[i]==1) continue;
      for(int j=i*2;j<=2000000;j+=i){
          prime[j]=1;
      }
  }
 for(int i=2;i<2000000;i++) if(prime[i]==0) sum+=i;
 cout<<sum;
}