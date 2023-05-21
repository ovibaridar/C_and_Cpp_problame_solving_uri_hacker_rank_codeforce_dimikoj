#include <stdio.h>

#include<math.h>

int main()
{
    printf("Welcome to the grade book for\n");
    printf("CS101 introduction to c++ programing !\n\n");
    printf("The grades are :\n");
    int i,a[10],avarage;
    int sum=0;
    for(i=1; i<=10; i++)
    {
        printf("Student %d: ",i);
        scanf("%d",&a[i]);
        printf("\n");
    }

    for(i=1; i<=10; i++)
    {
        sum=sum+a[i];
    }
    float ava = sum/10;
    int max=a[1],min=a[2];
    for(i=1; i<10; i++)
    {
        if(a[i]>max)
            max=a[i];

        if(a[i]<min)
            min=a[i];
    }
    printf("class average is %.2f\n",ava);
    printf("Lowest Grade is %d\n",min);
    printf("Highest Grade is %d\n",max);

    if(a[i]<101)
    {
        printf("0-9: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=0 && a[i]<=9)
                printf("*");

        }


        printf("\n20-29: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=20 && a[i]<=29)
                printf("*");

        }
        printf("\n30-39: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=30 && a[i]<=39)
                printf("*");

        }

        printf("\n40-49: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=40 && a[i]<=49)
                printf("*");

        }
        printf("\n50-59: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=50 && a[i]<=59)
                printf("*");

        }

        printf("\n60-69: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=60 && a[i]<=69)
                printf("*");

        }
        printf("\n70-79: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=70 && a[i]<=79)
                printf("*");

        }


        printf("\n80-89: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=80 && a[i]<=89)
                printf("*");

        }
        printf("\n90-99: ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]>=90 && a[i]<=99)
                printf("*");

        }
        printf("\n100  : ");
        for(int i=1; i<=10; i++)
        {

            if(a[i]==100)
                printf("*");

        }
    }
    return 0;

}
