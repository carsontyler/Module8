//
// Created by 17cty on 11/21/2017.

#ifndef MODULE10_BANKACCOUNT_H
#define MODULE10_BANKACCOUNT_H


class BankAccount
{
private:
    int BalanceInPennies;   // TO DO
public:
    BankAccount();
    ~BankAccount();

    int getBalanceInPennies() const;
    void setBalanceInPennies(int BalanceInPennies);

    bool operator < (const BankAccount &ba);
};


#endif //MODULE10_BANKACCOUNT_H
