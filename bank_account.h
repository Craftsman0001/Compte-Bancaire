#pragma once

#include <iostream>
#include <string>
#include "client.h"

class  Bank_Account {
    public :
        Bank_Account(Client& client, std::string bank_account_number, float pay);        
        bool money_withdrawal(float sum); 
        bool credit(float sum); 
        bool transfer(Bank_Account& account, float sum);
        std::string show_info_account() const;
    private :
        std::string _bank_account_number; 
        float _pay;
        const Client& _client;
        bool transaction_possible(float sum) const;
};