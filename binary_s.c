#include<stdio.h>
int binary_s(int a[],int key,int n);

int main()
{
 int a[]={1,2,3,4,5,6};
 int n=sizeof(a)/sizeof(a[0]);
 int key=5;
 int res;
 res=binary_s(a,key,n);
 printf("%d",res);
    return 0;
}

int binary_s(int a[],int key,int n)
{
    int left=0;
    int right=n-1;
    int mid=left+right/2;

    for (int i=0; i<n; i++)
    {
if(a[mid]=key){
    return mid;
}
else if (a[mid]>key)
{
    left=mid-1;
}
else{
    right=mid+1;
}
    }
    return -1;
}