#include <iostream>
int main()
{
  for (int i = 0; i <= 10000; i++)
    if (i % 15 == 0) {
      std::cout << "divide by three and five " << std::endl;
    }
    else if (i % 3 == 0) {
      std::cout << "dvide by three" << std::endl;
    }
    else if (i % 5 == 0) {
      std::cout << "divide by five" << std::endl;
    }
    else {
      std::cout << i << std::endl;
    }
}
