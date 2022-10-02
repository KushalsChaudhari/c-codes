#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf(("%d a is greater",a));
    else if(b>c)
    printf("%d b is greater",b);
    else
    printf("%d c is greater",c);
    return 0;
}