/*Given an array p[ 5 ], write a function to shift it circularly left by two
positions. Thus, if p[ 0 ] = 15, p[ 1 ]= 30, p[ 2 ] = 28, p[ 3 ]= 19 and 
p[4 ] = 61 then after the shift p[ 0 ] = 28, p[ 1 ] = 19, p[ 2 ] = 61, 
p[ 3 ] =15 and p[ 4 ] = 30. Call this function for a (4 x 5 ) matrix and get its
rows left shifted.*/
#include<stdio.h>
void leftRotate(int arr[], int n,int d)
{
    for (int j = 0; j < d; j++)
    {
        int temp = arr[0], i;
        for (i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
    }
}
void printmatrix(int arr[][5])
{
for(int i=0;i<4;i++)
        {
            for(int j=0;j<5;j++)
            {
            printf(" %d ",arr[i][j]);
            }
            printf("\n");
        }
}
void leftRotate_matrix(int arr[][5], int n,int d)
{
    for (int j = 0; j < d; j++)
    {
        int row;
        for( row=0;row<4;row++)
        {
            int temp = arr[row][0], i;
            for (i = 0; i < n - 1; i++)
                arr[row][i] = arr[row][i + 1];
 
            arr[row][n-1] = temp;
        }
    }
}
 
/*Function to left rotate arr[] of size n by d
void leftRotate(int arr[], int d, int n)
{
    for (int j = 0; j < d; j++)
        leftRotatebyOne(arr, n);
}*/
void matrix()
{
    int arr[4][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    printf("\nBefore shift\n");
    printmatrix(arr);
    
    
        leftRotate_matrix(arr,5,2);

    printf("\nAfter shift\n");
    printmatrix(arr);
}
 
/* utility function to print an array */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ",arr[i]);
}

 
/* Driver program to test above functions */
int main()
{
    int arr[] = { 15,30,28,19,61 };
    int n = sizeof(arr)/sizeof(arr[0]);

   
    // Function calling
    printf("\nBefore shifting: ");
    printArray(arr, n);

    leftRotate(arr,n,2);

    printf("\nAfter shifting : ");
    printArray(arr, n);

    matrix();
 
    return 0;
}