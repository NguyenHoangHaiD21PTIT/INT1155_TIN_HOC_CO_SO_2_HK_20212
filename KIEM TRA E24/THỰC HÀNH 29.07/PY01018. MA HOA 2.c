#include <stdio.h>
#include <string.h>
char p[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
// Hàm ánh xạ ký tự về chỉ số tương ứng
int ma(char s) {
    if (s >= 'A' && s <= 'Z') return s - 'A';
    else if (s == '_') return 26;
    else return 27;
}
int main() {
    while (1) {
        int k; char s[105];
        scanf("%d", &k);
        if (k == 0) break;
        scanf("%s", s);
        int len = strlen(s);
        char res[105];
        for (int i = 0; i < len; i++) {
            int index = (ma(s[i]) + k) % 28;
            res[len - 1 - i] = p[index]; 
        }
        res[len] = '\0'; 
        printf("%s\n", res);
    }
}
