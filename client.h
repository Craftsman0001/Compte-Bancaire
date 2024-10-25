#pragma once

#include <iostream>
#include <string>

class Client {
    public :
        Client(std::string firstname, std::string lastname, std::string _birthdate, std::string _id);  
        std::string show_client_info() const;
    private :
        const std::string _firstname;
        const std::string _lastname;
        const std::string _birthdate; 
        const std::string _id; 
};