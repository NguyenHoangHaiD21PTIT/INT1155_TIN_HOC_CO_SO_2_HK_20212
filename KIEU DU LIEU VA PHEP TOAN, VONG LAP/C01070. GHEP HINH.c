#include <stdio.h>
#include <math.h>

int ktcp(int a) { // Kiểm tra xem 1 số có phải số chính phương không
    int b = sqrt(a);
    if (b * b == a) return b;
    return 0;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int s = a * b + c * d + e * f;
    // Nếu tổng diện tích không phải số chính phương thì không ghép được
    int y = ktcp(s);
    if (y == 0) {
        printf("NO\n");
    } else {
        if (a > b) swap(&a, &b);
        if (c > d) swap(&c, &d);
        if (e > f) swap(&e, &f);
        
        if (b == d && d == f && f == y) {
            printf("YES\n");
        } else { // Sắp xếp theo chiều dài tăng dần
            if (d > b) { swap(&a, &c); swap(&b, &d); }
            if (f > b) { swap(&a, &e); swap(&b, &f); }
            if (b == y) {
                if (c + e == y || d + f == y || c + f == y || d + e == y) {
                    printf("YES\n");
                } else {
                    printf("NO\n");
                }
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}

