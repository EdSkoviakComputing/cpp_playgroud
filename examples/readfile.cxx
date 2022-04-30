// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <regex>

using namespace std;

std::string ltrim(std::string);

int main (int argc, char** argv) {
  // check to see if an input file has been specified
  if(argc < 2)
  {
    std::cout << "Usage:  readfile <filename>" << std::endl;
    std::exit(-1);
  }

  string line;
  string::size_type pos;
  std::map<string, string> config;
  ifstream myfile (argv[1]);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      if(line.size() == 0)
      {
	// empty line
	continue;
      }
      pos = line.find('#', 0);
      if (pos == 0)
      {
        // entire line is comment -- skip
        continue; 
      }
      else if (pos > 0)
      {
        // Trailing comment -- strip
        line = line.substr(0, pos);
      }
      
      // look for the '=' sign	
      pos = line.find('=');
      config[ltrim(line.substr(0,pos))]=ltrim(line.substr(pos+1));
    }
    for(auto& [key, value]: config)
    {
	cout << key << ':' << value  << std::endl;
    }
    myfile.close();
  }
  else std::cout << "Unable to open file " << argv[1] << std::endl; 

  return 0;
}

std::string ltrim_old(std::string in)
{
	std::string::size_type pos;
	pos = in.find(' ');
	if(pos == std::string::npos)
	{
		return in;
	} 
	else if(pos == in.size()) 
	{
	
		//must be empty line
		return std::string("\0");
	}
	else return ltrim_old(in.substr(pos+1));
}

std::string ltrim(std::string in)
{
	std::regex e ("(^\\s*)([^ ]*)");
	return std::regex_replace(in, e, "$2");
}
