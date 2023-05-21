#include <iostream>
using namespace std;
int main()
{
     int i, j, N;
     int star, spaces;
     cin>>N;
     spaces = N-1;
     star = 1;
     for(i=1; i<N*2; i++)
     {
         for(j=1; j<=spaces; j++)
             cout<<" ";

         /* Print stars */
         for(j=1; j<=star; j++){

               // if(star==N){
                  //  for(i=1;i<=N;i++){
                       // cout<<"*";
                  //  }
               // }
         //  else
                cout<<"*";
         }

         cout<<"\n";

         if(i < N)
         {
             star++;
             spaces--;
         }
         else
         {
             star--;
             spaces++;
         }
     }
     return 0;
 }
