#include<stdio.h>
 
 int main ()
{
    int a;
    printf("enter value :");
    scanf("%d",&a);
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},b=0;

    
     for(int i=0;i< 15;i++)
    {
    if(arr[i]==a)
    {
        b++;
    }
    }
     if(b>0)
    {
        printf("yes it is present");

    }
    else
    {
        printf("no it is not present");
    }
}