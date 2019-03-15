#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int count1=0;
vector <int> v;
bool div3(vector <int> v){
    int sum=0,i;
    for(i=0;i<v.size();i++) sum+=v[i];
    if(sum%3==0) return 1;
    else return 0;
}
bool div4(vector <int> v){
    int sum=v[v.size()-2]*10+v[v.size()-1];
    if(sum%4==0) return 1;
    else return 0;
}
bool div7(vector <int> v){
    int n=v.size();
    int p=1,sum=0,temp,i;  
    for(i=n-1;i>=0;i-=3){
        if(i==0) temp=v[i];
        if(i==1) temp=v[i]+v[i-1]*10;
        if(i>1) temp=v[i]+v[i-1]*10+v[i-2]*100;
        if(p==1){
            sum+=temp;
            p=0;
        }else{
            sum-=temp;
            p=1;
        }
    }
    if(sum%7==0)  return 1;
    else return 0;
} 
bool div9(vector <int> v){
    int sum=0,i;
    for(i=0;i<v.size();i++) sum+=v[i]; 
    if(sum%9==0) return 1;
    else return 0;
} 
main(){
    char str[250];
    int i;
    while( scanf("%s",str) != EOF ){
        int len=strlen(str);
        for(i=0;i<len;i++) v.push_back(str[i]-48);
        //for(i=0;i<len;i++) cout<<v[i];
        for(i=0;i<len;i++){
            if(v[i]==1) count1++;
            if(v[i]==2) if(v[len-1]%2==0) count1++;
            if(v[i]==3) if(div3(v)) count1++;
            if(v[i]==4) if(div4(v)) count1++;
            if(v[i]==5) if(v[len-1]%5==0) count1++;
            if(v[i]==6) if(v[len-1]%2==0&&div3(v)) count1++;
            if(v[i]==7) if(div7(v)) count1++;
            if(v[i]==8){
                if(len==1) if(v[0]==8) count1++;
                if(len==2) if((v[0]*10+v[1])%8==0) count1++;
                if(len>3) if((v[len-1]+v[len-2]*10+v[len-3]*100)%8==0) count1++;
            }
            if(v[i]==9) if(div9(v)) count1++;
        }   cout<<count1<<endl;
            count1=0;
            v=vector <int>();
    }
}