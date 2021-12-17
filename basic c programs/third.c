#include<stdio.h>
main()
{
    int a,b,c,d,e;
    printf("enter 3 digit no.");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    a=b+d*10+e*100;
    printf("%d",a);
}
