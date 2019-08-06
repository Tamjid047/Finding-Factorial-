#include<stdio.h>
main()
{
    int a,c=1,i;
    printf("enter a number=");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=c*i;
        printf("%d*",i);
    }
    printf("\nFactorial=%d",c);
}
