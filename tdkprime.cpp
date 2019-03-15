#include <bits/stdc++.h>
using namespace std;
bool a[50000000]={0};
long b[5000001];
main(){
  long i,j,c=1;
  b[1]=2;
  for(i=3;i<sqrt(1e8);i+=2){
    if(a[i/2]==0){
        ++c;
        b[c]=i;
      for(j=i*3;j<1e8;j+=i*2){
        if(a[j/2]==0) a[j/2]=1;
      }
    }
  }
  for(i=sqrt(1e8)+1;i<1e8;i+=2){
    if(a[i/2]==0){
      ++c;
      b[c]=i;
      if(c==5000000) break;
    }
  }
  long t;
  cin>>t;
  while(t--){
      long n;
      cin>>n;
      cout<<b[n]<<endl;
  }
}