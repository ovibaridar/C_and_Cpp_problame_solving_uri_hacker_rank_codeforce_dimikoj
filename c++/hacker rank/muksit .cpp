#include<iostream>
#include<conio.h>
using namespace std;
class muksit
{
public:
    int id;
    string name;

};

class ovi : public muksit
{
public:
    //int a,b;
    void dis()
    {
        cout<<"name = "<<name<<endl<<"id ="<<id<<endl<<endl;
    }
    ovi(string x,int y)
    {
        id=y;
        name =x;
    }

};
int main ()
{
    ovi k("ovi",121) ;
    //k.name="ovi";
    // k.id=121;
    k.dis();
    ovi g("muksit",122) ;
    //g.name="muksit";
    //g.id=122;
    g.dis();
    getch();
}
