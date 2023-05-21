#include<bits/stdc++.h>
using namespace std;
int main(){
double a;
cin>>a;
cout<<setprecision(2)<<fixed;
if(400>=a)
{
    cout<<"Novo salario: "<<(a*.15)+a<<endl;
    cout<<"Reajuste ganho: "<<(a*.15)<<endl;
    cout<<"Reajuste ganho: "<<"15 %"<<endl;
}

else if(400.01<=a && a<=800.00)
{
    cout<<"Novo salario: "<<(a*.12)+a<<endl;
    cout<<"Reajuste ganho: "<<(a*.12)<<endl;
    cout<<"Reajuste ganho: "<<"12 %"<<endl;
}

else if(800.01<=a && a<=1200.00)
{
    cout<<"Novo salario: "<<(a*.10)+a<<endl;
    cout<<"Reajuste ganho: "<<(a*.10)<<endl;
    cout<<"Reajuste ganho: "<<"10 %"<<endl;
}

else if(1200.01<=a && a<=2000.00)
{
    cout<<"Novo salario: "<<(a*.07)+a<<endl;
    cout<<"Reajuste ganho: "<<(a*.07)<<endl;
    cout<<"Reajuste ganho: "<<"7 %"<<endl;
}
else if(2000.01<=a)
{
    cout<<"Novo salario: "<<(a*.04)+a<<endl;
    cout<<"Reajuste ganho: "<<(a*.04)<<endl;
    cout<<"Reajuste ganho: "<<"4 %"<<endl;
}

return 0;
}

