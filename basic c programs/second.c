#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter 2 digit no.");
    scanf("%d",&a);
    b=a/10;
    c=a%10;
    a=c*10+b;
    printf("%d",a);

}
