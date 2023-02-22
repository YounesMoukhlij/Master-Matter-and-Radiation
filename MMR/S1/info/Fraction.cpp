#include <iostream>
#include <math.h>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(){this->N=0;this->D=0;};
Fraction::Fraction(int _n,int _d){this->N=_n;this->D=_d;};
void Fraction::AfficherFraction() {cout<<this->N<<"/"<<this->D<<endl; };
void Fraction::Reduire()
{
    int n=this->N;
	int d=this->D;
	int r;
	while (n%d!=0)
	{
		r=n%d;
		n=d;
		d=r;
	}
	this->N=this->N/r;
	this->D=this->D/r;		
};
void Fraction::SommeFraction(Fraction F)
{
      int n=this->N;
      int d=this->D;
      this->N=F.N*d+F.D*n;
      this->D=d*F.D;	
};
void Fraction::produitFraction(Fraction F)
{
   this->N=	this->N*F.N;
   this->D=	this->D*F.D;
};

void Fraction::puissanceFraction(int k) {this->N=pow(this->N,k);this->D=pow(this->D,k); };
bool Fraction::sontEgales(Fraction F)
{
   if (this->N*F.D==this->D*F.N)	
       return true;
    else
        return false;
};


