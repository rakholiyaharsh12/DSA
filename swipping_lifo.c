#include <stdio.h>
#define n 5

int a[n], top = -1 ,b[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (top >= n - 1)
    {
        printf("stack is full....\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
  
}
int insertfirst(int val)
{
   int j,k;
   if(top==-1)
   {
    top++;
    a[top]=val;
   }
   else if(top>=4)
   {
    printf("\nstack is full");
   }
   else{
    top++;
    k=top-1;

    for(int i= top;i>0;i--)
    {
        a[i]=a[k];
        k--;
    }
    a[0]=val;

   }
}
    
// int popend()
// {
//     if (top <= -1)
//     {
//         printf("stack is empty....\n");
//     }
//     else
//     {
//         top--;
//         a[top];
//     }
// }

int main()
{
    // insertend(10);
    // insertend(20);
    // insertend(30);
    // insertend(40);
    // insertend(50);


    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    insertfirst(50);
  

    display();
}