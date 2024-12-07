#include <stdio.h>
#include <math.h>
int main() {
    int a, k, n;
    scanf("%d %d %d", &a, &k, &n);
    int Min, Max;
    if (a % k == 0) Min = a / k + 1;
    else Min = (int)ceil((double)a / k);
    Max = n / k;
    if (Min > Max) printf("-1\n");
    else {
        for (int i = Min; i <= Max; i++) printf("%d ", i * k - a);
    }
}
/*
a + b<=N, a + b = pK --> 0< b <= N - a, b = pK - a --> 0 < pK - a, pK - a <= N - a 
-->pK > a, pK <=N --> p > a/K, p<=N/K --> a/K < p <= N/K
*/

