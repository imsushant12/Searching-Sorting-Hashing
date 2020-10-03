//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int a[] , int n)
{
    int round,i,temp;
    for(round=1 ; round <= n-1 ; round++)
    {
        for(i=0 ; i <= (n-1-round) ; i++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
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

