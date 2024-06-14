#ifndef ARRAYINT_HH
#define ARRAYINT_HH
#include <iostream>
#include <vector>
#include <string>
#include <exception>
using indice = signed int ;
class arrayint {
public:
    arrayint(indice a , indice b) ;
    arrayint (arrayint const &a ) = default ;
    indice imin() const {
        return _imin;
    }
    indice imax() const {
        return (imin() + _contenu.size() -1);
    }
    int at(indice ind) const ;
    int operator [] (indice i ) const {
        return _contenu.at(i);
    }
    void set(indice i , int k ) ;
    arrayint & operator=(arrayint const & b) ;
private:
    std::vector <int> _contenu;
    indice _imin;
};
class exceptionarrayint : public std::exception {
public:
    exceptionarrayint(indice ind);
    const char * what()const noexcept override ;
    indice _indice ;
    std::string _msg;
};

#endif // ARRAYINT_HH
