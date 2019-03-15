#include <iostream>
#include <string>
using namespace std;
main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        string s;
        cin>>s;
        int a[s.length()];
        int top=-1;
        if(s[0]=='0') {
            cout<<"Case "<<k<<": no"<<endl;
            continue;} 
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') ++top,a[top]=1;
            else{
                if(a[top]==0&&a[top-1]==1) top-=2;
                else ++top,a[top]=0;
            }
        }
        if(top==-1) cout<<"Case "<<k<<": yes"<<endl;
        else cout<<"Case "<<k<<": no"<<endl;
    }
}