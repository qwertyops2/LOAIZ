#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>
#include <time.h>

#define NAME 15
#define MAX_S 50

//int main() {
//
//
//	//			1 �������
//	
//
//	//int mi = INT_MAX, ma = INT_MIN, k = 0;
//	//int a[10] = { 0 };
//
//	//for (int i = 0; i < 10; i++) {
//	//	a[i] = k;
//	//	k++;
//	//	printf("%d ", a[i]);
//	//}
//	
//	//for (int i = 0; i < 10; i++) {
//	//	if (a[i] < mi) { mi = a[i]; };
//	//	if (a[i] > ma) { ma = a[i]; };
//	//}
//
//	//printf("\n%d", ma - mi);
//	//printf("\n%d", ma);
//	//printf("\n%d", mi);
//
//
//	//			2 �������
//
//	
//	//int mi2 = 0, ma2 = 100, m = 0;
//	//int b[10] = { 0 };
//
//	//srand(time(NULL));
//
//	//for (int i = 0; i < 10; i++) {
//	//	m = mi2 + rand() % (ma2 - mi2 + 1);
//	//	b[i] = m;
//	//	printf("%d ", b[i]);
//	//}	
//
//
//	//			3 �������
//
//
//	//int* c;
//	//int n, z = 0;
//	//printf("������� ������ �������: ");
//	//scanf_s("%d", &n);
//
//	//c = (int*)malloc(n * sizeof(int));
//	//for (int i = 0; i < n; i++) {
//	//	printf("������� %d �� �������: ", i+1);
//	//	scanf_s("%d", &z);
//	//	c[i] = z;
//	//}
//
//	//printf("\n");
//
//	//for (int i = 0; i < n; i++) {
//	//	printf("%d ", c[i]);
//	//}
//
//
//	//			4 �������
//
//
//	int mi3 = 0, ma3 = 5;
//	int sum_str = 0, sum_sto = 0;
//	int h[3][3] = { 0 };
//	srand(time(NULL));
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			h[i][j] = mi3 + rand() % (ma3 - mi3 + 1);
//			printf("%d\t", h[i][j]);
//		}
//		printf("\n");	
//	}	
//
//	for (int i = 0; i < 3; i++) {
//		sum_str = 0;
//		sum_sto = 0;
//		for (int j = 0; j < 3; j++) {
//			sum_str += h[i][j];
//			sum_sto += h[j][i];
//		}
//		printf("Sum %d str i sto: %d i %d\n", i+1, sum_str, sum_sto);
//	}
//
//	return 0;
//}

//       ---------------5-----------------

struct student {
    char Name[NAME];
    char Name2[NAME];
    int age;
};

void searchByName(struct student students[], int c, const char* Name, const char* Name2) {
    int found = 0;
    for (int i = 0; i < c; i++) {
        if (strcmp(students[i].Name, Name) == 0 && strcmp(students[i].Name2, Name2) == 0) {
            printf("��� �������: %s %s. ��� �������: %d\n", students[i].Name, students[i].Name2, students[i].age);
            found = 1;
        }
    }
    if (!found) {
        printf("������ �������� ��� :/\n");
    }
}

void searchByAge(struct student students[], int c, int age) {
    int found = 0;
    for (int i = 0; i < c; i++) {
        if (students[i].age == age) {
            printf("��� �������: %s %s. ��� �������: %d\n", students[i].Name, students[i].Name2, students[i].age);
            found = 1;
        }
    }
    if (!found) {
        printf("�������� � ����� ��������� ��� :/\n");
    }
}

int main() {

    setlocale(LC_ALL, "Russian");

    struct student students[MAX_S];
    int c = 0;

    printf("���������� ���������: ");
    scanf("%d", &c);
    for (int i = 0; i < c; i++) {
        printf("��� �������� %d: ", i + 1);
        scanf("%s", students[i].Name);
        printf("������� �������� %d: ", i + 1);
        scanf("%s", students[i].Name2);
        printf("������� �������� %d: ", i + 1);
        scanf("%d", &students[i].age);
    }

    int choice;
    do {
        printf("\n�������� ����� ������:\n");
        printf("1. ����� �� ����� � �������\n");
        printf("2. ����� �� ��������\n");
        printf("3. �����\n");
        printf("��� �����: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            char search1[NAME];
            char search2[NAME];
            printf("������� ��� ��� ������: ");
            scanf("%s", search1);
            printf("������� ������� ��� ������: ");
            scanf("%s", search2);
            searchByName(students, c, search1, search2);
            break;
        }
        case 2: {
            int searchAge;
            printf("������� ������� ��� ������: ");
            scanf("%d", &searchAge);
            searchByAge(students, c, searchAge);
            break;
        }
        case 3:
            printf("����� �� ���������.\n");
            break;
        default:
            printf("�������� �����. ���������� �����.\n");
        }
    } while (choice != 3);

    return 0;
}