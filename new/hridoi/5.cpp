
#include<bits/stdc++.h>
using  namespace  std;
int  main()
{
    int n=3,i,j,sum=0,sum1=0,sum2=0;
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
            if(i==j){
                sum+=a[i][j];
            }
            else if((i+j)==n-1){
                    sum1+=a[i][j];
               }
            else if ((i+j)!=n-1 && i!=j ){
                sum2+=a[i][j];
            }

        }
    }
    cout<<"The summation  of 1st  and  2nd Diagonal Numbers : "<<sum+sum1<<endl;
    cout<<"The summation  NOn-Diagonal Numbers : "<<sum2<<endl;
    return 0;
}
