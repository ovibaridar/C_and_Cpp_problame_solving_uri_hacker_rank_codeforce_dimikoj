#include<iostream>
#include<conio.h>
using namespace  std;
class student
{
public :

    string name ;
    int id  ;
    int year ;
    void display1()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<year<<endl;
    }
};
class toufic : public student
{
public :
    int age ;
    void display2()
    {
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<year<<endl;
        cout<<age<<endl;
    }
};
class ovi : public toufic
{
public :
    int m;
    string k ;
    void dispaly3()
    {
        cout<<k<<"  ";
        cout<<name<<endl<<m;
        cout<<id<<endl;
        cout<<year<<endl;
        cout<<age<<endl;
    }
};
int main()
{
    ovi n1;
    n1.name="ovi";
    n1.id  =01;
    n1.year =01;
    n1.age = 17 ;
    n1.m   =100;
    n1.k   ="alarman";
    n1.dispaly3();
    getch ();
}
