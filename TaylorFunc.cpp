#include <math.h>
#include "Header.h"


float TaylorFunc(double x, int N) {
    double c;
    float y;
     
    y = 0;
    c = x;
    for (int n = 0; n < N; n++)
    {
        c = pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
        y = y + c;
    }

    return y;
}