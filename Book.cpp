#include "Book.hpp"
#include <iostream>

// Constructeur par defaut : livre "vide"
Book::Book()
    : m_titre("Anonyme"),
      m_auteur("anonyme "),
      m_isbn(""),
      m_annee(0) {}

// Constructeur parametre
Book::Book(const std::string& titre,
           const std::string& auteur,
           const std::string& isbn,
           int annee)
    : m_titre(titre),
      m_auteur(auteur),
      m_isbn(isbn),
      m_annee(annee) {}

// Accesseurs 
std::string Book::getTitre()  const { return m_titre;  }
std::string Book::getAuteur() const { return m_auteur; }
std::string Book::getISBN()   const { return m_isbn;   }
int         Book::getAnnee()  const { return m_annee;  }

// Affichage formate
void Book::afficher() const {
    std::cout << "Titre : "  << m_titre
              << " | Auteur : " << m_auteur
              << " | ISBN : "   << m_isbn
              << " | Annee : "  << m_annee
              << '\n';
}