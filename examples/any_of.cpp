// any-of example

// using strings

#include <iostream>
#include <algorithm>
#include <array>
#include <string>

//bool fail(int i);
int main(int argc, char** argv) {

  std::array<int, 3> scores = {78, 85, 45};

/*
  if (std::any_of(scores.begin(), scores.end(), fail(int i))) {
    std::cout << "At least one failure was recorded\n";
  }
*/
  std::cout << [1](int i){return i == 1;} << "\n";
  return 0;
}

bool fail(int i){
  return i<70;
}
