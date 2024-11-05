#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class User
{
    protected:
        string username;
        string password;

    public:
        User(string name, string password): username(name), password(password){};

        string getusername() const{
            return username;
        }

        bool checkPassword(string password) const
        {
            return password == this->password;
        }
};

#endif