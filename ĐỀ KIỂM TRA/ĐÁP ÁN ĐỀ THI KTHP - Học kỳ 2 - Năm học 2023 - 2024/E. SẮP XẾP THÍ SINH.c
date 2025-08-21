#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idx, ma;            
    char ma_str[10], name[105], dob[20];     
} SinhVien;

void nhapDong(char *s, int sz) {
    fgets(s, sz, stdin);
    s[strcspn(s, "\n")] = 0;  
}

int cmp(const void *a, const void *b) {
    SinhVien *x = (SinhVien*)a;
    SinhVien *y = (SinhVien*)b;
    if (x->ma != y->ma) return x->ma - y->ma; 
    return x->idx - y->idx; 
}

int main() {
    int n; 
    scanf("%d", &n);
    getchar(); 
    SinhVien a[105];
    for (int i = 0; i < n; i++) {
        nhapDong(a[i].ma_str, sizeof(a[i].ma_str));
        a[i].ma = atoi(a[i].ma_str);
        nhapDong(a[i].name, sizeof(a[i].name));
        nhapDong(a[i].dob, sizeof(a[i].dob));
        a[i].idx = i;
    }
    qsort(a, n, sizeof(SinhVien), cmp);
    for (int i = 0; i < n; i++) printf("TIN%s, %s, %s\n", a[i].ma_str, a[i].name, a[i].dob);
}
