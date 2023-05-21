#include<bits/stdc++.h>
using namespace std ;
int main(){
    int  n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int m=sizeof(a)/sizeof(a[0]);
    sort(a,a+m);
    int mid = n/2;
    for(i=0;i<n;i++){
        cout<<a[i];
    }

    int  p =mid-1;
    cout<<n%2<<endl;
    if(n%2>0){
    cout<<a[mid]<<endl;
    }
    else if(n%2==0){
        cout<<a[p]<<endl;
    }
    return 0;
}
