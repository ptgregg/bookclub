// /*
// *comment pairs /*  /* cannot nest
// *"cannot nest" is considered source code
// * as is rest
// */
#include <iostream>

int main()
{
  std::cout << /*  "*/" /* " /*" */ << std::endl;
  return 0;
}
