#include <iostream>
using namespace std;
main(){
int n,q,i,count=0;
cin>>n;
bool a[20001]={0};
for(i=0;i<n;i++){
    cin>>q;
    a[q]=1;
    if(a[q-1]&&a[q+1]) cout<<--count<<endl;
    else if(a[q-1]||a[q+1]) cout<<count<<endl;
    else cout<<++count<<endl;
}cout<<"Justice"<<endl;
}   