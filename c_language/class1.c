/*
row major
    adress of A[i][j] = B + W * ((I-LR) * N + (J-LC))
    I = ROW SUBSET OF AN ELEMENT WHOSE ADDRESS TO BE FOUND



     
*/
#include<stdio.h>
int main()
{
    int matA[4][5];
    printf("Enter the co-efficients of matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matA[i][j]);
        }        
    }
    printf("The entered matrix is: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d   ", matA[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((counter))
            {
                /* code */
            }
            
        }
        
    }
    
    return 0;
}