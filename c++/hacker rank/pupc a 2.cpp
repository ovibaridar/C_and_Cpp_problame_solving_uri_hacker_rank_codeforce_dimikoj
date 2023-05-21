#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int a=0,i;
    for(i=1; i<=9; i++)
    {
        a = pow(2,i)-2;

        if(i==1)
            cout<<i<<"st  Year = "<<a<<endl;
        else if(i==2)
            cout<<i<<"nd  Year = "<<a<<endl;
        else if(i==3)
            cout<<i<<"rd  Year = "<<a<<endl;
        else
            cout<<i<<"th  Year = "<<a<<endl;
    }
    for(i=10; i<=30; i++)
    {
        a = pow(2,i)-2;
        if(i==11 || i==21)
            cout<<i<<"st Year = "<<a<<endl;
        else if(i==2 || i==12 || i==22)
            cout<<i<<"nd Year = "<<a<<endl;
        else if(i==3 || i==13 || i==23)
            cout<<i<<"rd Year = "<<a<<endl;
        else
            cout<<i<<"th Year = "<<a<<endl;

    }


    return 0;
}



