#include <iostream>

#include <string>



using namespace std;

void swap(char a[],char b[]);

int main()

{

char a[10];

char b[10];

char c[20];



cout<<"Enter value in first array:";
for(int i=0;i<10;i++)
cin>>a[i];



cout<<"Enter value in Second array:";
for(int i=0;i<10;i++)
cin>>b[i];


c=a+b;

cout<<c;

return 0;

}



void swap(char a[],char b[])

{

    char temp[20];

    if(a]>b])

    {

        temp=a;

        a=b;

        b=temp;

    }

}
