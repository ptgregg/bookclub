#include <iostream>
int main()
{
  int sum = 0;
  //sum values from 1 to 10 inclusive
  for (int val =-100; val<=100; ++val)
    sum += val;
  std::cout << "the sum of -100 to 100 inclusive is " << sum << std::endl;
  return 0;
}
