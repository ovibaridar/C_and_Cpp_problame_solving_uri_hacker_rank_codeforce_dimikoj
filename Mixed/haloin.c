#include<stdio.h>
void ToH(int n,char x,char y,char z){
    if(n==1){
            printf("\n Move disk 1 from rod %c to rod %c", x, y);
    return ;
    }

        ToH(n-1,x,z,y);
        printf("\n%c -> %c",x,y);
        ToH(n-1,z,y,x);

}
void main(){
    int n;
    printf("Enter number of plates: ");
    scanf("%d",&n);
    ToH(n,'A','B','C');
}
