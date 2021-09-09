#include "File.h"
#include <utility>

File::File(std::string name, std::string location)
{
    this->t_name = std::move(name);
    this->t_location = std::move(location);
    this->t_created = 0;
    this->t_updated = 0;
    this->full_location = t_location + t_name;
}

std::string File::get_file() const
{ return full_location; }

void File::create()
{
    std::ofstream gnote_file(this->full_location);
    if (!gnote_file)
    {
        fprintf(stderr, "Cannot open file!");
        exit(1);
    }
    gnote_file.close();
}

void File::write(std::string message) const
{
    std::ofstream gnote_file(this->full_location, std::ios::in | std::ios::binary);
    if (!gnote_file)
    {
        fprintf(stderr, "Cannot open file!");
        exit(1);
    }

    gnote_file.write((char *) &message, sizeof(std::string));
    gnote_file.close();
}
