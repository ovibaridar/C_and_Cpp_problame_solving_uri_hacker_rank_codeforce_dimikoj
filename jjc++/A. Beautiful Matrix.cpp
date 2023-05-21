#include<bits/stdc++.h>
using  namespace  std;
int  main()
{

    int n=5,i,j,a=0,b=0,k=0;
    int m[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            if(m[i][j]==1){
                a=i;
                b=j;
                k=1;
            }
        }
        if(k>0){
            break;
        }
    }
    int sum = abs(2-a)+abs(2-b);
    cout<<sum<<endl;
    return 0;
}

