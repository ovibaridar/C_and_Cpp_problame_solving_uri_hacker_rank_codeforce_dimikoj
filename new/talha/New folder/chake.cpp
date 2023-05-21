#include<bits/stdc++.h>
using  namespace  std;
int main(){
string a [2][2];
for(int i =0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>a[i][j];
    }
}
for(int i =0;i<2;i++){
    for(int j=0;j<2;j++){
            if(i==0) continue;
    else{
        int  num = std::stoi(a[i][j]);
        cout<<num<<" ";
    }
    }
  cout<<endl;
}

}
