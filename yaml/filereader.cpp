/* File filereader
 */

#include <fstream>
#include <iostream>

int main(int argc, char** argv) {
    std::fstream fs ("models/Policy.yaml", std::fstream::in);

    std::filebuf* inbuf = fs.rdbuf();
    char c; 
    while ( (c = inbuf->sbumpc()) != EOF ) {
        std::cout << c;
    }
    std::cout << "\n";

    fs.close();
}
