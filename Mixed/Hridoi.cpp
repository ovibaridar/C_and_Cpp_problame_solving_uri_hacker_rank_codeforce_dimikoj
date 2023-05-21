#include<bits/stdc++.h>
using  namespace  std;
int  main (){
    int st=10,sub=5,i,j;

    int a[sub][st];
    for(i=0;i<sub;i++){
        for(j=0;j<st;j++){
            cin>>a[i][j];
        }
    }
     int  max=0;
     int  min =0,sum=0;
     float avarage=0;

     for(i=0;i<sub;i++){
        sum=0;min=0;max=0;avarage=0;
           max=a[i][0];
           min=a[i][0];
        for(j=0;j<st;j++){
           if(a[i][j]>max){
            max=a[i][j];
           }
           if(a[i][j]<min){
            min=a[i][j];
           }
           sum=sum+a[i][j];
        }
        avarage = sum/sub;
    cout<<"for Subject = "<<i<<endl;
    cout<<"Maximum Number : "<<max<<endl<<"Minimum Number is : "<<min<<endl<<"The Average Number is : "<<(float)avarage<<endl<<endl;
    }
    return 0;
}
