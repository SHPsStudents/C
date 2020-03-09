#include<stdio.h>
int main()
{
    int i=0;
    while (i<5)
    {
        printf("%d", i++); // Increases the value of i after execution of instruction.
    }
    printf("\n");
    i=0;
    while (i<5)
    {
        printf("%d", ++i);// Increases the value of i during execution of instruction.
    }
}
