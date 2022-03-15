#include <iostream>
#include "PA.h"
#include "Personne.h"
#include "Etudiant.h"
#include "Professeur.h"

using namespace std;

int main()
{
    Personne * p1 = new Personne("Pers1","Perso1",22);
    Professeur* pr = new Professeur("Prof1","Prof1",25,3231);
    PA* pa = new PA("Azerty","Qwerty",20,22,3213,"Azerty1");
    pa->Afficher();

    cout<<sizeof(*pa)<<endl;

    return 0;
}
