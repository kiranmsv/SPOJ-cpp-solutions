#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
main(){
    long long n,a,b,sum=0,i,j,count=0;
    cin>>n>>a>>b;
    vector <long long> v(n,0);
    vector <long long> v1;
    vector <long long> v2;
    vector <long long>::iterator low,up;
    for(i=0;i<n;i++) cin>>v[i];
    for(i=0;i<pow(2,n/2);i++){
        for(j=0;j<n;j++) if(i&(1<<j)) sum+=v[j];
        v1.push_back(sum);
        sum=0;   
    }
    for(i=0;i<pow(2,n-n/2);i++){
        for(j=0;j<n-n/2;j++) if(i&(1<<j)) sum+=v[j+n/2];
        v2.push_back(sum);
        sum=0;
    }
    sort(v2.begin(),v2.end());
    for(i=0;i<v2.size();i++){
        low=lower_bound(v1.begin(),v1.end(),a-v2[i]);
        up=upper_bound(v1.begin(),v1.end(),b-v2[i]);
        count+=up-low;
    }
    cout<<count<<endl;
    }