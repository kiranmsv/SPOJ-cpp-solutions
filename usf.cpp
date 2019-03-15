#include <bits/stdc++.h>
using namespace std;
void reverse(long long int a[],s,e){
    while(s<e){
     swap(a[s],a[e]);
     s++;
     e--:;
    }
} 
main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p=0;
        cin>>n>>m;
        long long int a[n+1],s[m+1],e[m+1],b[m+1];
        for(i=1;i<=n;i++) cin>>a[i];
        for(i=1;i<=m;i++) cin>>s[i]>>e[m];
        for(i=1;i<=m;i++) reverse(a,s[i],e[i]);
        for(i=1;i<=n;i++) b[i]=a[i];
        int(i=1;i<=m;i++) p+=i*pow(10,m-i);
        for(i=p;i<)

    }
}