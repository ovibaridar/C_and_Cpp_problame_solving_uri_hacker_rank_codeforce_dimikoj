#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c;

    scanf("%f%f%f",&a,&b,&c);

    float x1 = ((-b)+sqrt((b*b)-(4*a*c)))/(2*a);

    float x2 = ((-b)-sqrt((b*b)-(4*a*c)))/(2*a);

    float z =(b*b)-(4*a*c);

    if(a==0)
    {
        printf("NONE");
    }
    else if(z<0)
    {
        printf("NONE");
    }
    else
        printf("%.2f %.2f",x1,x2);



    return 0;
}
