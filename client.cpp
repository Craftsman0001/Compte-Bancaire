#include "client.h"

Client::Client(std::string firstname, std::string lastname, std::string birthdate, std::string id) :
_firstname(firstname), _lastname(lastname), _birthdate(birthdate), _id(id) {

}

std::string Client::show_client_info() const {
    return "Firstname: " + _firstname + "\nLastname: " + _lastname + "\nBirthdate: " + _birthdate + "\nId: " + _id;
}