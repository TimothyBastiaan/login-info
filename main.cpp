#include<iostream>
#include"login.hpp"
#include"register.hpp"

using std :: cout;
using std :: cin;
using std :: endl;


int main()
{   int choice;
    bool success;
    UserRegis Regis;
    login login;
    start:
    cout<<"selamat datang " << endl;
    cout<<"tekan 1 untuk register dan tekan 2 untuk login : "; cin>>choice;
    cout<<endl;

    switch(choice)
    {
        case 1: Regis.user();
                goto start;
                break;
        case 2:  success=login.verify();
                 if(success==true)
                 {cout<<"login berhasil";}
                 else
                 {cout<<"login tidak berhasil";
                 goto start;}
                 break;
        case 3: break;
    }
}

