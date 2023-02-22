#include <iostream>
#include <math.h>
#include <string.h>
#include "individu.h"

using namespace std;
individu::individu()
{
	strcpy(this->nom,"");
	strcpy(this->prenom,"");
	this->age=0;
	this->etat=0;
};
individu::individu(char *_nom=NULL,char *_prenom=NULL,int _age=0,int _etat=0)
{
	
	this->nom=new char[strlen(_nom)];
	this->prenom=new char[strlen(_prenom)];
	strcpy(this->nom,_nom);
	strcpy(this->prenom,_prenom);
	this->age=_age;
	this->etat=_etat;
};
void individu::afficherindividu()
{
	cout<<this->nom<<endl;
	cout<<this->prenom<<endl;
	cout<<this->age<<endl;
	cout<<this->etat<<endl;
};
void individu::setNom(char *_nom){	this->nom=new char[strlen(_nom)];strcpy(this->nom,_nom); };
void individu::setPrenom(char *_prenom){	this->prenom=new char[strlen(_prenom)];strcpy(this->nom,_prenom); };
void individu::setAge(int _age){	this->age=_age; };
void individu::setEtat(int _etat){	this->etat=_etat; };




