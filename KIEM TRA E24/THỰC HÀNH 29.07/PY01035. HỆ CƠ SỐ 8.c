#include <stdio.h>
#include <string.h>
int main() {
    char bin[105];
    scanf("%s", bin);
    int len = strlen(bin);
    // Tính số chữ số cần thêm vào đầu chuỗi
    int padding = (3 - (len % 3)) % 3;
    // Tạo chuỗi mới với các số 0 thêm vào đầu
    char fullBin[110];
    int i, j = 0;
    for (i = 0; i < padding; ++i) fullBin[j++] = '0';
    for (i = 0; i < len; ++i) fullBin[j++] = bin[i];
    fullBin[j] = '\0';
    // Bắt đầu chia nhóm 3 và chuyển sang hệ 8
    int newLen = strlen(fullBin);
    for (i = 0; i < newLen; i += 3) {
        int value = (fullBin[i] - '0') * 4 + (fullBin[i + 1] - '0') * 2 + (fullBin[i + 2] - '0');
        printf("%d", value);
    }
}
