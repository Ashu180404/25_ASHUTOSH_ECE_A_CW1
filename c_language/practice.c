#include<stdio.h>

int binary(int arr[], int size, int num)
{
    int low, high, mid;
    int start = 0;
    while (start < size - 1 )
    {
        for (int i = 0; i < size; i++)
        {
            mid = (start + size)/2;
            if (arr[mid] > num)
            {
                mid = (start + mid)/2;
            }
            else if (arr[mid] = num)
            {
                printf("Element found at index %d: ", mid);
            }
            else
            {
                mid = (mid + size) / 2;
            }
            
        }
    }
    return -1;
}
int main()
{
    int arr[1000], a, b;
    int num1;
    printf("Enter the size of array: \n");
    scanf("%d", &a);
    printf("Input entries: \n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[a]);
    }
    printf("Enter a number to find: ");
    scanf("%d", &b);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > arr[i+1])
        {
            arr[i] = num1;
            arr[i+1] = arr[i];
            arr[i+1] = num1;
        }
        
    }
    printf("The array after sorting is: \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d", arr[i]);
        }
    }
    int result = binary(arr, a, b);
    if (result == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("The element found at index %d: ", result);
    }
    
    return 0;
}