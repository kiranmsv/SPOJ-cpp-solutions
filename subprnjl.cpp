#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,i,j,m;
        cin>>n>>k;
        long long a[n],count=0;
        vector <int> v;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                auto it1=lower_bound(v.begin(),v.end(),a[j]);
                v.insert(it1,a[j]);
                int len=j-i+1,x;
                k%len==0?m=k/len:m=k/len+1;
                k%m==0?x=k/m:x=k/m+1;
                x=v[x-1];
                auto it=lower_bound(v.begin(),v.end(),x);
                auto it2=upper_bound(v.begin(),v.end(),x);
                int f=it2-it;
                if(binary_search(v.begin(),v.end(),f)) count++;
            }
            v.clear();
        }cout<<count<<endl;
    }
}