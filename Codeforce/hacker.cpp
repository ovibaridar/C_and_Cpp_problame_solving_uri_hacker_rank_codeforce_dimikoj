
#include<bits/stdc++.h>
using namespace std;
int  main(){
int  n ,i,j,x;
cin>>n;
int  a[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int sum1 =0,sum2=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i==j)
      {
          sum1+=a[i][j];
      }
      if((i+j)==(n-1)){
        sum2+=a[i][j];
      }
    }
}

if(sum1>sum2)   x =sum1-sum2;
else  x = sum2-sum1;

cout<<x<<endl;
}
