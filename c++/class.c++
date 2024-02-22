#include <iostream>
#include <string>
using std::string, std::endl, std::cin, std::cout;

class person {
  public:
    int age;
    string name;
};

person addnew(string name) {
    int age;

    person newPerson;

    std::cin >> age;

    {
        newPerson.name = name;
        newPerson.age = age;
    }

    return newPerson;
}
int main() {

    person dane;
    addnew("namami");

    dane.age = 19;
    cout << "enter name" << endl;
    cin >> dane.name;
}
