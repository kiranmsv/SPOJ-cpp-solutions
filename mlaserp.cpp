#include <bits/stdc++.h>
#include <queue>
using namespace std;
int r,c,cr,cc,sr,sc;
int row[4]={0,1,0,-1};
int col[4]={-1,0,1,0};
int mircount[1000][1000];
string grid[100];
int bfs(){
int row1,col1,row2,col2;
queue <int> q;
q.push(cr);
q.push(cc);
while(!q.empty()){
    int i,j;
    row1=q.front();
    q.pop();
    col1=q.front();
    q.pop();
    mircount[cr][cc]=-1;
    for(i=0;i<4;i++){
        row2=row1+row[i];
        col2=col1+col[i];
        while(row2>=0&&col2>=0&&row2<r&&col2<c&&grid[row2][col2]!='*'){
        if(mircount[row2][col2]>mircount[row1][col1]+1){ 
        mircount[row2][col2]=mircount[row1][col1]+1;
        q.push(row2);
        q.push(col2);
        if(row2==sr&&col2==sc){ 
        return mircount[row2][col2];}}
        row2+=row[i];
        col2+=col[i];
        }
    }
}return mircount[sr][sc];
}
main(){
   int i,j,check=0;
   cin>>c>>r;
   for(i=0;i<r;i++){ cin>>grid[i];
   for(j=0;j<c;j++){
   mircount[i][j]=1000; 
   if(check==0&&grid[i][j]=='C') cr=i,cc=j,check=1;
   if(check==1&&grid[i][j]=='C') sr=i,sc=j; }
   }  
   cout<<(bfs())<<endl;
    }
