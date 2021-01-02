#ifndef  ARBREBINAIRE_H
#define  ARBREBINAIRE_H
#include " Noeud.h"
#include<iostream>
class ArbreBinaire {
public:

    ArbreBinaire();
    ArbreBinaire(const ArbreBinaire &A);
    ~ArbreBinaire();
    ArbreBinaire& operator=(const ArbreBinaire &A);
    void affiche() const;
    int hauteur() const;
    // Renvoie le minimum de l�arbre auquel elle est appliqu�e
    int minimum() const;
    int nbNoeuds()const;  ///
    int nbFeuilles()const; ///good
    int nbNoeudsSansFils(Noeud*);
    bool egaux(Noeud*,Noeud*)const; ///good
private:
    // Donn�es priv�es de la classe
    Noeud *racine; // un pointeur sur la racine
    // M�thodes priv�es de la classe
    // Recopie le sous-arbre de racine rA dans le sous-arbre de
    // racine rB. On suppose que rB est un pointeur nul
    void copie(Noeud *rB,Noeud *rA);
    // D�truit les noeuds du sous-arbre de racine r
    void detruit(Noeud *r);
    // Affiche les noeuds du sous-arbre de racine r
    void affiche(Noeud *r)const;
    // Renvoie la hauteur du sous-arbre de racine r
    int hauteur(Noeud *r)const;
    // Renvoie dans le param�tre m le minimum du sous-arbre de
    // racine r. m est suppos� initialis� � INT_MAX
    void minimum(Noeud *r, int &m) const;
    int nbNoeuds(Noeud*)const;
    int nbFeuilles(Noeud*)const;
};

#endif //  ARBREBINAIRE_H
