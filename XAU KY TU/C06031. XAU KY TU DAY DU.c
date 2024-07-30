#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

/*Tư tưởng: Ta sẽ nhét thêm chữ vào trong dãy con tăng dài nhất.
Xem dãy con tăng dài nhất đã chứa bao nhiêu ký tự rồi, thì 26 - độ dài DCTDN là đáp án
Và do DCTDN có thể không cần lien tiếp --> Xoá đi các ký tự thừa của dãy con này đi sẽ ra dãy a đến z
*/
int LIS(char c[]){
    int lis[100] = {};//lis[i] lưu độ dài dãy con tăng dài nhất kết thúc tại chỉ số i
    int n = strlen(c);
    for(int i = 0;i<n;i++) lis[i] = 1;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            if(c[i]> c[j] && lis[i] < lis[j] + 1) lis[i] = lis[j] + 1;
        }
    }
    int res = 0;
    for(int i = 0;i<n;i++){
        if(lis[i]> res) res = lis[i];
    }
    return 26 - res;
}

int main(){
    char c[1000];
    scanf("%s", c);
    printf("%d", LIS(c));
}