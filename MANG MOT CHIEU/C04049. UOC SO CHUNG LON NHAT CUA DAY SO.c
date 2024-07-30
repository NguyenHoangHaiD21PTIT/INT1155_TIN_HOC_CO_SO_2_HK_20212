#include <stdio.h>

int UCLN(int a, int b) {
    int res;
    while (b != 0) {
        res = a % b;
        a = b;
        b = res;
    }
    return a;
}

int BCNN(int a, int b) {
    return a * b / UCLN(a, b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int b[n + 1];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        b[0] = a[0];
        for (int i = 1; i < n; i++) b[i] = BCNN(a[i], a[i - 1]);
        b[n] = a[n - 1];
        for (int i = 0; i < n + 1; i++) printf("%d ", b[i]);
        printf("\n");
    }
}
/*Giải thích:
Giả sử ta có dãy sau: a0 a1 a2 a3 
Dãy b là: b0 b1 b2 b3 b4 
Theo đề ra ta có: UCLN(b0, b1) = a0 --> b0 = x0.a0, b1 = x1.a0
UCLN(b1, b2) = a1 --> b1 = x2.a1, b2 = x3. a1
Tương tự: b2 = x4.a2, b3 = x5.a2, b3 = x6.a3, b4 = x7. a3

Để dãy B bé nhất thì từng cái b phải bé nhất
b0: Chỉ ràng buộc với mỗi số a0 thôi, nên chọn x0 bé nhất --> x0 = 1 --> b0 = a0
Tương tự b4 cũng vậy, chọn x7 = 1 --> b4 = a3

Xét các số từ b1 đến b3
b1 = x1.a0 = x2.a1. Từ biểu thức ta rút ra b1 chia hết cho a0 và a1. Và b1 nhỏ nhất --> b1 là BCNN(a0, a1) 
Tương tự b2 = x3.a1 = x4.a2 --> b2 = BCNN(a1, a2) v.v...
*/
