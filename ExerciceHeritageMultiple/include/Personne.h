#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>

using namespace std;
class Personne
{
    protected:
      string Nom;
      string Prenom;
      int Age;
    public:
      Personne(string Nom,string Prenom,int Age);
      virtual void Afficher()const;
      ~Personne();

};

#endif // PERSONNE_H
