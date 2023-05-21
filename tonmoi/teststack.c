#include<stdio.h>
int stack[10],top=-1,item;
#define max 10

void push(){
if(top>=(max-1)){
    printf("The Stack is overflow\n");

}
else{
    scanf("%d",&item);
    top=top+1;
    stack[top]=item;
}

}
void pop(){

if(top==-1){
    printf("The Stack is Underflow\n");
}
else{
    stack [top ] =item;
    top=top-1;
    top -- ;
    printf("The Pop of item %d is  successfully \n",item);
}
}
void dis(){

        for(int i = top;i>-1;i--){
            printf("%d\n",stack[i]);

    }
}

int main()
{

    int k,l,m;
    do
    {
        printf("1)push \n2)pop \n3)Dispaly\n");
        scanf("%d",&k);
        switch (k)
        {
        case 1:
            printf("\nHow Many Data you want to Enter \n");
            scanf("%d",&l);
            for(int i = 0;i<l;i++){
                push();
            }
            break;
        case 2:
            pop();
        break ;
        case 3:
            dis();
            break;
        default :
            printf("\nWrong Entry \n ");
        }
        printf("\n1)continue\n2)End \n");
        scanf("%d",&m);
    }while(m!=2);
return 0;
}
