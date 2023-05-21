#include<stdio.h>
int stack[5],item,top=-1;
#define max 5

void push()
{
    if(top>=(max-1))
    {
        printf("The Stack is overflow \n");
    }
    else
    {
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("The Stack is Underflow \n");
    }
    else
    {
        stack[top]=item;
        top = top-1;
        printf("The Pop of item %d is  successfully \n",item);
    }

}
void dis()
{


 int i;

        for( i=top; i>=0;top--)
        {
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

}
