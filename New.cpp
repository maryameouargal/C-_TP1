#include "Book.hpp"
#include "Library.hpp"
#include <iostream>

int main() {
    Library catalogue;

    // 1) Catalogue vide
    catalogue.listerLivres();

    // 2) Ajout de livres
    catalogue.ajouterLivre(Book("beautifull venome ", "Rina knet ", "978-2-07-040850-4", 1943));
    catalogue.ajouterLivre(Book("1984", "Orwell", "978-0-452-28423-4", 1949));
    catalogue.ajouterLivre(Book("lotus flower ", "night", "978-2-07-036002-4", 1942));

    // 3) Tentative de doublon (meme ISBN)
    catalogue.ajouterLivre(Book("Doublon", "Anonyme", "978-0-452-28423-4", 2000));

    // 4) Affichage complet
    catalogue.listerLivres();

    // 5) Recherche par ISBN
    const Book* trouve = catalogue.trouverParISBN("978-2-07-040850-4");
    if (trouve != nullptr) {
        std::cout << "Trouve : ";
        trouve->afficher();
    } else {
        std::cout << "Aucun livre avec cet ISBN.\n";
    }

    // 6) Recherche infructueuse
    if (catalogue.trouverParISBN("000-0-00-000000-0") == nullptr) {
        std::cout << "ISBN inconnu (comportement attendu).\n";
    }

    return 0;
}