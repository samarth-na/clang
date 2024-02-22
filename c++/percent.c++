#include <iostream>
int math, english, physics, history, eco;
int main() {

  std::cout << "enter math marks" << std::endl;
  std::cin >> math;
  std::cout << "enter english marks" << std::endl;
  std::cin >> english;
  std::cout << "enter physics marks" << std::endl;
  std::cin >> physics;
  std::cout << "enter history marks" << std::endl;
  std::cin >> history;
  std::cout << "enter eco marks" << std::endl;
  std::cin >> eco;
  int total;
  total = math + english + history + eco + physics;
  std::cout << "you got  marks total " << total << std::endl;
  std::cout << "do you want the percentage \n " << std::endl;

  std::cout << "press y for yes n for no" << std::endl;
  char ans;
  int exam_mark;
  std::cin >> ans;
  if (ans == 'y') {
    std::cout << "enter total marks of exam" << std::endl;
    std::cin >> exam_mark;
    int percentage;
    percentage = ((total / 5) * 100) / exam_mark;
    std::cout << percentage << "%" << std::endl;
  }
}
