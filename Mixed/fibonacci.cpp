#include<bits/stdc++.h>
using  namespace std;
int  main(){
int i,n,t1=0,t2=1,next=0;
cin>>n;
for(i=1;i<=n;i++){
    if(i==1)
    {
        cout<<t1;
        if(i!=n){
                cout<<" " ;
        }continue ;
    }
    else if(i==2)
    {
        cout<<t2; if(i!=n) {
            cout<<" ";
            }

        continue ;
    }
    next=t1+t2;
    t1=t2;
    t2 =next;
    cout<<next;
    if(i!=n) {cout<<" ";}
}
cout<<endl;
return 0;
}
