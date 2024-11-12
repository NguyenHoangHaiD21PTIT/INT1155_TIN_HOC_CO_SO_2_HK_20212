#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    char *str_a = *(char **)a;
    char *str_b = *(char **)b;
    if (strlen(str_a) != strlen(str_b)) return strlen(str_a) - strlen(str_b);
    return strcmp(str_a, str_b);
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();  
    char *v[500];  
    int count = 0;  
    while (t--) {
        char s[1005];
        fgets(s, sizeof(s), stdin);  
        int len = strlen(s);
        s[len - 1] = '\0';  
        char c[100];  
        int idx = 0;
        for (int i = 0; i < len; i++) {
            if (isdigit(s[i])) {
                c[idx++] = s[i];  
            } else {
                if (idx > 0) {
                    c[idx] = '\0';  
                    int j = 0;
                    while (c[j] == '0' && c[j + 1] != '\0') j++;  
                    if (j > 0) memmove(c, c + j, strlen(c) - j + 1);  
                    v[count] = malloc(strlen(c) + 1);
                    strcpy(v[count++], c);
                    idx = 0;  
                }
            }
        }
    }
    qsort(v, count, sizeof(char *), cmp);
    for (int i = 0; i < count; i++) printf("%s\n", v[i]);
}
