#include "Professeur.h"
#include <iostream>

Professeur::Professeur(string Nom,string Prenom,int Age,int Matricule):Personne(Nom,Prenom,Age)
{
    this->Matricule = Matricule;
}

void Professeur::Afficher()const
{
    this->Personne::Afficher();
    std::cout<<"Matricule : "<<this->Matricule<<std::endl;
}

Professeur::~Professeur()
{
    std::cout<<"Destructeur de la classe Professeur"<<std::endl;
}
