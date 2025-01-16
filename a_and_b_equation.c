#include<stdio.h>
int main()
{
 float a,b,x;
 printf("Enter the value of a: ");
 scanf("%f",&a);
 printf("test3 ");
 scanf("%f",&b);
 if(a!=0)
 {
  x=-b/a;
  printf("The solution is %.1fx + %.1f = 0 is x = %.1f \n",a,b,x);
 }
 else if(a==0&&b==0)
 {
  printf("for 0x + 0 = 0 every x is true \n");
 }
 else
 {
  printf("no solution \n");
 }
 return 0;
}
