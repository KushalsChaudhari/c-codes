#include <stdio.h>

int sort(int arr[], int n);
void display_array_elements( int arr[] ,int n);

int main()
{
    int arr[] = {2, 4, 6, 3, 1, 5, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res;
    res = sort(arr, n);
    display_array_elements(arr,n); 
}

int sort(int arr[], int n)
{
    int swap;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

void display_array_elements( int arr[] ,int n)
{
        int index; 
        printf("Array elements are :"); 
        for(index = 0 ; index < n ; index++)
                printf("%4d",arr[index]); 
        printf("\n");         

}


// int main()
// {
//     int arr[]={2,6,4,7,5,1,3};
//     int n=sizeof(arr)/sizeof(arr[0]),temp,pos;
//     for(int i=0; i<n-1;i++)
//     {
//         pos=i;
//          for(int j=i+1; i<n;j++)
//          {
// if(arr[pos]>arr[j])
// {
//     pos=j;
// }
// if (pos!=i)
// {
//     temp=arr[i];
//     arr[i]=arr[pos];
//     arr[pos]=temp;
// }
//          }
//           for(int i=0; i<n;i++){
//               printf("%d",arr[i]);
              
//           }
//     }
//     return 0;
// }