#include <iostream>
#include<windows.h>
#include<ctime>

using namespace std;
void  timer( int h, int m,int s)
{
    int x=1;
    system("cls");
    while (x)
    {
        system("cls");
        cout<<"\n  -------";
        cout<<"\n  |"<<h<<":"<<m<<":"<<s<<"|";
        cout<<"\n  -------";
        Sleep(1000);
        s--;
         if((h==0)&&(m==0)&&(s==0)){
           cout<<"\nTIME UP\n";
           x=0;
        }
        if(s<0){
            s=60;
            m--;
        }
        if(m<1){
            m=0;
            h--;
        }
        if(h<0){
            h=0;
        }
    }
    
}
void clk(){
time_t timestamp;
time(&timestamp);

cout << ctime(&timestamp)<<"\n";
}
int main(){
    int choice;int stop=1;
    while(stop==1){
    cout<<"1.Clock\n2.Timer\n3.Stop\n";
    cin>>choice;
    if(choice==1){
        clk();
    }
    else if(choice==2){
    int h,s,m;
    cout<<"SET TIMER"<<endl;
    do
    {
        cout<<"ENTER HOUR:";
        cin>>h;
    }
    while(!(h<24));
    do{
        cout<<"ENTER MINUTES:";
        cin>>m;
    }
    while(!(m<60));
     do
    {
        cout<<"ENTER SECONDS:";
        cin>>s;
    }
    while(!(s<60));
        timer(h,m,s);
    }
    else if(choice==3){
        stop=0;
    }
    else{
        cout<<"INVALID CHOICE"<<endl;
    }
    }

    return 0;
}