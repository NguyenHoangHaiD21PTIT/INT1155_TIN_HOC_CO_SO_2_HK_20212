#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char id[50];
    char ten[100];
    int tc;
} MonHoc;

int cmp(const void *a, const void *b) {
    MonHoc *monhocA = (MonHoc *)a;
    MonHoc *monhocB = (MonHoc *)b;
    return strcmp(monhocA->ten, monhocB->ten);
}

int main() {
    int n;
    scanf("%d", &n);
    MonHoc a[n]; 
    for(int i = 0; i < n; i++) {
        getchar();  
        fgets(a[i].id, sizeof(a[i].id), stdin);
        a[i].id[strcspn(a[i].id, "\n")] = 0;
        fgets(a[i].ten, sizeof(a[i].ten), stdin);
        a[i].ten[strcspn(a[i].ten, "\n")] = 0; 
        scanf("%d", &a[i].tc);
    }
    qsort(a, n, sizeof(MonHoc), compareMonHoc);
    for(int i = 0; i < n; i++) printf("%s %s %d\n", a[i].id, a[i].ten, a[i].tc);
}
/*
2
INT1155
Tin hoc co so 2
2
SKD1103
Ky nang tao lap Van ban
1 */
