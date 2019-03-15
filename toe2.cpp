#include <iostream>
#include <string>
using namespace std;
int findseq(string s,char c){
    int count=0,i,j;
    for(i=0;i<3;i++)  if(s[i]==c&&s[i+3]==c&&s[i+6]==c) count++;
    for(i=0;i<9;i+=3)   if(s[i]==c&&s[i+1]==c&&s[i+2]==c) count++;
    if(s[0]==c&&s[4]==c&&s[8]==c) count++;
    if(s[2]==c&&s[4]==c&&s[6]==c) count++;
    return count;
}
main(){
    while(1){
        int x=0,o=0,i;
        string s;
        cin>>s;
        if(s=="end") break;
        for(int i=0;i<9;i++) if(s[i]=='X') x++; else if(s[i]=='O') o++;
        int oseq=findseq(s,'O');
        int xseq=findseq(s,'X');
        if(x==5&&o==4&&xseq>=0&&oseq==0) {cout<<"valid"<<endl;continue;}
        if(x+o<9){
            if(xseq==1&&o==x-1&&oseq==0) {cout<<"valid"<<endl;continue;}
            if(oseq==1&&o==x&&xseq==0) {cout<<"valid"<<endl;continue;}
        }
        cout<<"invalid"<<endl;
    }
}