#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int bit[1000001]={0},n;
void update(int a,int value){
    while(a<=n){
        bit[a]+=value;
        a+=(a&-a);
    }
}
int read(int x){
    int sum=0;
    while(x>0){
        sum+=bit[x];
        x-=(x&-x);
    }return sum;
}
main(){
int k;
cin>>n>>k;
while(k--){
int a,b;
cin>>a>>b;
update(a,1);
update(b+1,-1);
}
vector <int> v;
for(int i=1;i<=n;i++){
    v.push_back(read(i));
}
sort(v.begin(),v.end());
cout<<v[n/2]<<endl;
}