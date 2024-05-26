#include <stdio.h>
#include <stdlib.h>

typedef struct str {
    int value;
    struct str *next;
} str;

typedef struct linkedlist {
    str START;
    str END;
    int length;
} linkedlist;
linkedlist list;

int main() {

    linkedlist list = {{0, NULL}, {0, NULL}, 0};

    list.START.next = &list.END;

    printf("   {%p}    \n", &list.START.next);
    printf("  {%d}   {%p}    {%p}\n", list.START.value, &list.START,
           list.START.next);
    printf("  {%d}   {%p}    {%p}\n", list.START.value, &list.START,
           list.START.next);
}
