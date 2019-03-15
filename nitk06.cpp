#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,i;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                c=1;
                break;
            }else{
                a[i-1]-=a[i];
                a[i]=0;
            }
        }if(a[0]==0&&c==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}