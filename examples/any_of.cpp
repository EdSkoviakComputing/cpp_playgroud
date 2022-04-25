// any-of example

#include <iostream>
#include <algorithm>
#include <array>

int main(int argc, char** argv) {

  std::array<int, 7> foo = {0,1,-1,3,-3,5,-5};
  std::array<std::string, 3> bar = {"un", "deux", "trois"};
  
  if ( std::any_of(foo.begin(), foo.end(), [](int i){return i<-6;}) )
    std::cout << "There are negative elements in the range.\n";
  std::string test1 = "un";
  std::string test2 = "quatre";

  std::cout << "Test 1:\n---\n";
  if ( std::any_of(bar.begin(), bar.end(),
    [test1](std::string s){return s == test1; }))
    std::cout << test1 << " in bar\n";

  std::cout << "Test 2:\n---\n";
  if ( std::any_of(bar.begin(), bar.end(),
    [test2](std::string s){return s == test2; }))
    std::cout << test2 << " in bar\n";

  return 0;
}

