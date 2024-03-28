#include <iostream>
void output(long num, long total, float percent) {
    percent = (num * 100.00) / total;
    std::cout << num << " is " << percent << "% "
              << "of " << total << "\n";
}
