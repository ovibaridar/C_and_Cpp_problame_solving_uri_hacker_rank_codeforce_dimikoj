#include<bits/stdc++.h>
using  namespace std;
int  main(){

int  a , b,i=1;
cin>>a>>b;

while(true){
    a=a*3;
    b=b*2;
    if(a>b){
        break;
    }
    i++;
}

cout<<i<<endl;

}
