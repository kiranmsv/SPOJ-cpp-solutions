#include <iostream>
using namespace std;
main(){
    int t,i,j;
    cin>>t;
    int totient[10001];
        int prime[10001]={0};
        for(i=2;i<=10000;i++) totient[i]=i,prime[i]=0;
        totient[1]=1;
        for(i=2;i<=10000;i++){
            if(prime[i]==1) continue;
            totient[i]=i-1;
            for(j=i*2;j<=10000;j+=i){
                prime[j]=1;
                totient[j]=(totient[j]/i)*(i-1);
            }
        }
    while(t--){
        long long n;
        cin>>n;
        long long sum=0;
        for(i=1;i<=n;i++) sum+=totient[i];
        cout<<sum*sum<<endl;
    }
}