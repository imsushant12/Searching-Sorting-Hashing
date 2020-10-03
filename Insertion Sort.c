//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int a[] , int n)
{
    int i,j,temp;

    for(i=1 ; i<n ; i++)
    {
        j = i-1;
        temp = a[i];

        while(j>=0 && a[j]>temp)             //will swap only when larger element is found
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
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

    insertion_sort(a,n);

    printf("\n\nSorted array is : \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
