#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    if(b==0)
        cout<<a<<" is large & "<<b<<" is small"<<endl;
    else if(a==b)
        cout<<"Two numbers are equal"<<endl;
    else if(a/b==0)
        cout<<b<<" is large & "<<a<<" is small"<<endl;
    else
        cout<<a<<" is large & "<<b<<" is small"<<endl;
    return 0;
}
