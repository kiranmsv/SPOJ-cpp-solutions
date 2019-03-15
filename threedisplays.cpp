#include <iostream>
using namespace std;
int main(){
  long long int n,i,j,cost=0;
  cin>>n;
  long long f[n],c[n],d1[n]={0},d2[n]={0};
  for(i=0;i<n;i++) cin>>f[i];
  for(i=0;i<n;i++) cin>>c[i];
  for(i=1;i<n-1;i++){
    for(j=i-1;j>=0;j--){
      if(f[i]>f[j]){
        if(d1[i]==0) d1[i]=c[i]+c[j];
        else if(d1[i]>c[i]+c[j]) d1[i]=c[i]+c[j];
      }
    }
  }
  for(i=2;i<n;i++){
    for(j=i-1;j>0;j--){
      if(f[i]>f[j]&&d1[j]!=0){
        if(d2[i]==0) d2[i]=c[i]+d1[j];
        else if(d2[i]>c[i]+d1[j]) d2[i]=c[i]+d1[j];
      }
    }
  }
  for(i=2;i<n;i++){
    if(cost==0) cost=d2[i];
    else if(d2[i]<cost&&d2[i]!=0) cost=d2[i];
  }
  if(cost<=0) cout<<"-1"<<endl;
  else cout<<cost<<endl;
  //for(i=0;i<n;i++) cout<<d1[i];
  //for(i=0;i<n;i++) cout<<d2[i];
}