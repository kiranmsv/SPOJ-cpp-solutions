#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,pos=0,neg=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++){
	        if(a[i]>0) pos++;
	        else neg++;
	    }
	    if(neg==0) cout<<pos<<" "<<pos<<endl;
	    else if(pos==0) cout<<neg<<" "<<neg<<endl;
	    else cout<<pos<<" "<<neg<<endl;
	}
}

