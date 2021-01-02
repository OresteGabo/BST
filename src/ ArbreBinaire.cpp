#include " ArbreBinaire.h"

ArbreBinaire::ArbreBinaire():racine{nullptr}
{}
    // Constructeur par recopie d’arbre
ArbreBinaire::ArbreBinaire(const ArbreBinaire &A){

}
// Destructeur d’arbre
ArbreBinaire::~ArbreBinaire(){
    detruit(racine);
}
// Surcharge de l’opérateur d’affectation
ArbreBinaire& ArbreBinaire::operator=(const ArbreBinaire &A){}
// Affiche les noeuds de l’arbre auquel elle est appliquée
void ArbreBinaire::affiche() const{
    affiche(racine);
}
// Renvoie la hauteur de l’arbre auquel elle est appliquée
int ArbreBinaire::hauteur() const{}
// Renvoie le minimum de l’arbre auquel elle est appliquée
int ArbreBinaire::minimum() const{}
void ArbreBinaire::copie(Noeud *rA, Noeud *rB){
    //On suppose que rb n'est pas nul
    rB=new Noeud(rA->data());
    if(rA->_fd)copie(rA->_fd,rB->_fd);
    if(rA->_fg)copie(rA->_fg,rB->_fg);
}
// Détruit les noeuds du sous-arbre de racine r
void ArbreBinaire::detruit(Noeud *r){
    if(r){

        detruit(r->_fd);
        detruit(r->_fg);
        delete r;
    }
}
// Affiche les noeuds du sous-arbre de racine r
void ArbreBinaire::affiche(Noeud *r) const{
    if(r){
        std::cout<<r->data()<<"  ";
        affiche(r->_fd);
        affiche(r->_fg);
    }
}
// Renvoie la hauteur du sous-arbre de racine r
int ArbreBinaire::hauteur(Noeud *r) const{
}
// Renvoie dans le paramètre m le minimum du sous-arbre de
// racine r. m est supposé initialisé à INT_MAX
void ArbreBinaire::minimum(Noeud *r, int &m) const{}
int ArbreBinaire::nbNoeuds(Noeud* n)const{
    if(n){
        return 1+nbNoeuds(n->_fd)+nbNoeuds(n->_fg);
    }
    return 0;
}
int ArbreBinaire::nbNoeuds()const{
    return nbNoeuds(racine);
}
int ArbreBinaire::nbFeuilles(Noeud* n)const{
    if(n==nullptr){
        return 0;
    }else{
        if(!n->_fd && !n->_fg){
            return 1;
        }else{
            nbFeuilles(n->_fd)+nbFeuilles(n->_fg);
        }
    }
}
int ArbreBinaire::nbFeuilles()const{
    return nbFeuilles(racine);
}
bool ArbreBinaire::egaux(Noeud* n1,Noeud* n2)const{
    if(n1==nullptr){
        if(n2==nullptr)return true;
        return false;
    }else{
        if(n2==nullptr)return false;
        return n1->_data"a==n2->_data && egaux(n1->_fd,n2->_fd) && egaux(n1->_fg,n2->_fg);
    }
}
