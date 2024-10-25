#include "bank_account.h"

int main() {
    Client client_1("Nicolas", "Defour", "27/11/2004", "34698235457");
    Client client_2("Emmanuel", "Peyronnet", "23/03/2004", "34668235457");
    Bank_Account bank_account_client_1(client_1, "235086218237", 1000);
    Bank_Account bank_account_client_2(client_2, "235066218237", 2000);
    int choice;
    bool var = true;

    while (var == true) {
        std::cout << std::endl << "0 : Deconnect" << std::endl << "1 : Show client info" << std::endl << "2 : Show bank account info" << std::endl;
        std::cout << "3 : Withdraw money from an account" << std::endl << "4 : Add money to an account" << std::endl;
        std::cout << "5 : Transfer money to an account" << std::endl;
        std::cout << "Give a number : ";
        std::cin >> choice;
        switch (choice) {
        case 0:
            std::cout << "You got deconnected !" << std::endl;
            var = false;
            break;
        case 1:
            std::cout << client_1.show_client_info() << std::endl;
            std::cout << client_2.show_client_info() << std::endl;
            break;
        case 2:
            std::cout << bank_account_client_1.show_info_account() << std::endl;
            std::cout << bank_account_client_2.show_info_account() << std::endl;
            break;
        case 3: {
            int account_number;
            float amount;
            std::cout << "Choose your account (1 or 2): ";
            std::cin >> account_number;
            std::cout << "How much do you want to withdraw ?" << std::endl;
            std::cin >> amount;
            if (account_number == 1) {
                bank_account_client_1.money_withdrawal(amount);
            }
            else if (account_number == 2) {
                bank_account_client_2.money_withdrawal(amount);
            }
            break;
        }
        case 4 : {
            int account_number;
            float amount;
            std::cout << "Choose your account (1 or 2): ";
            std::cin >> account_number;
            std::cout << "How much do you want to add ?" << std::endl;
            std::cin >> amount;
            if (account_number == 1) {
                bank_account_client_1.credit(amount);
            }
            else if (account_number == 2) {
                bank_account_client_2.credit(amount);
            }
            break;
        }
        case 5 : {
            int account_number;
            float amount;
            std::cout << "Choose the account to whitch you want to transfer money (1 or 2): ";
            std::cin >> account_number;
            std::cout << "How much do you want to transfer ?" << std::endl;
            std::cin >> amount;
            if (account_number == 1) {
                bank_account_client_1.transfer(bank_account_client_2, amount);
            }
            else if (account_number == 2) {
                bank_account_client_2.transfer(bank_account_client_1, amount);
            }
            break;
        }
        }
    }
    return 0;
}