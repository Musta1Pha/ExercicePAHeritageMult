#ifndef PROFESSEUR_H
#define PROFESSEUR_H
#include "Personne.h"
#include <iostream>
#include <string>

class Professeur:public virtual Personne
{
    protected:
      int Matricule;
    public:
      Professeur(string Nom,string Prenom,int Age,int Matricule);
      void Afficher()const override;
      ~Professeur();


};

#endif // PROFESSEUR_H
