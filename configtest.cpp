#include <iostream>
#include <fstream>
#include <limits>
#include "getline.hpp"

using std :: fstream;
using std :: ios;
using std :: cout;
using std :: string;
using std :: endl;


int main ()
{ fstream file("idbank.txt");
    Goto Get;
    Get.line(file,1)
    string name;
    file >> name; 
    cout << name<<endl;
}
