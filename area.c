#include <stdio.h>
#define PI 3.14
int main()
{
int r;
printf("Enter the value of r:\n");
scanf("%d",&r);
float area;
area=PI*r*r;
printf("The area of the circle is:%.2f\n",area);
return 0;
}
