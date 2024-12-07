#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int cnt(char str[]) {
    bool charSet[26] = {false};
    int ans = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'A';
        if (!charSet[index]) {
            charSet[index] = true;
            ans++;
        }
    }
    return ans;
}

int main() {
    char s[501]; 
    int K;
    scanf("%s %d", s, &K);
    char strings[K][501];
    for (int i = 0; i < K; i++) scanf("%s", strings[i]);
    int ans[K], res = 0;  
    int lenS = strlen(s);
    for (int i = 0; i < K; i++) {
        if (strlen(strings[i]) == lenS && cnt(strings[i]) <= 2) ans[res++] = i + 1;  
    }
    printf("%d\n", res);
    for (int i = 0; i < res; i++) printf("%d ", ans[i]);
}
