#include<bits/stdc++.h>
using  namespace  std;
int main(){

int  n;
cin>>n;
int  a[n],i,j,t;

for(i=0;i<n;i++){
cin>>a[i];
}
cout<<"What is your  target  value"<<endl;
cin>>t;

int  stvau =0,sum=0;

for(i=0;i<n;i++){
        stvau=a[i];

    for(j=0;j<n;j++){
            if(j==i){
                continue;
            }
            else{
       sum=stvau +a[j];
       if(sum==t){
        cout<<i<<","<<j<<endl;
        return 0;
       }
            }
            sum =0;
    }
}
cout<<"Not Found"<<endl;
return 0;
}
