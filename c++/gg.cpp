#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()

{
    while(1){
    long long int n;
    cout<<"Grandchild's Number: ";
    cin>>n;
    cout<<setprecision(0)<<fixed;
    if(n>1 && n<8){
        cout<<"Total Gold coin' s: "<<pow(n,n+1)<<endl;}
    else{
        cout<<"Invalid Grandchild's number."<<endl;}
    cout<<endl<<endl<<endl<<endl<<"\t\t\t By PUPC Super Team"<<endl<<endl;
    }
    return 0;
}

