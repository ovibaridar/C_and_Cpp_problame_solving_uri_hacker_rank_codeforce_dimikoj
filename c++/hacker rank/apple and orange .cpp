#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[4],p=0;
   for(int i=1;i<=4;i++)
    cin>>a[i];
   while(a[1]<100000000)
   {
       a[1]=a[1]+a[2];
       a[3]=a[3]+a[4];
       if(a[1]==a[3])
       {
            p=1;
       }
   }
   if(p==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
