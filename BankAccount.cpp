#include "BankAccount.hpp"
#include <iostream>
#include <iomanip>

// Constructeur par défaut
BankAccount::BankAccount()
    : m_numero("N/A"), m_solde(0.0) {}

// Constructeur paramétré
BankAccount::BankAccount(const std::string& numero, double soldeInitial)
    : m_numero(numero), m_solde(soldeInitial > 0.0 ? soldeInitial : 0.0) {}

//  Opération

void BankAccount::deposer(double montant) {
    if (montant <= 0.0) {
        std::cerr << "Erreur !! Le montant a deposer doit etre positif.\n";
        return;
    }
    m_solde += montant;
    std::cout << "Info: Depot de " << montant
              << " DH effectue. Nouveau solde : " << m_solde << " DH\n";
}

bool BankAccount::retirer(double montant) {
    if (montant <= 0.0) {
        std::cerr << "Erreur !! Le montant a retirer doit etre positif.\n";
        return false;
    }
    if (montant > m_solde) {
        std::cerr << "Erreur !! Fonds insuffisants. Solde actuel : "
                  << m_solde << " DH \n";
        return false;
    }
    m_solde -= montant;
    std::cout << "Info: Retrait de " << montant
              << " DH effectue. Nouveau solde : " << m_solde << " DH\n";
    return true;
}

// Affichage 
void BankAccount::afficher() const {
    std::cout << std::fixed << std::setprecision(2)
              << "Compte [" << m_numero << "]"
              << " | Solde : " << m_solde << " DH\n";
}

std::string BankAccount::getNumero() const { return m_numero; }
double      BankAccount::getSolde()  const { return m_solde; }