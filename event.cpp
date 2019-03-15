#include <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int a,b,count=0,s,min,i,j;
        cin>>a>>b;
        if(s1=="monday") i=1;if(s1=="tuesday") i=2;if(s1=="wednesday") i=3;if(s1=="thursday") i=4;
        if(s1=="friday") i=5;if(s1=="saturday") i=6;if(s1=="sunday") i=7;
        if(s2=="monday") j=1;if(s2=="tuesday") j=2;if(s2=="wednesday") j=3;if(s2=="thursday") j=4;
        if(s2=="friday") j=5;if(s2=="saturday") j=6;if(s2=="sunday") j=7;
        if(j<i) min=j+7-i+1;else min=j-i+1; 
        //cout<<i<<" "<<j<<" "<<min<<endl;
            for(int i1=min;i1<=b;i1+=7){
                if(i1>=a&&i1<=b) {count++; s=i1;}
            }
            if(count==0) cout<<"impossible"<<endl;
            if(count==1) cout<<s<<endl;
            if(count>1) cout<<"many"<<endl;
    }
}