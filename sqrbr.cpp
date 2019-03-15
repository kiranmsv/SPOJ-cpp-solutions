#include <iostream>
using namespace std;
long long int count(int a[],int index,int c,int n){ 
    if(index==n&&a[index]!=1&&c==1) return 1;
    else if(a[index==1]||c<1) return count(a,index+1,c+1,n);
    else return count(a,index+1,c+1,n)+count(a,index+1,c-1,n);
}
main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i,temp;
        cin>>n>>k;
        int a[2*n+1]={0};
        while(k--){
            cin>>temp;
            a[temp]=1;
        }
        for(i=1;i<=2*n;i++) cout<<a[i];
       // cout<<count(a,2,1,2*n)<<endl;
    }
}