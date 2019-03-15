#include <bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        int d[32]={0};
        long n,cou=0;
        cin>>n;
        for(int j=0;j<n;j++){
        long a=0,e=0,i=0,o=0,u=0,sum=0;
        string s;
        cin>>s;
        for(long k=0;k<s.length();k++){
            if(s[k]=='a'&&a==0) sum+=1,a=1;
            if(s[k]=='e'&&e==0) sum+=2,e=1;
            if(s[k]=='i'&&i==0) sum+=4,i=1;
            if(s[k]=='o'&&o==0) sum+=8,o=1;
            if(s[k]=='u'&&u==0) sum+=16,u=1;
        }
        d[sum]+=1;
        }
        for(int i=1;i<31;i++){
            for(int j=i+1;j<32;j++) {
                int temp=i|j;
                if(temp==31) cou+=d[i]*d[j];
                }
        }
        cou=cou+(d[31]*(d[31]-1))/2;
        cout<<cou<<endl;
    }
}