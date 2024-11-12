#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        int hang, cot, k;
        scanf("%d %d %d", &hang, &cot, &k);  
        int a[hang][cot];
        for (int i = 0; i < hang; i++) {
            for (int j = 0; j < cot; j++) scanf("%d", &a[i][j]);
        }
        for (int i = 0; i < hang; i++) {
            for (int j = i + 1; j < hang; j++) {
                if (a[i][k - 1] > a[j][k - 1]) {
                    for (int l = 0; l < cot; l++) {
                        int temp = a[i][l];
                        a[i][l] = a[j][l];
                        a[j][l] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < hang; i++) {
            for (int j = 0; j < cot; j++) printf("%d ", a[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}
