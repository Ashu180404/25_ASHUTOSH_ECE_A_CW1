// write a menu driven programme to input an array and perform following operations:
/* traversal / linear search for an element in the array

   string reversal

   inserting an element at specified position

   deleting the element from specified position

   sorting the array/ bullble sort

   updation( multiply elements at even indices by 2 and add 5 to the element at odd indices)
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int num, a, num1, num2, num3, inp;
    int *arr;
    printf("Enter the size of the array: \n");
    scanf("%d", &a);
    arr = (int *)malloc(a * sizeof(int));

    printf("Input the entries of array.\n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("MENU:\n Press 1 for linear searching\n Press 2 to update string (multiply elements at even indices by 2 and add 5 to the element at odd indices)\n Press 3 to insert an element at an particular position (by creating a new memory)\n Press 4 for deletion of an element\n Press 5 for sorting\n Press 6 to exit.\n");
    scanf("%d", &num);
    while (num != 6)
    {
        switch (num)
        {
            case 1:
                printf("Enter the element whose position you want to know:\n");
                scanf("%d", &inp);
                for (int i = 0; i < a; i++)
                {
                    if (arr[i] == inp)
                    {
                        printf("Element found at position %d\n", i);
                    }
                }
            break;
            case 2:
                for (int i = 0; i < a; i++)
                {
                    if (i % 2 == 0)
                    {
                        arr[i] *= 2;
                    }
                    else
                    {
                        arr[i] += 5;
                    }
                }
            break;
            case 3:
                printf("Enter the position: \n");
                scanf("%d", &num2);
                printf("Enter the value: \n");
                scanf("%d", &inp);               
                if (num2 < 0 || num > a)
                {
                    printf("Enter valid position");
                }
                else
                {
                    arr = (int*)realloc(arr, (a+1)* sizeof(int));
                    for (int i = a; i > num2; i--)
                    {
                        arr[i] = arr[i-1];
                    }
                    arr[num2] = inp;
                    a++;
                    printf("Element inserted successfully.\n");
                }
            break;
            case 4:
                printf("Enter the index to be deleted: \n");
                scanf("%d", &num3);
                for (int i = num3; i < a-1; i++)
                {
                    arr[i] = arr[i+1];                    
                }
                int* temp = (int*)realloc(arr, (a-1)* sizeof(int));
                if (temp != NULL) {
                arr = temp;
                a--;  // Update the size of the array
                printf("Element deleted successfully\n");
                } else 
                {
                    printf("Memory reallocation failed\n");
                }
            break;
            case 5:
                // Sorting using Bubble Sort
                for (int i = 0; i < a - 1; i++) {
                    for (int j = 0; j < a - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) 
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Array sorted successfully.\n");
            break;

            default:
                printf("Invalid choice. Please try again.\n");
            break;
            
            
        }
    
    printf("Updated Array: ");
                for (int i = 0; i < a; i++) 
                {
                    printf("%d ", arr[i]);
                }
        printf("\n");
        printf("MENU:\n Press 1 for linear searching\n Press 2 to update string (multiply elements at even indices by 2 and add 5 to the element at odd indices)\n Press 3 to insert an element at an particular position (by creating a new memory)\n Press 4 for deletion of an element\n Press 5 for sorting\n Press 6 to exit.\n");

        scanf("%d", &num);
        }   
        free(arr);
    return 0;
}