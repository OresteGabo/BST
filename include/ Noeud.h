#ifndef  NOEUD_H
#define  NOEUD_H


class  Noeud{
    public:
         Noeud(int);
         friend class ArbreBinaire;
         int data()const;
         void data(int);
    protected:
    private:
        int _data;
        Noeud* _fg,*_fd;
};

#endif //  NOEUD_H
