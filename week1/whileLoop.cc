#include <iostream>
int main()
{
  std::cout << "please enter the starting number" << std::endl;
  int start = 0, end = 0;
  std::cin >> start;
  std::cout << "please enter the end number" << std::endl;
  std::cin >> end;
  int sum = 0, val = start;
  // keep executing the while as long as val is less than or equal to 10
  while (val<=end) {
    sum +=val;
    ++val;
  }
  std::cout << "The sum of " << start << "  to " << end << " inclusive is " << sum << std::endl;
  return 0;
}
