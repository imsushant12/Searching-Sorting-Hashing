//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>

int findMax(int A[],int n)
{
    int max = A[0];
    int i;
    for(i=0 ; i < n ; i++)
    {
        if(A[i] > max)
            max = A[i];
    }
    return max;
}
void count_sort(int A[] , int n)
{
    int i,j,max;

    max=findMax(A,n);

    int C[max+1];

    for(i=0;i<max+1;i++)
        C[i]=0;

    for(i=0;i<n;i++)
        C[A[i]]++;

    i=0;j=0;

    while(j<max+1)
    {
        if(C[j]>0)
        {
            A[i++]=j;
            C[j]--;
        }
        else
            j++;
    }
}


int main()
{
    int n,i;

    printf("Enter number of elements of array : ");
    scanf("%d" , &n);

    int a[n];

    printf("Enter elements of array :\n");
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]);

    count_sort(a,n);

    printf("\n\nSorted array is : \n");
    for(i=0 ; i<n ; i++)
        printf("%d " , a[i]);

    return 0;
}


