#include <stdio.h>

void withTypedef() {

    typedef struct {
        int age;
        int bday;
        int rollno;
    } Person;

    Person adi;

    adi.age = 18;
    adi.bday = 12;
    adi.rollno = 0006;

    Person *ptr = &adi;
    printf("%d", ptr->bday);
}

void noTypedef() {

    struct Person {
        int age;
        int bday;
        int rollno;
    } Person;

    struct Person adi;

    adi.age = 18;
    adi.bday = 12;
    adi.rollno = 0006;

    struct Person *ptr = &adi;
    printf("%d", ptr->bday);
}
