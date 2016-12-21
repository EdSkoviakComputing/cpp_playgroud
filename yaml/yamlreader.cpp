/* File filereader
 */

#include <fstream>
#include <iostream>
#include <memory>
#include <yaml.h>
#include "yamlreader.h"

int main(int argc, char** argv) {
    // get the data from the file, determine the size
    std::fstream fs ("models/Policy.yaml", std::fstream::in);
    std::filebuf* inbuf = fs.rdbuf();
    std::streamsize size = inbuf->in_avail(); 

    std::cout << "Policy.yaml has " << size << " bytes...\n";

    // setup temporary buffer and load the data for testing
    //std::pair<char*, std::ptrdiff_t> result = std::get_temporary_buffer<char>(size);
    //int bytesRead = 1957;
    //read_handler(inbuf, result.first, result.second, &bytesRead);
    //std::cout << "read_handler read " << bytesRead << " bytes...\n";

    // setup the parser objects
    yaml_parser_t parser;
    yaml_parser_initialize(&parser);
    yaml_parser_set_input(&parser, read_handler, inbuf);
   
    // do it!
    
    yaml_event_t event;
    //yaml_parser_state_t state = YAML_PARSE_STREAM_START_STATE;
    int done = 0;
    while ( !done ) {
      if (!yaml_parser_parse(&parser, &event)) {
        std::cout << "Error in parsing\n";
        break;
      }

      std::cout << "---" << event.type << "---\n";
      done = (event.type == YAML_STREAM_END_EVENT); 
    }

    // cleanup
    // std::return_temporary_buffer(result.first);
    yaml_parser_delete(&parser);
    fs.close();
    
}

int read_handler(void* data, unsigned char* buffer, unsigned long int size, unsigned long int* length) {
    // check to see if size bytes available in stream
    if (size > (unsigned long int)((std::filebuf*)data)->in_avail()) {
        // reset size
        size =((std::filebuf*)data)->in_avail();
    }

    int bRead = ((std::filebuf*)data)->sgetn((char*)buffer, size);
    *length = bRead;
    return 0;
}
