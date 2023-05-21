#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int i,a[100],m,z,x,v,b,n;
    m=5;
    for(i=1; i<=m; i++)
        cin>>a[i];

    if(m=5)
    {
        if(a[1]>a[2] && a[1] >a [3] && a[1] > a[4] && a [1] >  a[5])
            cout<<a[2]+a[3]+a[4]+a[5];
        else if(a[2]>a[1] && a[2] >a [3] && a[2] > a[4] && a [2] >  a[5])
            cout<<a[1]+a[3]+a[4]+a[5];
        else if(a[3]>a[1] && a[3] >a [2] && a[3] > a[4] && a [3] >  a[5])
            cout<<a[1]+a[2]+a[4]+a[5];
        else if(a[4]>a[1] && a[4] >a [3] && a[4] > a[2] && a [4] >  a[5])
            cout<<a[1]+a[3]+a[2]+a[5];
        else if(a[5]>a[1] && a[5] >a [3] && a[5] > a[2] && a [5] >  a[4])
            cout<<a[1]+a[3]+a[4]+a[2];
        else
            cout<<a[1]+a[3]+a[4]+a[2];
    }
    cout<<" ";
    if(m=5)
    {
        if(a[2]>a[1] && a[5] >a [1] && a[4] > a[1] && a [3] >  a[1])
            cout<<a[5]+a[3]+a[4]+a[2];
        else if(a[1]>a[2] && a[3] >a [2] && a[4] > a[2] && a [5] >  a[2])
            cout<<a[1]+a[3]+a[4]+a[5];
        else if(a[5]>a[3] && a[4] >a [3] && a[2] > a[3] && a [1] >  a[3])
            cout<<a[1]+a[5]+a[4]+a[2];
        else if(a[5]>a[4] && a[2] >a [4] && a[3] > a[4] && a [1] >  a[4])
            cout<<a[1]+a[3]+a[5]+a[2];
        else if(a[1]>a[5] && a[2] >a [5] && a[3] > a[5] && a [4] >  a[5])
            cout<<a[1]+a[3]+a[4]+a[2];
            else
            cout<<a[1]+a[3]+a[4]+a[2];
    }

    return 0;
}

