#include "carre.h"

Carre::Carre():Figure()
{
	cote=0;
}

Carre::Carre(int inX, int inY, int inCote) : Figure(inX, inY)
{
	cote = inCote;
}

Carre::Carre(const Carre& inCarre):Figure(inCarre)
{
	cote=inCarre.cote;
}
Carre::~Carre()
{
}
void Carre::setCote(int inCote)
{
  cote = inCote;
}

int Carre::getCote() const
{
	return cote;
}
float Carre::CalculerPerimetre() const
{
	return (cote*4);
}
float Carre::CalculerAire() const
{
	return (cote * cote);
}
void Carre::Selectionner(int inClicX, int inClicY)
{
	if (inClicX >= x && inClicX <= (x + cote) && inClicY >= y && inClicY <= (y + cote))
	{
		estSelectionne = true;
	}
	else
	{
		estSelectionne = false;
	}
}
