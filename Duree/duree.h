#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED


class Duree
{
public:
Duree(int heures =0, int minutes =0, int secondes=0);
bool estEgal(Duree const& a, Duree const& b);

private:

int m_heures;
int m_minutes;
int m_secondes;

};


#endif // DUREE_H_INCLUDED
