
#include<bits/stdc++.h>
using  namespace  std;
int main(){
int  n=100,i;
int a[n],ar[n],suma[n+n];
cout<<"Input the 1st array  is "<<endl;
for(i=0;i<n;i++){
    cout<<"Enter arr["<<i<<"] ";
    cin>>a[i];
    cout<<endl;
}
cout<<"Input the 2nd array  is "<<endl;

for(i=0;i<n;i++){
    cout<<"Enter arr["<<i<<"] ";
    cin>>ar[i];
    cout<<endl;
}

for(i=0;i<n;i++){
    suma[i]=a[i];
}
for(i=n;i<n+n;i++){
    suma[i]=ar[i-4];
}
cout<<"Merging  two one-dimensional arrays is : "<<endl;
for(i=0;i<n+n;i++){
    cout<<"Merging["<<i<<"]"<<suma[i]<<endl;
}


return  0;
}
