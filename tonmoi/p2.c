#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    if(a<=31)
        printf("1/%d\n",a);
    else if(a>31 &&a <=59)
        printf("2/%d\n",(a-31));
    else if(a>59 &&a <=90)
        printf("3/%d\n",(a-59));
    else if(a>90 &&a <=120)
        printf("4/%d\n",(a-90));
    else if(a>120 &&a <=151)
        printf("5/%d\n",(a-120));
    else if(a>151&&a <=181)
        printf("6/%d\n",(a-151));
    else if(a>181 &&a <=212)
        printf("7/%d\n",(a-181));
    else if(a>212 &&a <=242)
        printf("8/%d\n",(a-212));
    else if(a>212 &&a <=273)
        printf("9/%d\n",(a-212));
    else if(a>273 &&a <=303)
        printf("10/%d\n",(a-272));
    else if(a>303 &&a <=334)
        printf("11/%d\n",(a-302));
    else if(a>334 &&a <=364)
        printf("12/%d\n",(a-333));
    else if(a==365)
        printf("12/31\n");


return 0;
}


