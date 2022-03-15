#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "Personne.h"
#include <iostream>
#include <string>

class Etudiant:public virtual Personne
{
    protected:
      int Cne;
    public:
      Etudiant(string Nom,string Prenom,int Age,int Cne);
      void Afficher()const override;
      virtual ~Etudiant();

};

#endif // ETUDIANT_H
