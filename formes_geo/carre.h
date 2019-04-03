#ifndef carreH
#define carreH
#include "figure.h"

class Carre:public Figure
{
  protected:
    int cote;
  public:
	Carre();
	Carre(int x, int y, int cote);
	Carre(const Carre&);
    void setCote(int);
	int getCote() const;
	float CalculerPerimetre() const;
	float CalculerAire() const;
};
#endif
