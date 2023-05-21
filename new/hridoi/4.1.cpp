#include<bits/stdc++.h>
using  namespace  std;
int main(){
int  n =10;
int  a[n],i;
for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<"Enter the  finding  number = ";
int  f;
cin>>f;
for(i=0;i<n;i++){
        if(a[i]==f){
            cout<<"Found"<<endl;
            return 0;
        }
}
cout<<"Not Found";
return 0;
}
