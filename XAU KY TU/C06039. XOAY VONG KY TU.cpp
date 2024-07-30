#include <stdio.h>
#include <string.h>

#define MAX_LEN 50
#define MAX_N 50

int rotate(char* a, char* b) {//b là xâu chuẩn, a là xâu phải theo b
    int len = strlen(a);
    if (len != strlen(b)) return -1;//2 xâu độ dài khác nhau không bao giờ xoay được cả
    char s[MAX_LEN + 1];
    strcpy(s, a);
    for (int i = 0; i <= len; i++) {
        if (strcmp(s, b) == 0) return i;
        //Đưa ký tự đầu xuống cuối
        char firstChar = s[0];
        for (int j = 0; j < len - 1; j++) {
            s[j] = s[j + 1];
        }
        s[len - 1] = firstChar;
        s[len] = '\0'; 
    }
    return -1;
}

int soBuoc(char arr[MAX_N][MAX_LEN + 1], int n) {//xét trong mảng các string
    int ans = 1000000;
    for (int i = 0; i < n; i++) {
        char* x = arr[i];//Lấy xâu x làm chuẩn, tất cả các xâu khác phải theo xâu này
        int cnt = 0;//Số bước xoay vòng nếu lấy xâu x làm chuẩn
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int tmp = rotate(arr[j], x);
                if (tmp == -1) return -1;
                cnt += tmp;
            }
        }
        if (cnt < ans) ans = cnt;
    }
    return ans;
}

int main() {
    int N;
    scanf("%d", &N);
    char arr[MAX_N][MAX_LEN + 1];
    for (int i = 0; i < N; i++) scanf("%s", arr[i]);
    int result = soBuoc(arr, N);
    printf("%d\n", result);
    return 0;
}
