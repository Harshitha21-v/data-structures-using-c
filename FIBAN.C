#include<stdio.h>
#include<conio.h>
int fibonacci(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (fibonacci(n-1)+fibonacci(n-2));
}
void main()
{
int n,i;
clrscr();
printf("enter the number of terms:");
scanf("%d",&n);
printf("fibonacci sries:");
for(i=0;i<n;i++)
{
printf("%d\t",fibonacci(i));
}
getch();
}
