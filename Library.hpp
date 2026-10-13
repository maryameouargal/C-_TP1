#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include <vector>
#include <string>

class Library {
public:
    void ajouterLivre(const Book& livre);

    // Retourne un pointeur constant vers le livre trouvé, ou nullptr si aucun ISBN ne correspond.
    const Book* trouverParISBN(const std::string& isbn) const;

    void listerLivres() const;

private:
    std::vector<Book> m_livres;
};

#endif 