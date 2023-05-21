#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i  ;
cin>>n;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
int nn =sizeof(a)/ sizeof(0);


sort(a,a+n);

cout<<endl<<"Enter The Position  Number  of  Maximum"<<endl;
int max;
cin>>max;
int maxa =n;
if(max>1 || max<n+1){
        cout<<endl<<"The "<<max<<" th Maximum is = ";
    cout<<a[n-max];
}
else{
    cout<<"Invalid Position "<<endl;
}
cout<<endl<<"Enter The Position  Number  of  Minimum"<<endl;
int min;
cin>>min;
if(min>1 || min<n+1){
    cout<<endl<<"The "<<min<<" th Minimum is = ";
    cout<<a[min-1]<<endl;
}
else{
    cout<<endl<<"Invalid Position "<<endl;
}
return 0;
}
