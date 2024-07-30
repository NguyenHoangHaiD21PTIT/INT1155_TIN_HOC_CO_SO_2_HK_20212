#include <stdio.h>
#include <string.h>
#define MAX_NAME_LEN 100
#define MAX_TYPES 70
int main() {
    int n;
    scanf("%d", &n);
    int tong = 0, Max = -1;
    char ans[MAX_NAME_LEN] = "";//Biến lưu con tiến hoá nhiều nhất xuất hiện trước
    for (int i = 0; i < n; i++) {
        char s[MAX_NAME_LEN];
        int k, p;
        scanf("%s", s);
        scanf("%d %d", &k, &p);  
        int soCon = 0; // số con tiến hoá được sau cùng
        while (p >= k) {
            int tmp = p / k; // số con tiến hoá được ban đầu
            soCon += tmp;
            p = p % k + tmp * 2;
            // Vì mỗi lần tiến hoá xong 1 con sẽ thu về thêm 2 viên nữa, cộng dồn với số dư hiện có
        } 
        if (soCon > Max) {
            Max = soCon;
            strcpy(ans, s);
        }
        tong += soCon;
    }
    printf("%d\n%s\n", tong, ans);
}