#include <bits/stdc++.h>
using namespace std;
bool a[50000000]={0};
main(){
  cout<<"2"<<endl;
  long i,c=0,j;
  for(i=3;i<1e4;i+=2){
    if(a[i/2]==0){
      c++;
      if(c%100==0) cout<<i<<endl;
      for(j=i*3;j<1e8;j+=i*2){
        if(a[j/2]==0) a[j/2]=1;
      }
    }
  }
  for(i=1e4+1;i<1e8;i+=2){
    if(a[i/2]==0){
      c++;
      if(c%100==0) cout<<i<<endl;
    }
  }
}