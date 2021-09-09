#ifndef GNOTE_FILE_H
#define GNOTE_FILE_H
#include <iostream>
#include <fstream>
#include <cstring>

class File {
private:
    int t_created;
    int t_updated;
    std::string t_name;
    std::string t_location;

public:
    File(std::string name, std::string location);

    std::string get_file() const;
    void write(std::string message) const;
    void create();

    std::string full_location;
};


#endif //GNOTE_FILE_H
