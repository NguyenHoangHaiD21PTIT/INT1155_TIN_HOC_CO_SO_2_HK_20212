#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int checkin;
    int time;
} Client;

// Sắp xếp các khách hàng theo thứ tự checkin tăng dần, nếu bằng nhau thì theo thời gian tăng dần
int compare(const void *a, const void *b) {
    Client *clientA = (Client *)a;
    Client *clientB = (Client *)b;
    if (clientA->checkin != clientB->checkin) return clientA->checkin - clientB->checkin;
    return clientA->time - clientB->time;
}

int main() {
    int n;
    scanf("%d", &n); 
    Client a[n];
    for (int i = 0; i < n; ++i) scanf("%d %d", &a[i].checkin, &a[i].time);
    qsort(a, n, sizeof(Client), compare);

    int res = 0;
    for (int i = 0; i < n; ++i) {
        // Khách hàng trước làm thủ tục xong trước khi khách hàng tiếp theo đến checkin
        if (res <= a[i].checkin) res = a[i].checkin + a[i].time;
        else res += a[i].time; //Khách hàng sau phải đợi khách trước xong
    }
    printf("%d\n", res);
}
