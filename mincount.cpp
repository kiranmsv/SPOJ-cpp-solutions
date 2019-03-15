#include <iostream>
using namespace std;
main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int h,count;
        cin>>h;
        if(h<=1) cout<<"0"<<endl;
        if(h==2) cout<<"1"<<endl;
        if(h>2){
            long long int s=h/2;
            if((h-s)%2==1) count=((s-1)*(s))/2+((h-s+1)/2)*((h-s+1)/2);
            else count=((s-1)*(s))/2+((h-s+1)/2)*((h-s+1)/2)+((h-s+1)/2);
        cout<<count<<endl;
        }
    }}