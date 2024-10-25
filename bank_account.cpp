#include "bank_account.h"

Bank_Account::Bank_Account(Client& client, std::string bank_account_number, float pay)
: _client(client), _bank_account_number(bank_account_number), _pay(pay) {
    
}

bool Bank_Account::money_withdrawal(float sum) {
    if (transaction_possible(sum) == true) {
        _pay -= sum;
        return true;
    }
    return false;
}

bool Bank_Account::credit(float sum) {
    _pay += sum;
    return true;
}

bool Bank_Account::transfer(Bank_Account& account, float sum) {
    if (transaction_possible(sum) == true) {
        money_withdrawal(sum);
        account.credit(sum);
        return true;
    }
    return false;
}

std::string Bank_Account::show_info_account() const {
    return "Account Number: " + _bank_account_number + "\nBalance: " + std::to_string(_pay);
}

bool Bank_Account::transaction_possible(float sum) const {
    return _pay >= sum;
}