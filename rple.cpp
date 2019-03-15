#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        int n,r,i,s,p,c=0;
        bool a[10001]={0},b[10001]={0};
        cin>>n>>r;
        for(i=0;i<r;i++){
            cin>>s>>p;
            if(b[s]==1||a[p]==1){
                c=1;
            }else{
                a[s]=1;
                b[p]=1;
            }
        }
        if(c==1) cout<<"Scenario #"<<j<<": spied"<<endl;
        else cout<<"Scenario #"<<j<<": spying"<<endl;
    }
}