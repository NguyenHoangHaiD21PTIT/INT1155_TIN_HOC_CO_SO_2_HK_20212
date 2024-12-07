#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char N[19];  
        scanf("%s", N); 
        qsort(N, strlen(N), sizeof(char), compare);
        int i = 0;
        while (N[i] == '0') i++;
        if (i == strlen(N)) printf("0\n");
        else printf("%s\n", &N[i]);
    }
}

