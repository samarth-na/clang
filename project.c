#include <stdio.h>

long no1, no2, no3, no4;
char nm1[100], nm2[100], nm3[100], nm4[100];

float output(long inp, long tot);

int main() {
    printf("Enter the name of the first student: ");
    scanf("%s", nm1);
    printf("Enter the number of the first student: ");
    scanf("%ld", &no1);

    printf("Enter the name of the second student: ");
    scanf("%s", nm2);
    printf("Enter the number of the second student: ");
    scanf("%ld", &no2);

    printf("Enter the name of the third student: ");
    scanf("%s", nm3);
    printf("Enter the number of the third student: ");
    scanf("%ld", &no3);

    printf("Enter the name of the fourth student: ");
    scanf("%s", nm4);
    printf("Enter the number of the fourth student: ");
    scanf("%ld", &no4);

    long total = no1 + no2 + no3 + no4;
    printf("Total of all numbers is %ld\n", total);

    printf("Which student's percentage do you want to calculate?\n");
    printf("Press 1 for %s\n", nm1);
    printf("Press 2 for %s\n", nm2);
    printf("Press 3 for %s\n", nm3);
    printf("Press 4 for %s\n", nm4);

    int condition;
    scanf("%d", &condition);
    float result;

    if (condition == 1) {
        result = output(no1, total);
        printf("%ld is %.2f%% of %ld\n", no1, result, total);
    } else if (condition == 2) {
        result = output(no2, total);
        printf("%ld is %.2f%% of %ld\n", no2, result, total);
    } else if (condition == 3) {
        result = output(no3, total);
        printf("%ld is %.2f%% of %ld\n", no3, result, total);
    } else if (condition == 4) {
        result = output(no4, total);
        printf("%ld is %.2f%% of %ld\n", no4, result, total);
    }

    return 0;
}

float output(long inp, long tot) {
    float percent = (inp * 100.0) / tot;
    return percent;
}
