#include <stdio.h>
#include <math.h>

int main()
{
    int s;
    printf("What kind of math do you want?\n");
    printf("Please select:\n1. Simple math\n2.Trigonometry\n");
    scanf("%d",&s);
    if(s == 1)
    {
        float num1,num2,num3,num4,num5;
        char opt;
        printf("Please choose an operator (+,-,*,/,^,root = r,%%):%c\n\n",opt);
        scanf("%c",&opt);

        if(opt == '+')
        {
            int digit;
            printf("\nHow many digit do you want to input?\n");
            printf("Please select:\n2 3 4 5\n");
            scanf("%d",&digit);
            if(digit ==2)
            {
                printf("Please enter two number:\n");
                scanf("%f %f",&num1,&num2);
                printf("You submit:\n%f%c%f\n",num1,opt,num2);
                printf("= %f\n",(num1+num2));
            }
            else if(digit == 3)
            {
                printf("Please enter three number:\n");
                scanf("%f %f %f",&num1,&num2,&num3);
                printf("You submit:\n%f%c%f%c%f\n",num1,opt,num2,opt,num3);
                printf("= %f\n",(num1+num2+num3));
            }
            else if(digit == 4)
            {
                printf("Please enter four number:\n");
                scanf("%f %f %f %f",&num1,&num2,&num3,&num4);
                printf("You submit:%f%c%f%c%f%c%f",num1,opt,num2,opt,num3,opt,num4);
                printf("= %f",(num1+num2+num3+num4));
            }
            else if(digit == 5)
            {
                printf("Please enter five number:\n");
                scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
                printf("You submit:\n%f%c%f%c%f%c%f%c%f\n",num1,opt,num2,opt,num3,opt,num4,opt,num5);
                printf("= %f",(num1+num2+num3+num4+num5));
            }
            else
            {
                printf("Invalid Number\n");
            }
        }
        else if(opt == '-')
        {
            printf("Please enter 2 number\n");
            scanf("%f %f",&num1,&num2);
            printf("=%f\n",num1-num2);
        }
        else if(opt == '*')
        {
            int digit;
            printf("\nHow many digit do you want to input?\n");
            printf("Please select:\n2 3 4 5\n");
            scanf("%d",&digit);

            if(digit ==2)
            {
                printf("Please enter two number:\n");
                scanf("%f %f",&num1,&num2);
                printf("You submit:\n%f%c%f\n",num1,opt,num2);
                printf("= %f\n",(num1*num2));
            }
            else if(digit == 3)
            {
                printf("Please enter three number:\n");
                scanf("%f %f %f",&num1,&num2,&num3);
                printf("You submit:\n%f%c%f%c%f\n",num1,opt,num2,opt,num3);
                printf("= %f\n",(num1*num2*num3));
            }
            else if(digit == 4)
            {
                printf("Please enter four number:\n");
                scanf("%f %f %f %f",&num1,&num2,&num3,&num4);
                printf("You submit:%f%c%f%c%f%c%f",num1,opt,num2,opt,num3,opt,num4);
                printf("= %f",(num1*num2*num3*num4));
            }
            else if(digit == 5)
            {
                printf("Please enter five number:\n");
                scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
                printf("You submit:\n%f%c%f%c%f%c%f%c%f\n",num1,opt,num2,opt,num3,opt,num4,opt,num5);
                printf("= %f",(num1*num2*num3*num4*num5));
            }
            else
            {
                printf("Invalid Number\n");
            }
        }
        else if(opt == '/')
        {
            printf("Please enter 2 number:\n");
            scanf("%f %f",&num1,&num2);
            printf("=%f",num1/num2);
        }
        else if(opt == '^')
        {
            printf("Please enter 2 number (Base,Exponent):\n");
            scanf("%f %f",&num1,&num2);
            printf("=%f",pow(num1,num2));
        }
        else if(opt == 'r')
        {
            printf("Please enter the value:");
            scanf("%f",&num1);
            printf("%f=",sqrt(num1));
        }
        else if(opt == '%')
        {
            printf("Please enter the value");
            scanf("%f",&num1);
            printf("%f=",(num1/100));
        }
    }
    else if(s == 2)
    {
        int x;
        float result ;
        char tri ;

        printf("Please enter the value of degree: \n");
        scanf("%d",&x);
        printf("Please choose an trigonometry operator:\n(sin = s ,cos = c , tan = t)\n");
        scanf("%c",&tri);
        if(tri == 's')
        {
            result = sin(x);
            printf("sin(x) = %f",result);
        }
        else if(tri == 'c')
        {
            result = cos(x);
            printf("cos(x) = %f",result);
        }

        else if(tri == 't')
        {
            result = tan(x);
            printf("tan(x) = %f",result);
        }
    }
    else
    {
        printf("Invalid operation");
    }
    return 0;
}
