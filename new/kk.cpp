#include <iostream>

using namespace std;

int main() {
   int i,a,b,sum=0;
   cin>>a>>b;
   if(a>b)
   {
       for(i=(b+1);i<a;++i)
       {
           if(i%2!=0)
           sum=sum+i;
       }
   }
  else if(b>a)
   {
       for(i=(a+1);i<b;++i)
       {
           if(i%2!=0)
           sum=sum+i;
       }
   }
  cout<<sum;
    return 0;
}
