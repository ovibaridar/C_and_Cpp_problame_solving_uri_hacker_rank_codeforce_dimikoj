#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b,c,d,i,x=0,z=0,f=0,h=0;
//scan a b c and d//
cin>>a>>b>>c>>d;
//print  a b c d all nums//
cout<<"a is = "<<a<<endl<<"b is = "<<b<<endl<<"c is = " <<c <<endl<<"d is = "<<d<<endl;
//sum of a+b //
cout<<"a+b = "<<a+b<<endl;
//if sum of a+b is even then  its says even //
if((a+b)%2==0)
{
    cout<<"sum of a+b is even "<<endl;
}
//if sum of a+b is odd then  its says odd //
else
{
 cout<<"sum of a+b is odd "<<endl;
}
//if a is odd than it count all even  num a to d and   print and sum it and  print the sum   //
if(a%2!=0){
   cout<<"the even numbers in a to d is "<<endl;
for(i=a;i<=d;i=i+2){
    cout<<i<<endl;
    x+=i;
}
cout<<"the sum of even numbers betwen a to d ="<<x<<endl ;
}
else
    //if a is odd than it count all odd  num a to d  and   print and sum it and  print the sum   //
    {
    cout<<"the odd numbers in a to d is "<<endl;
for(i=a;i<=d;i=i+2){
    cout<<i<<endl;
    z+=i;
}
cout<<"the sum of odd numbers betwen a to d ="<<z<<endl ;
}
cout<<"c+d = "<<c+d<<endl;
//if sum of c+d is even than  its says even //
if((c+d)%2==0)
{
    cout<<"sum of c+d is even "<<endl;
}
//if sum of c+d is odd than  its says odd //
else
{
 cout<<"sum of c+d is odd "<<endl;
}
//if c is odd than it count all even  num c to d and   print and sum it and  print the sum   //
if(c%2!=0){
   cout<<"the even numbers in c to d is "<<endl;
for(i=c;i<=d;i=i+2){
    cout<<i<<endl;
    f+=i;
}
cout<<"the sum of even numbers betwen c to d ="<<f<<endl ;
}
else
    //if c is odd than it count all odd  num a to d  and   print and sum it and  print the sum   //
    {
    cout<<"the odd numbers in c to d is "<<endl;
for(i=c;i<=d;i=i+2){
    cout<<i<<endl;
    h+=i;
}
cout<<"the sum of odd numbers betwen c to d ="<<h<<endl ;
}
getch ();
}

