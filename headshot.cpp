#include <iostream>
#include <string>
using namespace std;
main(){
    string s;
    int ones=0,zeros=0,zaz=0,n;
    cin>>s;
    n=s.length();
    for(int i=0;i<n;i++){
     if(s[i]=='0') {
         zeros++;
         if(s[(i+n-1)%n]=='0') zaz++;
    } else ones++;}
    double a,b;
    a=double(zaz)/double(zeros);
    b=double(zeros)/double(n);
    if(a==b) cout<<"EQUAL"<<endl;
    if(a<b) cout<<"ROTATE"<<endl;
    if(a>b) cout<<"SHOOT"<<endl;
}