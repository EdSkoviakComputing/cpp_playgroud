/* File filereader
 */

#include <fstream>
#include <iostream>
#include "yaml.h"

int main(int argc, char** argv) {
/* Get file for input */

    std::fstream fs ("models/Policy.yaml", std::fstream::in);

/*
    std::filebuf* inbuf = fs.rdbuf();
    char c; 
    while ( (c = inbuf->sbumpc()) != EOF ) {
        std::cout << c;
    }
    std::cout << "\n";

    fs.close();
*/
    yaml_parser_t parser;

    yaml_parser_initialize(&parser);

    
}

int read_handler(std::fstream* data, char* buffer, int size, int length) {
    
}
