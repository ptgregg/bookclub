#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item total; //variable to hod data for the next transaction
  // read in the first transaction and ensure there is data to process
  if (std::cin >> total) {
    Sales_item trans; //variable to hold running sum
    //read and process remaining transactions
    while (std::cin >> trans) {
      //if we are still processing the same book
      if (total.isbn() == trans.isbn())
	total += trans; // update running total
      else {
	// print results for previous book
	std::cout << total << std::endl;
	total = trans; //total now refers to next book
      }
    }
    std::cout << total << std::endl; //print last transaction
  } else {
    // warn user there is no input
    std::cerr << "No data?!" << std::endl;
    return -1; //indicate failure
  }
  return 0;
}
