//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>

void shell_sort(int a[] , int n)
{
    int i,j,temp,gap;

    for(gap = n/2 ; gap>=1 ; gap=gap/2)
    {
        for(i=gap ; i<n ; i++)
        {
            temp = a[i];
            j=i-gap;

            while(j>=0 && a[j]>temp)             //will swap only when larger element is found
            {
                a[j+gap] = a[j];
                j=j-gap;
            }
            a[j+gap] = temp;
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

    shell_sort(a,n);

    printf("\n\nSorted array is : \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}

