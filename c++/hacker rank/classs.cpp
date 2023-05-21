#include<bits/stdc++.h>
using namespace std;
class family{
public :
int id;
string name;
float point;

};
class familly :public family{
public  :
int marit_list;
void display(){
cin>>id>>name;

cin>>point>>marit_list;

cout<<"id="<<id<<endl<<"name="<<name<<endl<<"point"<<point<<endl<<"marit_list="<<marit_list<<endl;
}
};
/*class pointer : public familly{
public :
/*pointer(int x ,string y,float z,int  m )
{
  id=x;
  name=  y ;
  point = z ;
  marit_list = m ;
}
};*/

int main ()
{
    familly s1;
    /*s1.id=01;
    s1.name="al arman ovi";
    s1.point =4.88;
    s1.marit_list = 10;*/
    s1.display();

}

