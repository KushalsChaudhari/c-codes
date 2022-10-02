#include<stdio.h>
int main()
{
    int num1;
    char ch;
    float num2;
    double num3;
    printf("Enter int char float double ");
    scanf("%d%c%f%lf",&num1,&ch,&num2,&num3);
    printf("num1=%d\nch=%c\nnum2=%f\nnum3=%lf\n",num1,ch,num2,num3);
return  0;
}