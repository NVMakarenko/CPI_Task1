#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "Header.h"

int main()
{
    float x, y;
    int N;
    printf("Enter x\n");
   // x = 0.98;
    //N = 5.0;
    scanf_s("%f", &x);
    printf("Enter N (number of Taylor series members)\n");
    scanf_s("%i", &N);

    y = TaylorFunc(x, N);

    printf("\n\nResult\n");
    printf("x = %7.4f\ny = %7.4f\nn = %i\n", x, y, N);

    return 0;
}
