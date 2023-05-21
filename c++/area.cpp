#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double R;
    cin>>R;
    cout<<"A="<<setprecision(4)<<fixed<<(3.14159*R*R)<<endl;
    return 0;
}
