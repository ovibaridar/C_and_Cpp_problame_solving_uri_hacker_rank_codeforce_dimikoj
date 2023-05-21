#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    int a=2;
};
class B:public A
{
public:
    int b=2;
};
int main()
{
    B sum;
    cout<<sum.a+sum.b;
}

