#include <stdio.h>
int main()
{
    int num1, num2, i, gdc;
    printf("\n Enter number num1 and num2 :-");
    scanf("%d %d", &num1, &num2);
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gdc = i;
        }
    }
    printf(" \n gdc of %d and %d is %d", num1, num2, gdc);
    return 0;
}