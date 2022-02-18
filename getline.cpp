#include <iostream>
#include <fstream>
#include <limits>
#include "getline.hpp"
#include <string>

using std :: fstream;
using std :: ios;
using std :: cout;
using std :: endl;
using std :: string;


fstream& Goto::line(fstream& file, unsigned int num)
{
    file.seekg(ios::beg);
    for(int i=0; i < num - 1; ++i)
    {
         file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return file;
};
