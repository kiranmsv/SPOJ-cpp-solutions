#include <bits/stdc++.h>
using namespace std;
int c=0,n,m,visited[1000][1000]={0};
char cmap[1000][1000];
void dfs(int i,int j){
    if(visited[i][j]){ 
        --c;
        return;
    }
    visited[i][j]=1;
  if(cmap[i][j]=='S'){
      if(i+1<n) dfs(i+1,j);
      else return;
  }
  if(cmap[i][j]=='N'){
      if(i-1>=0) dfs(i-1,j);
      else return;
  }
  if(cmap[i][j]=='E'){
      if(j+1<m) dfs(i,j+1);
      else return;
  }
  if(cmap[i][j]=='W'){
      if(j-1>=0) dfs(i,j-1);
      else return;
  }
  return;
}
int main(){
    int i,j;
    cin>>n>>m;
    string s;
    for(i=0;i<n;i++){
        cin>>s;
        for(j=0;j<m;j++) cmap[i][j]=s[j];
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++) 
            if(!visited[i][j]){
               visited[i][j]=1;
               c++;
               dfs(i,j);}
               cout<<c;
}