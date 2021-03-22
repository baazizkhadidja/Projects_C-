


class mois
{

void affichage(mois m)
{
std::cout<<m.numero<<","<<m.nombre_de_jour<<std::endl;
}


int numero;
int nombre_de_jour;
};




int main()
{
mois janvier;
janvier.numero = 1;
janvier.nobre_de_jour = 31;
affichage(janvier)
}
