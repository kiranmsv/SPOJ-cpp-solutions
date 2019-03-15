#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> v[7];
bool check(int n,int total){
    int sum=0;
    for(int i=1;i<=6;i++){
        int min=1000000;
        for(int j=0;j<v[i].size();j++){
            if(v[i][j].second>=n&&v[i][j].first<min) min=v[i][j].first;
        }sum+=min;
    }if(sum<=total) return 1;
    else return 0;
}
int bs(int s,int e,int total){
if(s==e) return s;
if(s+1==e) if(check(e,total)) return e; else return s;
int mid=(s+e)/2;
if(check(mid,total)) return bs(mid,e,total);
else return bs(s,mid-1,total);
}
main(){
    int n,t,c=0;
    cin>>n>>t;
    for(int i=0;i<n;i++){
    int type,p,q;
    cin>>type>>p>>q;
    if(v[type].size()==0) c++;
    v[type].push_back(make_pair(p,q));
    }
    if(c<6) cout<<"0"<<endl;
    else cout<<bs(0,t,t)<<endl;
}