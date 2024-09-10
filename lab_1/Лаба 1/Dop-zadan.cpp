#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <limits.h>
#include <time.h>

int main() {
    system("chcp 1251");
    system("cls");


    int mi3 = 0, ma3 = 50;
    int sum_str = 0, sum_sto = 0;
    int n, m, k;
    printf("Введите размер массива через пробел: ");
    scanf_s("%d %d", &n, &m);
    int giga = n * m;
    int** h = (int**)malloc(n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        h[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            h[i][j] = mi3 + rand() % (ma3 - mi3 + 1);
            printf("%d\t", h[i][j]);
        }
        printf("\n");
    }

    int u = 0, f= 0;
    int ma = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (h[i][j] % 3 == 0 && h[i][j] != 0) {
                f = 1;
                if (h[i][j] > ma) { ma = h[i][j]; }
                u++;
            }
        }

    }
    if (f) { printf("\nМаксимальное кратное 3: %d\nКоличество кратных 3: %d\n\n", ma, u); }
    else { printf("Чисел кратных 3 нет"); }
    
    return 0;
}