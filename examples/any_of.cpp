// any-of example

#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char** argv) {

  std::array<int, 7> foo = {0,1,-1,3,-3,5,-5};

  if ( std::any_of(foo.begin(), foo.end(), [](int i){return i<0;}) )
    std::cout << "There are negative elements in the range.\n";

  return 0;
}

