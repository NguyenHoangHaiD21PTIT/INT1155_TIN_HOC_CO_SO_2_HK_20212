#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    int t;
    scanf("%d", &t);  
    for (int i = 0; i < t; i++) {
        char a[1001], b[1001];
        scanf("%s %s", a, b);  
        qsort(a, strlen(a), sizeof(char), compare);
        qsort(b, strlen(b), sizeof(char), compare);
		printf("Test %d: ", i + 1);
        if (strcmp(a, b) == 0) printf("YES\n");
        else printf("NO\n");
    }
}

