#ifndef cercleH
#define cercleH
#include "figure.h"
//---------------------------------------------------------------------------
class Cercle:public Figure
{
  protected:
    int rayon;
  public:
	Cercle();
	Cercle(int x, int y, int rayon);
	Cercle(const Cercle&);
    void setRayon(int);
	int getRayon() const;
	float CalculerPerimetre() const;
	float CalculerAire() const;
};
#endif
