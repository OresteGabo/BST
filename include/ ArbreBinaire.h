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
    // Renvoie le minimum de l’arbre auquel elle est appliquée
    int minimum() const;
    int nbNoeuds()const;  ///
    int nbFeuilles()const; ///good
    int nbNoeudsSansFils(Noeud*);
    bool egaux(Noeud*,Noeud*)const; ///good
private:
    // Données privées de la classe
    Noeud *racine; // un pointeur sur la racine
    // Méthodes privées de la classe
    // Recopie le sous-arbre de racine rA dans le sous-arbre de
    // racine rB. On suppose que rB est un pointeur nul
    void copie(Noeud *rB,Noeud *rA);
    // Détruit les noeuds du sous-arbre de racine r
    void detruit(Noeud *r);
    // Affiche les noeuds du sous-arbre de racine r
    void affiche(Noeud *r)const;
    // Renvoie la hauteur du sous-arbre de racine r
    int hauteur(Noeud *r)const;
    // Renvoie dans le paramètre m le minimum du sous-arbre de
    // racine r. m est supposé initialisé à INT_MAX
    void minimum(Noeud *r, int &m) const;
    int nbNoeuds(Noeud*)const;
    int nbFeuilles(Noeud*)const;
};

#endif //  ARBREBINAIRE_H
