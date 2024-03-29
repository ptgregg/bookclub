#include <iostream>
//program to count how many consecutive times each distinct value occurs in an input
int main()
{
  // curVal is the number we're counting; we will read new values into val
  int currVal = 0, val = 0;
  //read first number to ensure we have data to process
  if (std::cin >> currVal) {
    int cnt = 1; //store the count for the current value we are processing
    while (std::cin >> val) { //read in rest of numbers
      if (val == currVal) //if the next number is the same
	++cnt; // add 1 to the count
      else { //if next number is different, print count for previous number
	std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	currVal = val; //put in new value 
	cnt =1; //reset the count
      }
    }
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}
