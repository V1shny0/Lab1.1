#include <stdio.h>
#include <stdlib.h>
#define Name "Maxim"
#define LastName "Vyshnevetsky"
#define Faculty "RTF"
#define GroupName "Ri-61"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main()
{
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

    printf("%s %s %s %s", Name, LastName, Faculty, GroupName);
    printf("\nEnter following data.\n");

    printf("Enter semestr:");
    scanf("%u", &semestr);

    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    printf("Enter grade #1: ");
    scanf("%d", &grade1);

    printf("Enter grade #2:");
    scanf("%d", &grade2);

    printf("Enter grade #3:");
    scanf("%d", &grade3);

    printf("Enter grade #4:");
    scanf("%d", &grade4);

    printf("Enter grade #5:");
    scanf("%d", &grade5);

    printf("Enter grade #6:");
    scanf("%d", &grade6);

    printf("Enter your age: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1 + grade2 + grade3 + grade4 + grade5 +grade6) / 6;

    system("cls");

    printf("\n%s", University);
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

    return 0;
}
