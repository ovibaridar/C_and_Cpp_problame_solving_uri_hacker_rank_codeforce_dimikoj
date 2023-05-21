#include<bits/stdc++.h>
using  namespace std;
int  main(){
    int  i,number,j,k;
    cin>>number;
    for(i=0;i<number;i++){

    int bus_stop,buscount=0,maxa=0;
    cin>>bus_stop;
    int bush[bus_stop-1];
    for(j=0;j<bus_stop-1;j++)
{
    int a ,b;
   cin>>a>>b;
   buscount=(buscount +a)-b;
   bush[j]=buscount;
}
 maxa =bush[0];

   for(j=0;j<bus_stop-1;j++)
{
    if(maxa<bush[j]){
        maxa=bush[j];
    }

}
    cout<<maxa;
    }
 return 0;
}
