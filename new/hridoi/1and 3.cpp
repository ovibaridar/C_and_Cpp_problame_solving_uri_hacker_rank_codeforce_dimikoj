#include<bits/stdc++.h>
using  namespace  std;
int  main()
{
    int n=100,i,j;
    int  a[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]%5==0 && a[i][j]%10==0 ){
                cout<<a[i][j]<<" is Multiple by 5 and 10"<<endl;
            }
        }
    }
    return 0;
}
