#include <iostream>
using namespace std;
long long bit[1000001]={0},n;
void updatebit(int a,int b){
    while(a<=n){
        bit[a]+=b;
        a+=(a&-a);
    }return;
}
long long read(int a){
    long long sum=0;
    while(a>0){
        sum+=bit[a];
        a-=(a&-a);
    }return sum;
}
main(){
int q;
cin>>n>>q;
while(q--){
    string s;
    int a,b;
    cin>>s>>a>>b;
    if(s=="find") cout<<(read(b)-read(a-1))<<endl;
    else updatebit(a,b);
}
}