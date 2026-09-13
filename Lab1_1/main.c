//включення бібліотек
#include <stdio.h>
#include <stdlib.h>
//оголошення макросів
#define Name "Maxim"
#define LastName "Vyshnevetsky"
#define Faculty "RTF"
#define GroupName "Ri-61"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

//початок функції
int main()
{
    //оголошення змінних
    unsigned int semestr;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    int grade6;
    double averageGrade;
    unsigned int age;

    //вивід макросів і тексту на екран
    printf("%s %s %s %s", Name, LastName, Faculty, GroupName);
    printf("\nEnter following data.");

    //Вивід тексту та і запис данних до перміної - semestr
    printf("\nEnter semestr:");
    scanf("%u", &semestr);

    //Вивід тексту та і запис данних до перміної - admissionScore
    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    //Вивід тексту та і запис данних до перміної - grade1
    printf("Enter grade #1: ");
    scanf("%d", &grade1);

    //Вивід тексту та і запис данних до перміної - grade2
    printf("Enter grade #2:");
    scanf("%d", &grade2);

    //Вивід тексту та і запис данних до перміної - grade3
    printf("Enter grade #3:");
    scanf("%d", &grade3);

    //Вивід тексту та і запис данних до перміної - grade4
    printf("Enter grade #4:");
    scanf("%d", &grade4);

    //Вивід тексту та і запис данних до перміної - grade5
    printf("Enter grade #5:");
    scanf("%d", &grade5);

    //Вивід тексту та і запис данних до перміної - grade6
    printf("Enter grade #6:");
    scanf("%d", &grade6);

    //Вивід тексту та і запис данних до перміної - age
    printf("Enter your age: ");
    scanf("%u", &age);

    //Разрахунок і запис результату до переміної - averageGrade
    averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5 + grade6) / 6;

    //Очишення екрану командної строки
    system("cls");

    //Вивід макросів - University, Faculty, GroupName, Name, LastName та переміних - age, semestr, admissionScore, averageGrade на екран
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s\n", GroupName);

    printf("\n=*=*=*=*=*=*=*=");
    printf("\n*=*=*=*=*=*=*=*\n");

    printf("\nstudent: %s %s", Name, LastName );
    printf("\nage: %u", age);
    printf("\nsemestr: %u\n", semestr);

    printf("\n=-=-=-=-=-=-=-=");
    printf("\n-=-=-=-=-=-=-=-\n");

    printf("\nadmission score: %.1f", admissionScore);
    printf("\naverage grade = %.2lf", averageGrade);
    printf("\n");

    //Кінець
    return 0;
}
