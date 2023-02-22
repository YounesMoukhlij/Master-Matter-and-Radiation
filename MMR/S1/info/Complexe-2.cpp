#include <iostream>
#include <math.h>
#include "Complexe.h"
using namespace std;

Complexe::Complexe(float _r,float _i){ this->Re=_r;this->Im=_i;};
void Complexe::afficherComplexe(){cout<<this->Re<<" + i * "<<this->Im<<endl;};
float Complexe::Module(){return sqrt(pow((this->Re),2)+pow((this->Im),2)); };
void Complexe::SommeComplexe(Complexe Z)
{
	this->Re=this->Re+Z.Re;
	this->Im=this->Im+Z.Im;
}
void Complexe::produitComplexe(Complexe Z)
{
	float aux=this->Re;
	this->Re=this->Re*Z.Re-this->Im*Z.Im;
	this->Im=this->Im*Z.Re+aux*Z.Im;
}
Complexe Complexe::puissanceComplexe(int N)
{
	Complexe PZ(1,0);
	int i;
	for (i=1;i<=N;i++)
	  PZ.produitComplexe(*this);
	return PZ;
}
int Complexe::Egalite(Complexe _Z)
{
	if (this->Re==_Z.Re && this->Im==_Z.Im)
	       return 1;
	else
	       return 0;
}
