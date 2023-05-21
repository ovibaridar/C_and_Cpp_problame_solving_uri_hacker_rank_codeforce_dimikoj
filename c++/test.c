#include<stdio.h>
int main()
{
    float a,b,c,d,e,s1,s2;
scanf("%f%f%f%f",&a,&b,&c,&d);
s1=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
printf("Media: %.1f\n",s1);
if(5.0>s1)
{
    printf("Aluno reprovado.\n");
    scanf("%f",&e);
    printf("Nota do exame: %f\n",e);
    s2=(s1+e)/2;
    if(5.0<=s2){

    printf("Aluno aprovado.\n");

    }
    else{
    printf("Aluno reprovado.");
    }
    printf("Media final: %.1f\n",s2);
}
return 0;
}
