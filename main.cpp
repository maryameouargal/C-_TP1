#include "BankAccount.hpp"
#include <iostream>

int main() {
    // Compte par défaut
    BankAccount compteAnonyme;
    compteAnonyme.afficher();

    // Compte paramétré
    BankAccount compte("MR-001", 250.0);
    compte.afficher();

    // Dépôt valide
    compte.deposer(100.0);
    compte.afficher();

    // Dépôt invalide
    compte.deposer(-20.0);

    // Retrait valide
    if (compte.retirer(80.0))
        std::cout << "Retrait de 80 DH effectue\n";
    compte.afficher();

    // Retrait trop eleve
    if (!compte.retirer(1000.0))
        std::cout << "Le retrait a echoue\n";

    std::cout << "Numero : " << compte.getNumero() << "\n";
    std::cout << "Solde  : " << compte.getSolde()  << "\n";

    return 0;
}