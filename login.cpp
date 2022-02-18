#include "login.hpp"
#include "getline.hpp"
#include <iostream>
#include <fstream>
#include <limits>

using std :: string;
using std :: cin;
using std :: cout;
using std :: endl;
using std :: ios;

bool login::verify()
{   string  user;
    string  pass;
    string  Cuser;
    string  Cpass;
    int     Nuser=0;
    Goto    Get;
    fstream filebank("idbank.txt");
    fstream filenum("NumUser.txt");
    
    cout << "login" << endl ;
    cout << "username : " ;
    cin >> user;
    cout << "password : ";
    cin >> pass;

    Get.line(filenum,1);
    filenum >> Nuser; 
    
    for(int x=0; x<Nuser;x++)
    {   int y=0;
        y=x*2+1;
        Get.line(filebank,y);
        filebank >> Cuser; 
        y=y+1;
        Get.line(filebank,y);
        filebank >> Cpass; 
        if ( user==Cuser && pass==Cpass )
            { 
                return true;
             }
    } 
    return false; 
};

