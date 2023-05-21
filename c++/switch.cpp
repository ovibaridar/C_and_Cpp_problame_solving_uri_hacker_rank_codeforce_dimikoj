#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    int x,y;
    cin>>x>>a>>y;
    switch(a)
    {
    case '+':
        cout<<x+y<<endl;
        break ;
    case '-':
        cout<<x-y<<endl;
        break ;
    case '*':
        cout<<x*y<<endl;
        break ;
    case '/':
        cout<<x/y<<endl;
        break ;
    default :
        cout<<"sorry you enter the wrong input"<<endl;
    }
    return 0;

}
