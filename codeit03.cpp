#include <iostream>
using namespace std;
int i;
main(){
    int a[1000],mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    a[0]=0;
    for(i=2013;i<=3000;i++){
        a[i-2012]=a[i-2013]+1;
        if((i-1)%4==0) ++a[i-2012];
        a[i-2012]=a[i-2012]%7;  
    }
    //for(i=0;i<30;i++) cout<<a[i]<<" ";
    int n,dd,mm,yy;
    cin>>n;
    while(n--){
        cout<<endl;
        cin>>dd>>mm>>yy;
        int firstday=a[yy-2012],days=0;
        for(i=1;i<mm;i++){
            days+=mon[i];
            if(i==2&&yy%4==0) days++;
        }
        days+=dd;
        int day=days%7;
        if(day==1) day=firstday;
        else day=(firstday+day-1)%7;
        if(day==0) cout<<"Sunday"<<endl;
        if(day==1) cout<<"Monday"<<endl;
        if(day==2) cout<<"Tuesday"<<endl;
        if(day==3) cout<<"Wednesday"<<endl;
        if(day==4) cout<<"Thursday"<<endl;
        if(day==5) cout<<"Friday"<<endl;
        if(day==6) cout<<"Saturday"<<endl;
    }
}