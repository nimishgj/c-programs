#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10000

int A[MAX], B[MAX];

int main()
{

    int n, i, j;
    int low, high, mid;
    clock_t s, e;
    double cpu_exe_t;

    printf("\n Please enter the size of the array: ");
    scanf("%d", &n);

    low = 0;
    high = n-1;

    for(i=0; i<n; i++)
    {
        A[i] = rand() % 100;
    }
    printf("\n The array elements are: \n");

    for(i=0; i<n; i++)
    {
        printf("%d\t", A[i]);
    }
    s=clock();
    //for(j=0;i<10000;j++)                                   //Delay loops

    for(i=0; i<1000; i++)
        for(j=0; j<1000; j++)
    Mergesort(low, high);
    e=clock();

    cpu_exe_t = (double)(e-s)/CLK_TCK;
    printf("\nThe sorted array is: \n");

    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n CPU execution time is %lf", cpu_exe_t);
    return 0;
}
Mergesort(int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;
        Mergesort (low, mid);
        Mergesort (mid+1, high);
        Merge(low, mid, high);
    }
}
Merge(int low, int mid, int high)
{
    int i=low, j=mid+1, k=low;
    while(i<mid && j<=high)
    {
        if(A[i] <= A[j])
        {
            B[k] = A[i];
            i++;
        }
        else
        {
            B[k] = A[j];
            j++;
        }
        k++;
    }

    while(i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }

    while(j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }

    for(i=low; i<=high; i++)
    {
        A[i] = B[i];
    }
}