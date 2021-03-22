#include "Personnage.h"
#include "Guerrier.h"
using namespace std;



int main()
{
Personnage monPersonnage;
Guerrier monGuerrier;

monPersonnage.coupDePoing(monGuerrier);
monGuerrier.coupDePoing(monPersonnage);
monGuerrier.sePresenter();

monPersonnage.sePresenter();

}
