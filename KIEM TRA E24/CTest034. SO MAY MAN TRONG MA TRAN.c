#include <stdio.h>
int main() {
    int hang, cot;
    scanf("%d %d", &hang, &cot);
    int a[100][100]; 
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) scanf("%d", &a[i][j]);
    }
    int Min = 20000, Max = -1;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] < Min) Min = a[i][j];
            if (a[i][j] > Max) Max = a[i][j];
        }
    }
    int res = Max - Min;
    int check = 0;
    printf("%d\n", res);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (a[i][j] == res) {
                printf("Vi tri [%d][%d]\n", i, j);
                check = 1;
            }
        }
    }
    if(!check) printf("NOT FOUND");
}
