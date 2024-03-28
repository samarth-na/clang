#include <stdio.h>
long km, mile;
int main() {
    printf("what you want to convert to \n");
    printf("type 'k' for mile to kilimeter\n");
    printf("type 'm' for kilimeter to mile\n");
    printf("=  ");
    char input;

    scanf("%c", &input);
    if (input == 'm') {
        printf("enter the kilimeter value =");
        scanf("%ld", &km);
        mile = km / 1.660934;
        printf("%ld kilimeter is %ld mile", km, mile);
    } else if (input == 'k') {
        printf("enter the mile value =");
        scanf("%ld", &mile);
        km = mile * 1.660934;
        printf("%ld mile is %ld kilimeter", mile, km);
    }
    return 0;
}
