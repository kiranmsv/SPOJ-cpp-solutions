#include <bits/stdc++.h>
using namespace std;
bool visited[10][10],board[10][10];
int n;
bool isValid(int r,int c){
    if(r<n&&r>=0&&c<=10&&c>=0&&board[r][c]==1&&visited[r][c]==0) return 1;else return 0;
} 
int dfs(int r,int c){
    int sum=0;
    if(!isValid(r,c)) return 0;
    visited[r][c]=1;
    sum=1+max({dfs(r-2,c-1),dfs(r-2,c+1),dfs(r-1,c-2),dfs(r-1,c+2),dfs(r+1,c-2),dfs(r+1,c+2),dfs(r+2,c-1),dfs(r+2,c+1)});
    visited[r][c]=0;
    return sum;
}
main(){
    int t=0;
    while(++t){
    int i,j,tl=-1,total=0,start,col;
    cin>>n;
    if(n==0) break;
    for(i=0;i<n;i++){
        cin>>start>>col;
        if(tl==-1) tl=start;
        for(j=0;j<=10;j++) {
            if(j>=start&&col>0) board[i][j]=1,col--,total++;else board[i][j]=0;
            visited[i][j]=0;}
    }
    if(total-dfs(0,tl)!=1) cout<<"Case "<<t<<", "<<total-dfs(0,tl)<<" squares can not be reached."<<endl;
    else cout<<"Case "<<t<<", "<<total-dfs(0,tl)<<" square can not be reached."<<endl;
    }
}