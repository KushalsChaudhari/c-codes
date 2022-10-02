#include<stdio.h>
int main()
{
int num1,num2;
printf("enter num1 num2");
scanf("%d%d",&num1,&num2);
if(num1>num2)//if condition
{
    printf("num1 %d is greater",num1);
}
else//else condition
{
    printf("num2 %d is greater",num2);
    }
return  0;
}