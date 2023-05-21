#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,r,i,j;
    cin>>x>>y>>r;
    int m[x+1][y+1];
    for(int i=1;i<=x;i++){

        for(int j=1;j<=y;j++)
        cin>>m[i][j];

    }
    /*for(int i=0;i<x;i++){
       cout<<endl;
        for(int j=0;j<y;j++)
        cout<<m[i][j]<<" ";

    }*/


for(int i=1;i<=x;i++){
       cout<<endl;
        for(int j=1;j<=y;j++)
     cout<<m[i-r][i-r];

    }

}

