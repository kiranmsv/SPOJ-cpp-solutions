#include <iostream>
#include <string>
using namespace std;
long long gcd(long long a,long long b){
    if(a>b) if(a%b==0) return b;else return gcd(b,a%b);
    else if(b%a==0) return a;else return gcd(a,b%a);
}
main(){
    while(1){
        long long lcm=1,c=0,i;
        string s;
        cin>>s;
        if(s=="*") break;
        for(i=1;i<=s.length();i++){
            if(s[i-1]=='Y'){
                lcm=(lcm*i)/gcd(lcm,i);
            }
        }
        for(i=0;i<s.length();i++){
            if(s[i]=='N'&&lcm%(i+1)==0) c=1;
        }
        if(c==1) cout<<"-1"<<endl;
        else cout<<lcm<<endl;
    }
}