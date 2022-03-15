#include "Personne.h"
#include <iostream>

Personne::Personne(string Nom,string Prenom,int Age)
{
    this->Nom = Nom;
    this->Prenom = Prenom;
    this->Age = Age;
}

void Personne::Afficher()const
{
    std::cout<<"Nom : "<<this->Nom<<std::endl;
    std::cout<<"Prenom : "<<this->Prenom<<std::endl;
    std::cout<<"Age : "<<this->Age<<std::endl;
}

Personne::~Personne()
{
    std::cout<<"Destructeur de la classe Personne"<<std::endl;
}
