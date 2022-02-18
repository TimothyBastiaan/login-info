#include "register.hpp"
#include <iostream>
#include <fstream>

using std :: string;
using std :: cin;
using std :: cout;
using std :: endl;
using std :: fstream;
using std :: ios;
using std :: getline;

void UserRegis::user(void)
{   string id;
    string pass;
    fstream file;
    int number;
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

    file.open("NumUser.txt");
    file >> number;
    number++;
    file.close();

    file.open("NumUser.txt");
    file << number;
    file.close();
}  
 
