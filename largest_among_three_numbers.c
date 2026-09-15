#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter three num\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("The largest num is:%d\n",a);
}
else if(b>a&&b>c)
{
printf("The largest num is:%d\n",b);
}
else
{
printf("The largest num is:%d\n",c);
}
return 0;
}

