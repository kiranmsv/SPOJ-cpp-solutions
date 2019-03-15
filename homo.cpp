#include <iostream>
using namespace std;
long long m=1000000000;
int a[2000000001];
main(){
    string s;
    long long n,e;
    cin>>n;
    long long homo=0,hete=0;
    while(n--){
        cin>>s>>e;
        if(s=="insert"){
            a[e+m]++;
            if(a[e+m]==1) hete++;
            else if(a[e+m]==2) homo++;
        }else{
            a[e+m]--;
            if(a[e+m]==0) hete--;
            else if(a[e+m]==1) homo--;
        }
        if(hete>1&&homo>0) cout<<"both"<<endl;
            else if(hete>1) cout<<"hetero"<<endl;
            else if(homo>0) cout<<"homo"<<endl;
            else cout<<"neither"<<endl;
    }
}