#include <iostream>
using namespace std;
long long fact[]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
main(){
    int n,i;
    while(scanf("%d",&n)!=EOF){
        int k,p;
        cin>>k;
        long long count=fact[n];
        for(i=0;i<k;i++){
            cin>>p;
            count=count/fact[p];
        }
        cout<<count<<endl;
}}