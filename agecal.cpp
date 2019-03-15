#include  <iostream>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        long long year=0,n,i,y1,m1,d1,y2,m2,d2,temp,totaldays=0,firstyear=0,secondyear=0;
        cin>>n;
        long long a[n+1];
        for(i=1;i<=n;i++) {
            cin>>a[i];
            year+=a[i];}
        cin>>y1>>m1>>d1>>y2>>m2>>d2;
        for(i=1;i<m1;i++) firstyear+=a[i];
        firstyear=year-firstyear-d1+1;
        for(i=1;i<m2;i++) secondyear+=a[i];
        secondyear+=d2;
        if(y1%4==0) firstyear++;
        temp=(y2-y1-1-(4-((y1+1)%4)));
        if(y1+1!=2&&(y1+1)%4==0) totaldays++;
        if(temp>0){
        if(temp%4!=0) totaldays+=temp/4+1;
        else totaldays+=temp/4;}
        totaldays+=(y2-y1-1)*year;
        if(y1==y2) cout<<year-(2*year-firstyear-secondyear)<<endl;
        else cout<<firstyear+secondyear+totaldays<<endl;
        //cout<<firstyear<<" "<<secondyear<<" "<<year<<" "<<temp<<endl;
    }
}