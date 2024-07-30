#include <stdio.h>
#include <string.h>

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break;
        char S1[201], S2[201], S[402];
        scanf("%s %s %s", S1, S2, S);
        
        int dem = 0;
        int kt = 1; // kt: 1 là có thể tìm được
        while (1) {
            if (kt == 0) break;
            dem++;
            if (dem > 50) {//Quá 50 bước lặp thì không tìm được
                kt = 0;
                break;
            }
			//Tạo xâu theo yêu cầu: Lấy 1 ký tự S2 rồi đến S1, cứ thế 
            char Stg[402];
            for (int i = 0; i < n; i++) {
                Stg[2 * i] = S2[i];
                Stg[2 * i + 1] = S1[i];
            }
            Stg[2 * n] = '\0'; // Kết thúc chuỗi
            
			//So sánh với xâu mục tiêu
            if (strcmp(Stg, S) == 0) {
                kt = 1;
                break;
            } else {
                for (int i = 0; i < n; i++) {
                    S1[i] = Stg[i];
                    S2[i] = Stg[i + n];
                }
            }
        }
        
        if (kt == 0) printf("-1\n");
        else printf("%d\n", dem);
    }
}
