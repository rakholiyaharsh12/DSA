#include <stdio.h>

int main()
{
    int Eng[5],Guj[5],Hin[5],Total[5],Per[5],Grade[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("ENter %d Student Mark :\n",i+1);

        printf("ENter ENglish Mark = ");
        scanf("\n%d",&Eng[i]);

        
        printf("ENter Gujarati Mark = ");
        scanf("\n%d",&Guj[i]);

        
        printf("ENter Hindi Mark = ");
        scanf("\n%d",&Hin[i]);

        Total[i] = Eng[i] + Guj[i] + Hin[i] ;

        Per[i] = Total[i] * 100 / 300;

        printf("\n -------------------------------------------- \n ");
    }
    
 printf("\n No.\tEng\tGuj\tHin\ttotal\tper\tgrade\n");

    for ( i = 0; i < 5; i++)
    {
        printf("\n%d\t,%d\t,%d\t,%d\t,%d\t,%d\t,%d\t",i + 1,Eng[i],Guj[i],Hin[i],Total[i],Per[i],Grade[i]);
    }

    if (Per >= 90)
    {
        printf("Grade A");
    }
    
    
    else if (per < 90 && per )
    {
        /* code */
    }
    
}
   
   

  

