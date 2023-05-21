#include<bits/stdc++.h>
#include<vector>
using  namespace std;
int main() {

    std::vector<string> data;
    std::vector<string> datas;
    string temp;
    int  selectinput,i,k,l;
    cin>>selectinput;
    for(i=0;i<selectinput;i++){
    std::cin >> temp;
    data.push_back(temp);
    }
    int  chakeinput,j;
    cin>>chakeinput;
    for(i=0;i<chakeinput;i++){
    std::cin >> temp;
    datas.push_back(temp);
    }
    int  charcount=0,stringcount=0;

for(i=0;i<datas.size();i++)
{
    string chak=datas[i];
    int sizeofchake=chak.size();
    for(j=0;j<data.size();j++){
        string  select=data[i];
        int sizese=select.size();
        if(sizese!=sizeofchake){
            continue;
        }
        else{
            for(k=0;k<sizeofchake;k++){
                char chch=chak[k];
                for(l=0;l<sizeofchake;l++){
                        char chchs=select[l];
                    if(chch==chchs){
                       charcount++;
                       continue;
                    }
                }
            }
        if(charcount==sizeofchake)
        {
         stringcount++;
        }
        }
    }
cout<<stringcount<<endl;
}
return 0;
}

