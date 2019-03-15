#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,temp;
        cin>>n;
        int a[n+1]={0};
        for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>=n){
            c=1;
            continue;
        }
        if(a[temp+1]==0){
            a[temp+1]=1;
            continue;        
        } 
        if(a[n-temp]==0){
            a[n-temp]=1;
            continue;
        }
            c=1;
            continue;
        }
        if(c==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}