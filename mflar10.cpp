#include <iostream>
using namespace std;
main(){
while(1){
    string s;
    getline(cin,s);
    if(s=="*") break;
    int l=s.length(),i,start=s[0],check=0;
    for(i=1;i<l;i++){
        int temp=s[i-1];
        if(temp==32){
            int n=s[i];
            if(start>96){
                if(n!=start&&start-32!=n){ cout<<"N"<<endl; check=1;break;}
            }else if(n!=start&&start+32!=n){cout<<"N"<<endl; check=1;break;}
        }
    }if(check==0) cout<<"Y"<<endl;
}
} 