#include <stdio.h>
#include<stdlib.h>

void merge(int arr[], int low, int mid, int high)
{
    int b[15];
    int i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            b[k++] = arr[i++];
        else
            b[k++] = arr[j++];
    }
    while (i <= mid)
        b[k++] = arr[i++];
    while (j <= high)
        b[k++] = arr[j++];
    for (i = low; i <= high; i++)
        arr[i] = b[i];
}
int mergsort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergsort(arr, low, mid);
        mergsort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[15]={15,2,23,34,54,76,77,89,65,99,55,23,90,4,18}, n = 15, i;
    for (i = 0; i < n; i++)
        arr[i] = rand() % 49 + 1;
    printf("before shorting array is: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    mergsort(arr, 0, n - 1);
    printf("\nafter sorting array is: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
