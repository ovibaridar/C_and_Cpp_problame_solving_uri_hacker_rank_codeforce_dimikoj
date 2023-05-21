#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a[100],i,n,d=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        if(a[i] == a[i])
            d++ ;
    }
        cout<<d;
    return 0;
}

