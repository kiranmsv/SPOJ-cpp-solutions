#include <bits/stdc++.h>
using namespace std;
vector <long long> v[500009];
long long visit[500009],dis[500009],ans;
long long bfs(long long x){
queue <long long> q;
q.push(x);
memset(visit,0,sizeof(visit));
memset(dis,0,sizeof(dis));
visit[x]=1;
while(!q.empty()){
    x=q.front();
    q.pop();
    for(long long i=0;i<v[x].size();i++){
        if(!visit[v[x][i]]){
        visit[v[x][i]]=1;
        q.push(v[x][i]);
        dis[v[x][i]]=dis[x]+1;
        }
    }
}
ans=dis[0];
long long ret=0;
for(long long i=1;i<500009;i++){
if(dis[i]>ans) ans=dis[i],ret=i;
}
return ret;
}
main(){
int t;
cin>>t;
while(t--){
    long long n,i,x,y;
    cin>>n;
    for(i=0;i<n-1;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(bfs(0));
    ans=(ans+1)/2;
    cout<<ans<<endl;
    for(long long i=0;i<=n;i++)
            v[i].clear();
}
}