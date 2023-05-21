#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a;
    cin>>a;
    int arr[a];
    for(int i = 0 ; i<a ; i++)
    {
        cin>>arr[i];
    }
    int aa = arr[1];

    for(int i = 0 ; i<a ; i++)
    {

        if(arr[i]<aa)
        {

            aa=arr[i];
        }
    }

    for(int i = 0 ; i<a ; i++)
    {

        if(arr[i]<aa)
        {

            aa=arr[i];
        }
    }


    cout<<aa;
    return 0;

}
