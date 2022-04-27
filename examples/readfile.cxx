// reading a text file
#include <iostream>
#include <fstream>
#include <string>
extern "C"{
#include <string.h>
}

using namespace std;

int main (int argc, char** argv) {
  if(argc < 2)
  {
    std::cout << "Usage:  readfile <filename>" << std::endl;
    std::exit(-1);
  }

  string line;
  char* key;
  ifstream myfile (argv[1]);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
       key = strtok(line, "=")
       cout << line << '\t' << key << std::endl;
    }
    myfile.close();
  }

  else std::cout << "Unable to open file " << argv[1] << std::endl; 

  return 0;
}
