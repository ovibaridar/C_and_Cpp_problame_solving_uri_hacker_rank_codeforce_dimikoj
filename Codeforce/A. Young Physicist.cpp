#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n][3],sum=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<3; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum+=a[j][i];
        }
        if(sum!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
