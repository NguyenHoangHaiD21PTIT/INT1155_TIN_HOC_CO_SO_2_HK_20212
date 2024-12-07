#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N][N], total = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) scanf("%d", &A[i][j]);
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) total += A[i][j];
    }
    int avg = total / (N * N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) if (A[i][j] > avg) A[i][j] = 0;
    int B[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) B[j][i] = A[i][j];
    }
    int result[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            result[i][j] = 0;
            for (int k = 0; k < N; k++)result[i][j] += A[i][k] * B[k][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) printf("%d ", result[i][j]);
        printf("\n");
    }
}
