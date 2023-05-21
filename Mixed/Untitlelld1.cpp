#include<bits/stdc++.h>
using  namespace std;
int main()
{
int i, j, k;
int  n ;
cin>>n;
for(i=n;i>=1;i--)
{
for(j=1;j<i;j++)
{
cout<<" ";
}
for(k=n;k>=i;k--)
{
cout<<"*";
if(k==1){
    for(int m = 0;m<n;m++)
        cout<<"*";
}
}
cout<<"\n";
}

for(i=1;i<=n;i++)
{
for(j=i;j>1;j--)
{
cout<<" ";
}
for(k=i;k<=n;k++)
{
cout<<"*";
if(k==1){
    for(int m = 0;m<n;m++)
        cout<<"*";
}
}
cout<<"\n";
}


return 0;
}
