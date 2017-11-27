//
// Created by 17cty on 11/21/2017.
#include "BankAccount.h"
#include <iostream>
using namespace std;
BankAccount::BankAccount()
{
    cout << "Constuctor Bank Acccount" << endl;
    BalanceInPennies = 0;
}
BankAccount::~BankAccount()
{
    cout << "Destructor Bank Account" << endl;
}

int BankAccount::getBalanceInPennies() const {
    return BalanceInPennies;
}

void BankAccount::setBalanceInPennies(int BalanceInPennies) {
    BankAccount::BalanceInPennies = BalanceInPennies;
}

bool BankAccount::operator<(const BankAccount &ba) {
    return BalanceInPennies < ba.BalanceInPennies;
}
