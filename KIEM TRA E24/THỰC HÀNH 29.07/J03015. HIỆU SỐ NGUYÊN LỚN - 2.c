#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s[]) {
    int l = 0, r = strlen(s) - 1;
    while (l < r) {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        l++; r--;
    }
}

// So sánh chuỗi số X < Y?
int isSmaller(char X[], char Y[]) {
    int lenX = strlen(X), lenY = strlen(Y);
    if (lenX != lenY) return lenX < lenY;
    return strcmp(X, Y) < 0;
}

void remov(char *s) {
    int len = strlen(s);
    int i = 0;
    while (i < len - 1 && s[i] == '0') i++;
    if (i > 0) memmove(s, s + i, len - i + 1); // Dịch chuỗi sang trái
}

void tru(char X[], char Y[]) {
    // Lưu trữ kết quả hiệu vào res
    char res[10005];
    int muon = 0;
    // Xoá số 0 ở đầu
    remov(X); remov(Y);
    // Đảm bảo lấy số lớn trừ số bé (X < Y thì hoán đổi X và Y)
    int doiDau = 0;
    if (isSmaller(X, Y)) {
        doiDau = 1;
        char tmp[10005];
        strcpy(tmp, X);
        strcpy(X, Y);
        strcpy(Y, tmp);
    }
    reverse(X); reverse(Y);
    //Thêm số 0 vào sau số bé hơn (đã đảo) để chuẩn hoá độ dài
    int lenX = strlen(X), lenY = strlen(Y);
    while (lenY < lenX) {
        Y[lenY++] = '0';
        Y[lenY] = '\0';
    }
    int pos = 0;
    for (int i = 0; i < lenX; i++) {
        int digitX = X[i] - '0';
        int digitY = Y[i] - '0' + muon;
        if (digitX < digitY) {
            digitX += 10;
            muon = 1;
        } else {
            muon = 0;
        }
        res[pos++] = (digitX - digitY) + '0';
    }
    res[pos] = '\0';
    reverse(res); remov(res);
    if (doiDau) printf("-");
    printf("%s\n", res);
}

int main() {
    char A[10005], B[10005];
    scanf("%s %s", A, B);
    tru(A, B);
    return 0;
}
