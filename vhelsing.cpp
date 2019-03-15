#include <iostream>
#include <cmath>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        double r;
        cin>>r;
        double ans=sqrt(2);
        ans=2-sqrt(2);
        ans=double(ans*double(pow(r,3)*8));
        printf("%.4f\n",ans);
    }
}