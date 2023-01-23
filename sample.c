#include<stdio.h>

void add(int, int);
void sub(int, int);
void mul(int, int);
int main()

{
int a, b;
printf("Enter the two values to be added:");
scanf("%d %d", &a, &b);

add(a,b);
sub(a,b);
mul(a,b);
return 0;

}

void add(int x, int y)
{
int sum;
sum=x+y;
printf("Sum is:%d\n",sum);

}
void sub(int x, int y)
{
int sum;
sum=x-y;
printf("Sum is:%d\n",sum);
}
void mul(int x, int y)
{
int sum;
sum=x*y;
printf("Mul is:%d\n",sum);
}
