#include <stdio.h>
#include <string.h>
#define LEN 35    // số ≤ 30 chữ số
#define NMAX 100005

void add(char a[], char b[], char res[]) {
    char x[LEN], y[LEN];
    strcpy(x, a); strcpy(y, b);
    int lx = strlen(x), ly = strlen(y);
    // Đảo ngược
    for (int i = 0; i < lx / 2; i++) {
        char t = x[i]; x[i] = x[lx - 1 - i]; x[lx - 1 - i] = t;
    }
    for (int i = 0; i < ly / 2; i++) {
        char t = y[i]; y[i] = y[ly - 1 - i]; y[ly - 1 - i] = t;
    }
    int lmax = (lx > ly ? lx : ly);
    int c = 0, k = 0;
    char tmp[LEN + 5];
    for (int i = 0; i < lmax; i++) {
        int dx = (i < lx ? x[i] - '0' : 0);
        int dy = (i < ly ? y[i] - '0' : 0);
        int s = dx + dy + c;
        tmp[k++] = (s % 10) + '0';
        c = s / 10;
    }
    if (c) tmp[k++] = c + '0';
    tmp[k] = '\0';
    // Đảo ngược lại
    for (int i = 0; i < k; i++) res[i] = tmp[k - 1 - i];
    res[k] = '\0';
}

int less(char a[], char b[]) {
    int la = strlen(a), lb = strlen(b);
    if (la != lb) return la < lb;
    return strcmp(a, b) < 0;
}

int more(char a[], char b[]) {
    int la = strlen(a), lb = strlen(b);
    if (la != lb) return la > lb;
    return strcmp(a, b) > 0;
}

int main() {
    int n;
    scanf("%d", &n);
    char mn[LEN], mx[LEN], cur[LEN], sum[LEN];
    scanf("%s", cur);
    strcpy(mn, cur); strcpy(mx, cur);
    for (int i = 1; i < n; i++) {
        scanf("%s", cur);
        if (less(cur, mn)) strcpy(mn, cur);
        if (more(cur, mx)) strcpy(mx, cur);
    }
    add(mn, mx, sum);
    printf("%s\n%s\n%s\n", mn, mx, sum);
}
