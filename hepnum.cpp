#include <bits/stdc++.h>
using namespace std;
main(){
    while(1){
        string a,b,temp;
        char c='=';
        int diff,i;
        cin>>a>>b;
        if(a[0]=='*') break;
        int m=a.length(),n=b.length();
        if(m>n) diff=m-n;else diff=n-m;
        for(i=0;i<diff;i++) temp+='0';
        if(m<n) a=temp+a;else b=temp+b;
        for(i=0;i<a.length();i++){
            int t1=a[i],t2=b[i];
            if(t1>t2){
                c='>';
                break;
            }else if(t1<t2){
                c='<';
                break;
            } 
        }
        cout<<c<<endl;
}}