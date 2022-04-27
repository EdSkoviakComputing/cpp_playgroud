// reading a text file
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main (int argc, char** argv) {
  // check to see if an input file has been specified
  if(argc < 2)
  {
    std::cout << "Usage:  readfile <filename>" << std::endl;
    std::exit(-1);
  }

  string line;
  string::size_type pos;
  ifstream myfile (argv[1]);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      pos = line.find('#', 0);
      if (pos == 0)
      {
        // entire line is comment
        continue; 
      }
      else if (pos > 0)
      {
        // Trailing comment strip
        line = line.substr(0, pos);
      } 
      cout << line << std::endl;
    }
    myfile.close();
  }
  else std::cout << "Unable to open file " << argv[1] << std::endl; 

  return 0;
}
