#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max =0,c ,maxc;
    for(i=0;i<n;i++)
    {
        c = 1;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c ++;

            if(c > max )
            {
                maxc = a[j];
            }

            }

        }
        }

    cout<<maxc;
    return 0;
}
