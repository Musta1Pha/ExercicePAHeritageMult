#ifndef PA_H
#define PA_H
#include "Professeur.h"
#include "Etudiant.h"
#include <iostream>
#include <string>
using namespace std;

class PA:public Professeur,public Etudiant
{
    private:
     string Thematique;
    public:
     PA(string Nom,string Prenom,int Age,int Cne,int Matricule,string Thematique);
     void Afficher()const override;
     ~PA();


};

#endif // PA_H
