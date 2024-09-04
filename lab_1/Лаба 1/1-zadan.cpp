#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

// лемчьйс мсфмн ядекюрэ й йюфднлс гюдюмхч
// ядекюрэ 5 х ядкеюрэ рюй, врнаш юбрнлюр. явхрюкюяэ ясллю йюфднцнт ярнажю х ярпнйх

int main() {


	//			1 гюдюмхе
	

	//int mi = INT_MAX, ma = INT_MIN, k = 0;
	//int a[10] = { 0 };

	//for (int i = 0; i < 10; i++) {
	//	a[i] = k;
	//	k++;
	//	printf("%d ", a[i]);
	//}
	
	//for (int i = 0; i < 10; i++) {
	//	if (a[i] < mi) { mi = a[i]; };
	//	if (a[i] > ma) { ma = a[i]; };
	//}

	//printf("\n%d", ma - mi);
	//printf("\n%d", ma);
	//printf("\n%d", mi);


	//			2 гюдюмхе

	
	//int mi2 = 0, ma2 = 100, m = 0;
	//int b[10] = { 0 };

	//srand(time(NULL));

	//for (int i = 0; i < 10; i++) {
	//	m = mi2 + rand() % (ma2 - mi2 + 1);
	//	b[i] = m;
	//	printf("%d ", b[i]);
	//}	


	//			3 гюдюмхе


	//int* c;
	//int n, z = 0;
	//printf("бБЕДХРЕ ПЮГЛЕП ЛЮЯЯХБЮ: ");
	//scanf_s("%d", &n);

	//c = (int*)malloc(n * sizeof(int));
	//for (int i = 0; i < n; i++) {
	//	printf("бБЕДХРЕ %d ЩК ЛЮЯЯХБЮ: ", i+1);
	//	scanf_s("%d", &z);
	//	c[i] = z;
	//}

	//printf("\n");

	//for (int i = 0; i < n; i++) {
	//	printf("%d ", c[i]);
	//}


	//			4 гюдюмхе


	int mi3 = 0, ma3 = 5;
	int sum_str = 0, sum_sto = 0;
	int h[3][3] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			h[i][j] = mi3 + rand() % (ma3 - mi3 + 1);
			printf("%d\t", h[i][j]);
		}
		printf("\n");	
	}	

	for (int i = 0; i < 3; i++) {
		sum_str = 0;
		sum_sto = 0;
		for (int j = 0; j < 3; j++) {
			sum_str += h[i][j];
			sum_sto += h[j][i];
		}
		printf("Sum %d str i sto: %d i %d\n", i+1, sum_str, sum_sto);
	}

	return 0;
}