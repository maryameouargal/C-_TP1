#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
public:
// les attributs de la classe Book 
    Book();
    Book(const std::string& titre,
         const std::string& auteur,
         const std::string& isbn,
         int annee);
// les méthodes de la classe Book
    std::string getTitre()  const;
    std::string getAuteur() const;
    std::string getISBN()   const;
    int         getAnnee()  const;

    void afficher() const;

private:
    std::string m_titre;
    std::string m_auteur;
    std::string m_isbn;
    int         m_annee;
};

#endif 