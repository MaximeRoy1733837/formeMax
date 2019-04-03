#include "cercle.h"

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}
Cercle::~Cercle()
{
}
void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}
float Cercle::CalculerPerimetre() const
{
	return (2*rayon*Pi);
}
float Cercle::CalculerAire() const
{
	return (rayon * rayon * Pi);
}
void Cercle::Selectionner(int inClicX, int inClicY)
{
	float rayonFloat = (float)rayon;
	if ((((inClicX-(x+rayonFloat))*(inClicX - (x + rayonFloat)))+ ((inClicY - (y + rayonFloat))*(inClicY - (y + rayonFloat))))/(rayonFloat*rayonFloat) <= 1)
	{
		estSelectionne = true;
	}
	else
	{
		estSelectionne = false;
	}
}
