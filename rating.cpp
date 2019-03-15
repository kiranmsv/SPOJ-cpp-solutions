#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int bit[100001];
void updatebit(int x){
    while(x<=100000){
        bit[x]++;
        x+=(x&-x);
    }
}
int querybit(int x){
    int sum=0;
    while(x>0){
        sum+=bit[x];
        x-=(x&-x);
    }return sum;
}
main(){
    int n,A,H,i;
    cin>>n;
    int rating[n];
    pair <pair<int,int>,int> coder[n];
    for(i=0;i<n;i++){
        cin>>A>>H; 
        coder[i]=make_pair(make_pair(A,H),i);
    }
    sort(coder,coder+n);
    rating[coder[0].second]=0;
    updatebit(coder[0].first.second);
    for(i=1;i<n;i++){
        if(coder[i].first==coder[i-1].first&&coder[i].first.second==coder[i-1].first.second){
            rating[coder[i].second]=rating[coder[i-1].second];
            updatebit(coder[i].first.second);
        }else{
            rating[coder[i].second]=querybit(coder[i].first.second);
            updatebit(coder[i].first.second);
        }
    }
    for(i=0;i<n;i++) cout<<rating[i]<<endl;
}