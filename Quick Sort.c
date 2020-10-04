//by Sushant Gaurav

#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int a[] , int l , int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;

    while(i < j)
    {
        while(a[i] <= pivot)
            i++;

        while(a[j] > pivot)
            j--;

        if(i < j)
            swap(&a[i] , &a[j]);
    }
    swap(&a[l] , &a[j]);

    return (j);
}


void quick_sort(int a[] , int l , int h)
{
    int division;
    if(l < h)
    {
        division = partition(a , l , h);
        quick_sort(a , l , division-1);
        quick_sort(a, division+1 , h);
    }
}

int main()
{
    int n,i,l,h;

    printf("Enter number of elements of array : ");
    scanf("%d" , &n);

    int a[n];

    printf("Enter elements of array :\n");
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]);

    l=0 , h=n-1;
    quick_sort(a,l,h);

    printf("\n\nSorted array is : \n");
    for(i=0 ; i<n ; i++)
        printf("%d " , a[i]);

    return 0;
}


