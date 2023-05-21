#include<bits/stdc++.h>
using  namespace  std;
int main(){
int  n =2;
int  a[n][n],i,j;
for(i=0;i<n;i++){
        for(j=0;j<n;j++)
    cin>>a[i][j];
}
cout<<"Enter the  finding  number = ";
int  f;
cin>>f;
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        if(a[i][j]==f){
            cout<<"Found"<<endl;
            return 0;
        }
}
cout<<"Not Found";
return 0;
}
