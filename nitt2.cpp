#include <iostream>
#include <vector>
using namespace std;
bool div25(vector <int> v){
    int sum=v[v.size()-2]*10+v[v.size()-1];
    if(sum%25==0) return 1;
    else return 0;
}
bool div4(vector <int> v){
    int sum=v[v.size()-2]*10+v[v.size()-1];
    if(sum%4==0) return 1;
    else return 0;
}
bool div9(vector <int> v){
    int sum=0,i;
    for(i=0;i<v.size();i++) sum+=v[i]; 
    if(sum%9==0) return 1;
    else return 0;
}
bool div3(vector <int> v){
    int sum=0,i;
    for(i=0;i<v.size();i++) sum+=v[i];
    if(sum%3==0) return 1;
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
main(){
    int t;
    cin>>t;
    while(t--){
        int i;
        string s;
        cin>>s;
        vector <int> v;
        for(i=0;i<s.length();i++) v.push_back(int(s[i])-48);
        //for(i=0;i<v.size();i++) cout<<v[i]<<" ";
        if(div4(v)&&div9(v)&&div7(v)) cout<<"Yes ";
        else cout<<"No ";
        if(div25(v)&&div3(v)&&div7(v)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}