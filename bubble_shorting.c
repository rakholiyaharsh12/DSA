#include <stdio.h>

int a[10] = {12,23,34,11,76,87,65,54,32,90};

int main()
{
    int i, s, m = 0;

    printf("12,23,34,11,76,87,65,54,32,90 \n \n");

    for (i = 0; i < 10; i++)
    {

        a[i] % 50;

        for (s = 0; s < 9; s++)
        {
            if (a[s] > a[s + 1])
            {
                m = a[s + 1];
                a[s + 1] = a[s];
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
