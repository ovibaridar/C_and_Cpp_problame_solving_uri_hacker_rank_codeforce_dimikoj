#include <stdio.h>
#include <math.h>

int main()
{

    float num1,num2;
	double x,result;
	char opt;

	printf("Please choose an operator (+,-,*,/,^,%%,sin=s,cos=c,tan=t,sec=p,cot=q,cosec=r)%c\n",opt);
	scanf("%c",&opt);

	if(opt == '+')
	{
		printf("Please enter two number:\n");
	    scanf("%f %f",&num1,&num2);
		printf("You submit:\n%f%c%f\n",num1,opt,num2);
		printf("=%f",num1+num2);
	}
	else if(opt == '-')
	{
		printf("Please enter two number:\n");
	    scanf("%f %f",&num1,&num2);
		printf("You submit:\n%f%c%f\n",num1,opt,num2);
		printf("=%f",num1-num2);
	}
	else if(opt == '*')
	{
		printf("Please enter two number:\n");
	    scanf("%f %f",&num1,&num2);
		printf("You submit:\n%f%c%f\n",num1,opt,num2);
		printf("=%f",num1*num2);
	}
	else if(opt == '/')
	{
		printf("Please enter two number:\n");
	    scanf("%f %f",&num1,&num2);
		printf("You submit:\n%f%c%f\n",num1,opt,num2);
		printf("=%f",num1/num2);
	}
	else if(opt == '^')
	{
		printf("Please enter two number:\n");
	    scanf("%f %f",&num1,&num2);
		printf("You submit:\n%.0f%c%.0f\n",num1,opt,num2);
		printf("=%.0f",pow(num1,num2));
	}

	else if(opt == '%')
	 {
	 	printf("Please enter the value");
	 	scanf("%f",&num1);
	 	printf("%f=",(num1/100));
	 }
 	else if(opt == 's')
	{
		printf("Please enter the value of the degree:");
		scanf("%lf",&x);
        result = sin(x);
		printf("sin(x) = %lf",result);
	}
	else if(opt == 'c')
	{
		printf("Please enter the value of the degree:");
		scanf("%lf",&x);
		result = cos(x);
		printf("cos(x) = %lf",result);
	}

    else if(opt == 't')
	{
		printf("Please enter the value of the degree:");
		scanf("%lf",&x);
        result = tan(x);
		printf("tan(x) = %lf",result);
	}
   else if(opt == 'p')
	{
		printf("Please enter the value of the degree:");
		scanf("%lf",&x);
        result = 1/(cos(x));
		printf("sec(x) = %lf",result);
	}
	else if(opt == 'q')
	{
		printf("Please enter the value of the degree:");
		scanf("%lf",&x);
        result = 1/(tan(x));
		printf("cot(x) = %lf",result);
	}
	else if(opt == 'r')
	{
		printf("Please enter the value of the degree:");
		scanf("%lf",&x);
        result =1/(sin(x));
		printf("cosec(x) = %lf",result);
	}
	 else
	 {
	 	printf("Invalid operation.");
	 }
	return 0;
}


