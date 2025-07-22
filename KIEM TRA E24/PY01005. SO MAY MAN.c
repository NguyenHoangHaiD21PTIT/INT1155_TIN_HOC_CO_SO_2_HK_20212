#include <stdio.h>
int main() {
    char a[1005]; 
    scanf("%s", a);
    int s = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '4' || a[i] == '7') s++;
    }
    if (s == 4 || s == 7) printf("YES\n");
    else  printf("NO\n");
}
