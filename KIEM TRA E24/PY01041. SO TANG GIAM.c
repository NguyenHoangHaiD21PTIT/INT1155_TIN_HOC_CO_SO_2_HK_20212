#include <stdio.h>
#include <string.h>

int check(char s[]) {
    int cnt1 = 0, cnt2 = 0, last_1 = -1;
    int length = strlen(s);
    if (length < 3) return 0; 
    for (int i = 1; i < length; i++) {
        if (s[i] > s[i-1]) cnt1++;
        else {
            if (s[i] == s[i-1]) return 0;  
            else {
                if (cnt1 == 0) return 0; 
                else {
                    last_1 = i;
                    break;
                }
            }
        }
    }
    if (cnt1 == 0) return 0;  
    for (int i = last_1; i < length; i++) {
        if (s[i] < s[i-1]) cnt2++;
        else {
            if (s[i] == s[i-1]) return 0; 
            else return 0; 
        }
    }
    if (cnt2 == 0) return 0;
    return 1;  
}

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        char s[100];  
        scanf("%s", s);  
        if (check(s)) printf("YES\n");
        else printf("NO\n");
    }
}

