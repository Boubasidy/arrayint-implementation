#include "arrayint.hh"
arrayint::arrayint(indice a, indice b)
    :_contenu(b-a+1 , 0) , _imin(a){

}

int arrayint::at(indice ind) const{
    if (ind >= imin() and ind <=imax()){
    return _contenu [ind-imin()];
}else {
throw exceptionarrayint(ind);
    }
}

void arrayint::set(indice i, int k){
    if (i>=imin() && i<=imax()){
    _contenu[i-imin()] = k;
}
    else throw exceptionarrayint(i);
}

arrayint &arrayint::operator=(const arrayint &b){
    if (this != &b){
        for(indice i = b.imin() ; i<b.imax(); ++i){
            _contenu.at(i);
        }
    }
    return *this;
}

exceptionarrayint::exceptionarrayint(indice ind)
    :std::exception() , _msg("Accès invalide à l'indice "+std::to_string(ind)) , _indice(ind){
}

const char *exceptionarrayint::what() const noexcept{
    return _msg.c_str();
}
