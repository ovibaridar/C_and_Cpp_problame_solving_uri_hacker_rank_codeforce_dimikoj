#include<bits/stdc++.h>
using  namespace  std;
int main(){
int  n=100,i;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<"All  Odd and  Even number of the given  array  is : "<<endl;
 for(i=0;i<n;i++){
   if(a[i]%2!=0){
    cout<<a[i]<<" is  a  Odd Number"<<endl;

   }
   if(a[i]%2==0){
    cout<<a[i]<<" is  a  Even Number"<<endl;

   }

}
return  0;
}
