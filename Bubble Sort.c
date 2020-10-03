//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int a[] , int n)
{
    int i,j;

    for(i=0 ; i < (n-1) ; i++)
    {
        for(j=0 ; j < (n-1-i) ; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n,i;

    printf("Enter number of elements of array : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of array :\n");
    for(i=0 ; i<n ; i++)
        scanf("%d",&a[i]);

    bubble_sort(a,n);

    printf("\n\nSorted array is : \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}

