#include <bits/stdc++.h>
using namespace std;
int i=-1,n;
int findweight(string s){
    int presum,sum=0,temp;
    while(++i<n){
        if(s[i]=='(') presum=findweight(s),sum+=presum;
        else if(s[i]=='H') presum=1,sum+=1;
        else if(s[i]=='C') presum=12,sum+=12;
        else if(s[i]=='O') presum=16,sum+=16;
        else if(s[i]==')') break;
        else temp=s[i]-48,sum+=presum*(temp-1);
    }
    return sum;
}
main(){
    string s;
    cin>>s;
    n=s.length();
    cout<<findweight(s)<<endl;
    
}