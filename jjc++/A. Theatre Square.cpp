#include<bits/stdc++.h>
using namespace std;
int main(){
long  long  int  a,b,c;
 cin>>a>>b>>c;
 long long int x =a/c;
 long long int  y =b/c;
 if(a%c!=0) x =x+1;
 if(b%c!=0) y=y+1;
 cout<<x*y<<endl;
 return 0;
}
