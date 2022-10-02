#include <stdio.h>

void bubble_sort(int arr[], int n);
void display_array_elements(int arr[], int n);

int main()
{
    int arr[] = {2, 4, 5, 3, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    display_array_elements(arr, n);
    return 0;
}

void bubble_sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void display_array_elements(int arr[], int n)
{
    int index;
    printf("Array elements are :");
    for (index = 0; index < n; index++)
        printf("%4d", arr[index]);
    printf("\n");
}