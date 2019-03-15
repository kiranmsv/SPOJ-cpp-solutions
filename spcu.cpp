#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        long n,check=0,i,c=0;
        cin>>n;
        long a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) if(a[i]>i) c=1;
        if(c==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}