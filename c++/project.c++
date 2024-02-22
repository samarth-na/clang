#include "percent.h"
#include <iostream>
#include <string>
using std::string, std::cin, std::cout;

class person {
  public:
    long number;
    double percent;
};
person firsttt, second, theird, fourth, fifth;

long total;
double percent;

int main() {
    cout << "enter the first student number\n";
    cin >> firsttt.number;
    cout << "enter the second student number\n";
    cin >> second.number;
    cout << "enter the theird student number\n";
    cin >> theird.number;
    cout << "enter the fourth student number\n";
    cin >> fourth.number;
    cout << "enter the fifth student number\n";
    cin >> fifth.number;
    ;
    total = firsttt.number + second.number + theird.number + fourth.number +
            fifth.number;
    cout << "total is " << total << "\n";
    output(firsttt.number, total, percent);
    output(second.number, total, percent);
    output(theird.number, total, percent);
    output(fourth.number, total, percent);
    output(fifth.number, total, percent);
    ;
    return 0;
}
