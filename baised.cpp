#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        cout<<"\n";
        long long n,sum=0,i;
        cin>>n;
        long long a[n+1];
        string s;
        for(i=1;i<=n;i++) cin>>s>>a[i];
        sort(a+1,a+n+1);
        for(i=1;i<=n;i++) sum+=abs(a[i]-i);
        cout<<sum<<endl;
    }
}