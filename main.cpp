#include "User.h"

using namespace std;

int main() {
	
	User arr[120];
	
	int ID;

		arr[1] = User("osama", "123", 1);
		arr[2] = User("eslam", "123", 2);
		arr[3] = User("soha", "123", 3);
		arr[4] = User("yassmen", "123", 4);
		arr[7] = User("omar", "123", 7);

	//cout << "Please enter ID of the User you want to add : ";
	//cin >> addUserID;

	//cout << "Please enter ID of the User you want to add : ";
	//cin >> addUserID;
	arr[1].addContact(arr[2]);
	arr[1].addContact(arr[4]);
	arr[1].addContact(arr[7]);

	cout << "Displaying My Contacts :" << endl;
	
	arr->displayContacts(arr[1]);
	cout << "What contact ID you wanna search for :" << endl;
	cin >> ID;
	arr->searchForContact(arr[1], arr[ID]);

	/*arr[1] =  User("omar", "123", 1);
	arr[2] = User("eslam", "123", 12);
	arr[3] = User("soha", "123", 30);
	arr[4] = User("osama", "123", 14);
	arr[5] = User("ganna", "123", 56);
	arr[6] = User("Yassmin", "123", 64);
	
	arr[1].addContact(arr[2]);
	arr[1].addContact(arr[3]);
	arr[1].addContact(arr[5]);
	arr[1].addContact(arr[6]);
	
	
	arr->displayContacts(arr[1]);*/


	//arr->searchForContact(arr[2],5);
	
}