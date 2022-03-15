#include "Etudiant.h"

Etudiant::Etudiant(string Nom,string Prenom,int Age,int Cne):Personne(Nom,Prenom,Age)
{
    this->Cne = Cne;
}

void Etudiant::Afficher()const
{
    this->Personne::Afficher();
    std::cout<<"Cne : "<<this->Cne<<std::endl;
}

Etudiant::~Etudiant()
{
    std::cout<<"Destructeur de la classe Etudiant"<<std::endl;
}
