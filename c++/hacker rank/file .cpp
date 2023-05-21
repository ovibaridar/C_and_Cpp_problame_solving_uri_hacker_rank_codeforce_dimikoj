#include<bits/stdc++.h>
using namespace std;
int main ()
{
    while(1){
    string m,n;
    ofstream s;
    s.open("ovi.txt",ios::out|ios::app);
    cout<<"enter your name "<<endl;
    getline(cin,m);
    s<<"Student name is "<<m<<endl;
    cout<<"enter your age "<<endl;
    getline(cin,n);
    s<<"Student age is "<<n<<endl;
    s.close();}
    return 0;
}
