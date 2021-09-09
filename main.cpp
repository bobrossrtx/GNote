#include <iostream>
#include "File.h"

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;

    File *file = new File("gnote.dat", "./");
    std::string file_name = file->get_file();
    std::cout << "Writing to " << file_name << std::endl;

    file->create();
    file->write("Hello World");

    return 0;
}
