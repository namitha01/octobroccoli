#include<stdio.h>
main()
{
int a,b;
printf("enter two numbers to swap:");
scanf("%d""%d",&a,&b);
printf("a=%d\nb=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swaping\n");
printf("a=%d\nb=%d\n",a,b);
return 0;
}
