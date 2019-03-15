    #include <bits/stdc++.h>
    using namespace std;
    bool a[251][251];
    int dfs(int i,int j,int n,int m){
        if(a[i][j]==0) return 0;
        if(i<0||i>n-1||j<0||j>m-1) return 0;
        else {
            a[i][j]=0;
            return 1+dfs(i,j+1,n,m)+dfs(i+1,j,n,m)+dfs(i,j-1,n,m)+dfs(i-1,j,n,m);
            }
    }
    main(){
        while(1){
            int n,m,i,j;
            vector <int> v;
            cin>>n>>m;
            for(i=0;i<n;i++) for(j=0;j<m;j++) cin>>a[i][j];
            if(n==0&&m==0) break;
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    if(a[i][j])
                    v.push_back(dfs(i,j,n,m));  
                }
            }
            int l=v.size();
            if(l==0) {cout<<"0"<<endl;continue;}
            sort(v.begin(),v.end());
            int count=1;
            cout<<l<<endl;
            for(i=1;i<l;i++){
            if(v[i]!=v[i-1]) cout<<v[i-1]<<" "<<count<<endl,count=1;
            else count++;
            }
            cout<<v[l-1]<<" "<<count<<endl;
        }
    }