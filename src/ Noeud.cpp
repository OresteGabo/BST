#include " Noeud.h"

Noeud:: Noeud(int d):_data{d},_fd{nullptr},_fg{nullptr}
{}
int  Noeud::data()const{return _data;}
void  Noeud::data(int d){_data=d;}

