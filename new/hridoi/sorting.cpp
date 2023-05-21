#include<bits/stdc++.h>
using  namespace  std;
int main(){
int  n=100,i;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
 int nn = sizeof(a) / sizeof(a[0]);
 sort(a,a + nn);
 cout<<"After  Shorting  all  Value of  array "<<endl;
 for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return  0;
}
