#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,prize=0;
    for(i=1;i<31;i++)
    {
       // if(i>30)
         //   break;
        prize=pow(2,i)-2;
        if(i==1 || i==21)
        cout<<i<<"st"<<" Year = "<<prize<<"TK"<<endl;
        else if(i==2 || i==22)
        cout<<i<<"nd"<<" Year = "<<prize<<"TK"<<endl;
        else if(i==3 || i==23)
        cout<<i<<"rd"<<" Year = "<<prize<<"TK"<<endl;
        else
        cout<<i<<"th"<<" Year = "<<prize<<"TK"<<endl;
    }
    return 0;
}
