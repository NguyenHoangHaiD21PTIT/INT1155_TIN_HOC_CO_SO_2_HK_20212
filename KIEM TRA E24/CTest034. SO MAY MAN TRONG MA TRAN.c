#include <stdio.h>
int main() {
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    int a[100][100];
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) scanf("%d", &a[i][j]);
    }
    int Min = 1e9, Max = -1e9;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] < Min) Min = a[i][j];
            if (a[i][j] > Max) Max = a[i][j];
        }
    }
    int res = Max - Min, found = 0;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == res) {
                if (!found) {
                    printf("%d\n", res);
                    found = 1;
                }
                printf("Vi tri [%d][%d]\n", i, j);
            }
        }
    }
    if (!found) printf("NOT FOUND");
}
