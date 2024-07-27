#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    char path = system("pwd");
    printf(" %c\n", path);

    return 0;
}
