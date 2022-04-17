#include "User.h"

using namespace std;

User::User() {

}
User::User(string User, string Pass, int id) {
    this->Username = User;
    this->Password = Pass;
    this->ID = id;
}

string User::GetUsername() {
    return this->Username;
}

string User::GetPassword() {
    return this->Password;
}

void User::addContact(User user)
{

    Contacts.push_back(user.ID);
    cout << "Contact Added Successfully " << endl;;
}

void User::displayContacts(User user)
{
    if (user.Contacts.empty())
        cout << "Contact List is Empty !! " << endl;
    else {
        cout << "You have " << user.Contacts.size() << " Contacts." << endl;
        for (int i = 0; i < user.Contacts.size(); i++)
        {
           
             cout << "Contact "<<i+1<< " ID : "<<user.Contacts.at(i) << endl;
             
        }
    }
}

void User::searchForContact(User user , User wantedUser)
{
    int counter = 0;
    bool flag = true;
    while (flag)
    {
        try
        {
            if (user.Contacts.at(counter) == wantedUser.ID)
            {
                cout << "Contact ID "<<user.Contacts.at(counter) <<" Username : " << wantedUser.GetUsername() << endl;
                flag = false;
            }
            counter++;
        }
        catch (const std::exception&)
        {
            cout << "Contact Not Found !!" << endl;
            flag = false;
        }
    }
        
    
}

User::~User() {

    
}

