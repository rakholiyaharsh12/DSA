#include <stdio.h>

int search (int x, int min , int max)
{
    int mid,z=0,y=0;
    mid = min + (max - min)/2;

    if(x==mid)
    {
        return 1;
    }
    else if(x>mid)
    {
        if(y>10)
        {
            return 0;
        }
        min = mid;
        y++;
        return search(x,min,max);
    }
    else if(x<mid)
    {
        if(z>10)
        {
            return 0;
        }
        max=mid;
        z++;
        return search (x,min,max);
    }
    else{
        return 0;
    }
}
int  main()
{
    
    int a;
    int i;
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},b=0;

     for(int j=0;j< i;j++)
}