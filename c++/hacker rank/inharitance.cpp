#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:

    string a;
    int b;
    void dis()
    {
        cout<<a<<endl<<b<<endl;
    }

};


class studentless : public student
{
public :

    int c,d ;
    void dis1()
    {
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
    }
    /* studentless(string j,int k,int l,int m,int x ,int y)
     {
         a=j;
         b=k;
         c=l;
         d=m
         x=o;
         y=z;
     }*/
};
class studentadd : public studentless
{
public :

    int x,y ;
    void dis2()
    {
        cout<<3
        a<<endl<<b<<endl<<c<<endl<<d<<endl<<x<<endl<<y<<endl;
    }
    studentadd(string j,int k,int l,int m,int o,int z)
    {
        a=j;
        b=k;
        c=l;
        d=m;
        x=o;
        y=z;
    }
};
int main ()
{
    studentadd alim("ovi",10,20,30,50,40);

    /* alim.a="ovi";
     alim.b=10;
     alim.c=20;
     alim.d=30;
     //alim.x=40;
     //alim.y=50;*/
    alim.dis2();

    getch();


}
