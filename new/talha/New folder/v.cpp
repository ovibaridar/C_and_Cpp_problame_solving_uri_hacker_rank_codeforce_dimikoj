#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,st,sub;
cout<<"How many Subject you Have"<<endl;

cin>>st;
cout<<endl;
cout<<"How many Student you Have"<<endl;

cin>>sub;
cout<<endl;
string a[st+1][sub];
for(i=0;i<st+1;i++){
    for(j=0;j<sub;j++){
            if(i==0){
                cout<<"Enter the "<<j+1<<" sub name"<<endl;
            }
            else cout<<"Enter the "<<i<<" Student "<<j+1<<" subject Number"<<endl;
        cin>>a[i][j];
    }
}
cout<<"Subject  ";
for(i=0;i<st+1;i++){
    if(i>0) cout<<"Student "<<i<<" ";
    for(j=0;j<sub;j++){
        if(i==0) cout<<" ";
        cout<<"  "<<a[i][j];
        if(i==0){
            cout<<" ";
        }
        else cout<<"      ";

    }
    cout<<endl;
}
cout <<endl;


cout<<"The Average of all Subject Mark : "<<endl<<endl;
int sum ,num;
string  str ;
for(j=0;j<sub;j++){
        sum = 0 ;
    for(i=0;i<st+1;i++){

            if(i==0){
                cout<<a[i][j]<<" ";
                }

     if (i!=0){
    string str = a[i][j];
    int  num = std::stoi(str);
    sum+=num;

    }
            }

    cout<<(float)(sum/st)<<endl<<endl;
}

cout<<endl<<endl<<"Average of all Student Subject mark :"<<endl<<endl;
for(i=0;i<st+1;i++){
        sum=0;
    for(j=0;j<sub;j++){
        if(i==0) continue;

            else{
    string str = a[i][j];
    int  num = std::stoi(str);
    sum+=num;
            }
    }
    if(i>0){
        cout<<"The Student Number "<<i<<" Subject Average is "<<sum/sub<<endl<<endl;
    }
}



return 0;

}
