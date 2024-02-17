#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum1, diff1;
    float num3, num4, sum2, diff2;
    scanf("%d" "%d", &num1, &num2);
    scanf("%f" "%f", &num3, &num4);
    sum1 = num1 + num2;
    diff1 = num1 - num2;
    sum2 = num3 + num4;
    diff2 = num3 - num4;
    printf("%d " "%d\n", sum1, diff1);
    printf("%.1f " "%.1f", sum2, diff2);
    
    
    return 0;
}
