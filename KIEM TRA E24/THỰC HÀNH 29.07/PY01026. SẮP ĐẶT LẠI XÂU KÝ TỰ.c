#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cmp(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}
int main() {
    int t; scanf("%d", &t);
    getchar(); 
    for (int test = 1; test <= t; test++) {
        char a[1005], b[1005];
        scanf("%s", a); scanf("%s", b);
        int len1 = strlen(a), len2 = strlen(b);
        printf("Test %d: ", test);
        if (len1 != len2) {
            printf("NO\n");
            continue;
        }
        qsort(a, len1, sizeof(char), cmp);
        qsort(b, len2, sizeof(char), cmp);
        if (strcmp(a, b) == 0) printf("YES\n");
        else printf("NO\n");
    }
}
