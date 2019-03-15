#include <bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,D,q,i;
        cin>>D;
        int d[32]={0};
        for(i=0;i<D;i++){ 
            cin>>a>>b;
            d[a]=b;} 
        cin>>q;
        while(q--){
            int sum=0;
            cin>>a>>b;
            for(i=1;i<=a;i++) sum=sum+d[i];
            if(sum<b) cout<<"Go Sleep"<<endl;
            else cout<<"Go Camp"<<endl;
        }

    }
}
