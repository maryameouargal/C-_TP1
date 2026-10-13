#include "Library.hpp"
#include <iostream>

void Library::ajouterLivre(const Book& livre) {
    // Regle metier : interdiction des doublons d'ISBN
    if (trouverParISBN(livre.getISBN()) != nullptr) {
        std::cerr << "[Erreur] Un livre avec cet ISBN existe deja.\n";
        return;
    }

    m_livres.push_back(livre);
    std::cout << "[Info] Livre ajoute au catalogue.\n";
}

const Book* Library::trouverParISBN(const std::string& isbn) const {
    for (const auto& livre : m_livres) {
        if (livre.getISBN() == isbn) {
           // Pointeur
            return &livre;    
        }
    }
    return nullptr;          
}

void Library::listerLivres() const {
    if (m_livres.empty()) {
        std::cout << "Le catalogue est vide.\n";
        return;
    }

    std::cout << " Catalogue \n";
    for (const auto& livre : m_livres) {
        livre.afficher();
    }
    std::cout << "\n";
}