/* File filereader
 */

#include <fstream>
#include <iostream>
#include "yaml.h"

int main(int argc, char** argv) {
    // get the data from the file, determine the size
    std::fstream fs ("models/Policy.yaml", std::fsteam::in);
    std::filebuf* inbuf = fs.rdbuf();
    std::streamsize size = inbuf->in_avail(); 

    // setup the parser objects
    yaml_parser_t parser;
    yaml_parser_initialize(&parser);

    
}

int read_handler(std::filebuf* data, char* buffer, int size, int length) {

}
