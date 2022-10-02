#include<stdio.h>

struct struct_name{
  int data;
  double val;  
};

void disp(int x,double y)
{
    printf("%d %.2lf\n",x,y);
}

void dispviapass(struct struct_name* x)
{
   printf("%d %.2lf",x->data,x->val);
}


int main()
{
    struct struct_name s1={12,12.00};
    // s1=;
    printf("%d %.2lf\n",s1.data,s1.val);
    disp(s1.data,s1.val);
    dispviapass(&s1);
    return 0;
}