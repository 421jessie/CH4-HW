#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int number[10] = { 5,7,3,4,10,6,9,2,8,1 };
    int i = 0, j = 0;
    int temp = 0;

    for (i = 0; i < 10; i++) 
    {
        for (j = i; j < 10; j++)
        {
            if (number[j] < number[i]) 
            {
                temp = number[j];
                number[j] = number[i];
                number[i] = temp;
            }

        }
        
    }

    for (i = 0; i < 10; i++) 
    {
        printf("%d ", number[i]);
    }

    system("pause");
    return 0;
}