#include <stdio.h>

 int main()
 {
    int a,b,c;
     printf("Enter a value: ");
     scanf("%d",&a);
     printf("Enter b value: ");
     scanf("%d",&b);
     printf("Enter c value: ");
     scanf("%d",&c);

     a>b && a>c?printf("A is big "):(b>c?printf("b is big"):printf("c is big"));
 }
