#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>
#include <time.h>

int main() {
//    	---------------3-----------------

    int* c;
    int n, z = 0;
    printf("������� ������ �������: ");
    scanf_s("%d", &n);

    c = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
    	printf("������� %d �� �������: ", i+1);
    	scanf_s("%d", &z);
    	c[i] = z;
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
    	printf("%d ", c[i]);
    }
	return 0;
}
