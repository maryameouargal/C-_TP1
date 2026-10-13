#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string>

class BankAccount {
public:
    // Constructeurs
    BankAccount();
    BankAccount(const std::string& numero, double soldeInitial = 0.0);

    // Opérations
    void deposer(double montant);
    bool retirer(double montant);

    // Consultation
    void        afficher() const;
    std::string getNumero() const;
    double      getSolde() const;

private:
    std::string m_numero;
    double      m_solde;
};

#endif 