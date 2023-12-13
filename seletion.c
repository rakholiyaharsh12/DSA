#include <stdio.h>

int a[10] = {12,34,45,56,67,23,24,90,78,65};

int main()
{
    int i, s, m = 0;

    printf("12,34,45,56,67,23,24,90,78,65 \n \n");

    for (i = 0; i < 10; i++)
    {

        a[i] % 50;

        for (s = 0; s < 9; s++)
        {
            if (a[s] > a[i])
            {
                m = a[i];
                a[i] = a[s];
                a[s] = m;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
  return 0;
}
