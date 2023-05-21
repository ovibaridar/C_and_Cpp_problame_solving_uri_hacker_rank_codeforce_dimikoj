#include<stdio.h>
int main()
{
    int n,i,P=0,N=0,Z=0,a[100];

    float sump,sumn,sumz;
    // cin>>n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        //cin>>a[i];
        scanf("%d",&a[i]);

    }
    for(i=0; i<n; i++)

        if(a[i]>0)
            P++;
        else if(a[i]==0)
            Z++;
        else
            N++;
        printf("%f\n%f\n%f\n",P/n,N/n,Z/n);
    return 0;
}
