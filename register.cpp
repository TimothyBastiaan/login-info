#include "register.hpp"
#include "getline.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>


using std :: string;
using std :: cin;
using std :: cout;
using std :: endl;
using std :: fstream;
using std :: ios;
using std :: getline;
using std :: filesystem ::exists;

void UserRegis::user(void)
{   string id;
    string pass;
    fstream file;
    fstream filenum("NumUser.txt");
    Goto Get;
    int number=0;

    cout << "Register"<<endl;
    cout << "input the user name :" ;
    cin >> id;
   
    cout << "input the password : " ;
    cin >> pass;
    cout<< endl;
    
    file.open("idbank.txt", ios :: app | ios :: in);
    if (file.is_open())
    file << id << endl << pass << endl;
    file.close();

    if(exists("NumUser.txt"))
    {

    Get.line(filenum,1);
    filenum >> number ;
    number++;

    file.open("NumUser.txt");
    file << number;
    file.close();
    
    }
    else
    {
    file.open("NumUser.txt", ios :: app | ios :: in);
    if (file.is_open())
    file << number;
    file.close();

    Get.line(filenum,1);
    filenum >> number;
    number++;

    file.open("NumUser.txt");
    file << number;
    file.close();
    }  
}  
 
