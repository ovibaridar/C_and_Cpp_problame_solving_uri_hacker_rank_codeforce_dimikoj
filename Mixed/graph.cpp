#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,j,l,len;
char k;
vector<int>w;
vector<int>v;
vector<int>x;
cout<<" Enter The number of vertex "<<endl;
cin>>n;
int a[n][n];
for(i=0;i <n;i++){
    for(j=0;j<n;j++){
        cout<<"Enter value "<<i+1<<","<<j+1<<" Yes or No = ";
        cin>>k;
        if(k=='Y'|| k=='y'){
            cout<<"What is the Weight of "<<i+1<<","<<j+1<<" "<<"Edge = ";
                cin>>l;
                v.push_back(l);
                v.push_back(i+1+500);
                v.push_back(j+1+500);
                w.push_back(l);
            a[i][j]=l;
        }
        else if(k=='n' || k=='N'){
            a[i][j]=0;
        }
    }
}
cout<<"The Graph  Matrix is = "<<endl;
for(i=0;i<n;i++) {
    for(j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}

int count =0,sum=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i][j]>0){
            sum=sum+a[i][j];
            count++;
        }
    }
}
cout<<"The total Weight is = "<<sum<<endl;
cout<<"The Average Weight of this Graph  is = "<<(float)sum/(n*n)<<endl;
cout<<"The Minimum wight  list is "<<endl;

sort(w.begin(), w.end());
for(i=0;i<w.size()-1;i++ ){
    auto  it  =find(v.begin(),v.end(),w[i]);
    if(it !=v.end()){
        len = it-v.begin();
    }
    cout<<v[len+1]-500<<"----->"<<v[len+2]-500<<"The Weight is ="<<w[i]<<endl;
}


return 0;

}
