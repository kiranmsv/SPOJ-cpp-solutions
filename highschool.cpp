#include <bits/stdc++.h>
using namespace std;
int main(){
    long x,y;
    cin>>x>>y;
    if(y*log(x)<x*log(y)) cout<<"<";
    else if(y*log(x)>x*log(y)) cout<<">";
    else cout<<"=";
}