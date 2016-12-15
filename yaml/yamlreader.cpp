/* File filereader
 */

#include <fstream>
#include <iostream>
#include <memory>
#include <algorithm>
#include "yaml.h"
#include "yamlreader.h"

int main(int argc, char** argv) {
    // get the data from the file, determine the size
    std::fstream fs ("models/Policy.yaml", std::fstream::in);
    std::filebuf* inbuf = fs.rdbuf();
    std::streamsize size = inbuf->in_avail(); 

    std::cout << "Policy.yaml has " << size << " bytes...\n";

    // setup temporary buffer and load the data for testing
    std::pair<char*, std::ptrdiff_t> result = std::get_temporary_buffer<char>(size);
    int* bytesRead;
    read_handler(inbuf, result.first, result.second, bytesRead);
    std::cout << "read_handler read " << bytesRead << " bytes...\n";

    // setup the parser objects
    yaml_parser_t parser;
    yaml_parser_initialize(&parser);

  
    // cleanup
    std::return_temporary_buffer(result.first);
    fs.close();
    
}

int read_handler(std::filebuf* data, char* buffer, int size, int* length) {
    // check to see if size bytes available in stream
    if (size > data->in_avail()) {
        // reset size
        size = data->in_avail();
    }

    int bRead = data->sgetn(buffer, size);
    //std::copy(&bRead, &bRead+1, length);
    return 0;
}
