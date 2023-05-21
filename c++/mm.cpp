#include<iostream>
using namespace std;
int main()
{
    int a[100],i,n,m;
    cin>>n;
  for(i=1;i<=n;i++)
  {
          cin>>a[i];
  }
    m=a[0];
    for(i=1;i<=n;i++)
    {
        if(m<a[i])
        {
            m=a[i];

        }
    }
     cout<<m;
    return 0;
}

