#include <stdio.h>

int cel, fer;
int ctf(int cel, int fer);

int ftc(int cel, int fer);
int main() {
    printf("what you want to convert to \n");
    printf("type 'c' for ferenite to celcius\n");
    printf("type 'f' for celcius to ferenite\n");
    printf("=  ");

    char input;

    scanf("%c", &input);

    if (input == 'c') {
        printf("enter the ferenite value =");
        scanf("%d", &fer);
        cel = (fer - 32) / 1.8;
        printf("%d ferenite is %d celcius", fer, cel);

    } else if (input == 'f') {
        printf("enter the celcius value =");
        scanf("%d", &cel);
        fer = (cel * 1.8) + 32;
        printf("%d celcius is %d ferenite", cel, fer);
    }
    return 0;
}
int nothing() { return 0; }
