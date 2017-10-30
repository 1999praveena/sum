#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,i,sum=0;
printf("enter range:");
scanf("%d",&a);
for(i=1;i<=a,i++)
{
sum=sum+i;
}
printf("the sum is %d",sum);
getch();
return 0;
}
