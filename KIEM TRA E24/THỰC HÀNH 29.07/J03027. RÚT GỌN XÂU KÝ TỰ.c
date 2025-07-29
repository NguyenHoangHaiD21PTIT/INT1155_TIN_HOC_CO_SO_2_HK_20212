#include <stdio.h>
#include <string.h>
int main() {
    char s[10005]; scanf("%s", s);
    int n = strlen(s);
    char stack[10005]; int top = -1;
    // Duyệt từ cuối chuỗi về đầu
    for (int i = n - 1; i >= 0; i--) {
        if (top == -1) stack[++top] = s[i];
        else if (stack[top] == s[i]) top--; // loại bỏ cặp trùng
        else stack[++top] = s[i];
    }
    if (top == -1) printf("Empty String\n");
    else {
        while (top >= 0) printf("%c", stack[top--]);
        printf("\n");
    }
}
