#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d%d%d%d%d%d%d%d" ,&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    int first =(x1+x2)-(y1+y2);
    int second = (x3+x4)-(y3+y4);
    int third = (x1+x3)-(y1+y3);
    int four = (x1+x4)-(y1+y4);
    int sum = sqrt((third*third)+(second*second));
    int fifth = (x2+x4)-(y2+y4);
    if(first == second)
    {
        printf("Rectangle");
    }
    else if((first == second)&&(first==third)&&(first==fifth))

    {
        printf("square");
    }
    else if((first == second)&&(first==third)&&(first==fifth)&&(four!=sum))

    {
        printf("Rhombus");
    }
    else
        printf("Parallelogram");
    return 0;
}
