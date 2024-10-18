#include <iostream>
using namespace std;

class Client {
    public :
        Client(string firstname, string lastname, string _birthdate, string _id);        
        const string firstname; 
        const string lastname; 
    private :
        const string _birth_date; 
        const string _id; 
};