#include<bits/stdc++.h>
using  namespace  std;
int  main (){
    int  a,b,c;
    int sum1=0,sum2=0,sum3=0;
    cin>>a>>b>>c;
    if(1<=a<=100 && 1<=b<=100){int v=c/3;
    int sum=c%3;
    if(sum!=0){

        sum1=(v*b)+(sum*a);
    }
    else if(sum=0){
        sum1=(v)*b;
    }
    sum2=(a*c);
    if(sum1<sum2){
        sum3=sum1;
    }
    else if(sum2<sum1){
        sum3=sum2;
    }
    else if (sum1==sum2){
        sum3=sum1;
    }
    cout<<sum3;
    }
    return 0;
}
