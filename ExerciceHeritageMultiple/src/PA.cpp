#include "PA.h"
#include <iostream>
#include <string>
using namespace std;

PA::PA(string Nom,string Prenom,int Age,int Cne,int Matricule,string Thematique):Professeur(Nom,Prenom,Age,Matricule),Etudiant(Nom,Prenom,Age,Cne),Personne(Nom,Prenom,Age)
{
    this->Thematique = Thematique;
}

void PA::Afficher()const
{
    this->Professeur::Afficher();
    std::cout<<"Cne : "<<this->Etudiant::Cne<<std::endl;
    std::cout<<"Thematique : "<<this->Thematique<<std::endl;
}

PA::~PA()
{
    std::cout<<"Destructeur de la classe PA"<<std::endl;
}
