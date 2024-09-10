#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <limits.h>
#include <time.h>

#define NAME 15
#define MAX_S 5

//       ---------------5-----------------

struct student {
    char Name[NAME];
    char Name2[NAME];
    int Age, Nomzach;
}students[MAX_S] = {
    {"����", "������", 18, 12345},
    {"������", "��������", 19, 12346},
    {"�������", "�������", 18, 12347},
    {"����", "�������", 19, 12348},
    {"������", "������", 19, 12349}
};

void searchByName(struct student students[], int c, const char* Name, const char* Name2) {
    int found = 0;
    for (int i = 0; i < c; i++) {
        if (strcmp(students[i].Name, Name) == 0 && strcmp(students[i].Name2, Name2) == 0) {
            printf("��� �������: %s %s. ��� �������: %d. ����� �������: %d\n", students[i].Name, students[i].Name2, students[i].Age, students[i].Nomzach);
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
        if (students[i].Age == age) {
            printf("��� �������: %s %s. ��� �������: %d. ����� �������: %d\n", students[i].Name, students[i].Name2, students[i].Age, students[i].Nomzach);
            found = 1;
        }
    }
    if (!found) {
        printf("�������� � ����� ��������� ��� :/\n");
    }
}

void searchByNomzach(struct student students[], int c, int Nomzach) {
    int found = 0;
    for (int i = 0; i < c; i++) {
        if (students[i].Nomzach == Nomzach) {
            printf("��� �������: %s %s. ��� �������: %d. ����� �������: %d\n", students[i].Name, students[i].Name2, students[i].Age, students[i].Nomzach);
            found = 1;
        }
    }
    if (!found) {
        printf("�������� � ����� ��������� ��� :/\n");
    }
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int c = MAX_S;

    //for (int i = 0; i < c; i++) {
    //    printf("��� �������� %d: ", i + 1);
    //    scanf("%s", students[i].Name);
    //    printf("������� �������� %d: ", i + 1);
    //    scanf("%s", students[i].Name2);
    //    printf("������� �������� %d: ", i + 1);
    //    scanf("%d", &students[i].Age);
    //    printf("����� ������� �������� %d: ", i + 1);
    //    scanf("%d", &students[i].Nomzach);
    //}

    for (int i = 0; i < c; i++) {
        printf("�������: %s %s. �������: %d. ����� �������: %d.\n", students[i].Name, students[i].Name2, students[i].Age, students[i].Nomzach);
    }

    char choice;
    do {
        printf("\n�������� ����� ������:\n");
        printf("1. ����� �� ����� � �������\n");
        printf("2. ����� �� ��������\n");
        printf("3. ����� �� ������ �������\n");
        printf("4. �����\n");
        printf("��� �����: ");
        scanf("%s", &choice);


        switch (choice) {
        case '1': {
            char search1[NAME];
            char search2[NAME];
            printf("������� ��� ��� ������: ");
            scanf("%s", search1);
            printf("������� ������� ��� ������: ");
            scanf("%s", search2);
            searchByName(students, c, search1, search2);
            break;
        }
        case '2': {
            int searchAge;
            printf("������� ������� ��� ������: ");
            scanf("%d", &searchAge);
            searchByAge(students, c, searchAge);
            break;
        }
        case '3': {
            int searchNomzach;
            printf("������� ����� ������� ��� ������: ");
            scanf("%d", &searchNomzach);
            searchByNomzach(students, c, searchNomzach);
            break;
        }
        case '4':
            printf("����� �� ���������.\n");
            break;
        default:
            printf("�������� �����. ���������� �����.\n");
            break;
        }
    } while (choice != '4');

    return 0;
}