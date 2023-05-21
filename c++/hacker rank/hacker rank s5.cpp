//#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100];
    float P=0,N=0,Z=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
        if(a[i]>0)
            P++;
        else if(a[i]==0)
            Z++;
        else
            N++;
    //cout<<setprecision(7);
    cout<<P/n<<setprecision(7)<<endl<<N/n<<setprecision(7)<<endl<<Z/n<<setprecision(7)<<endl;
    return 0;
}
