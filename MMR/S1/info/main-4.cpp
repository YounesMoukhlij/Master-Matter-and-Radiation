#include <iostream>
#include <math.h>
#include <string.h>
#include<cstdlib>
#include <time.h>
#include "individu.h"
using namespace std;
main() 
{
	
	
	individu I1("BASRAOUI","Youssef",21,0);
	I1.afficherindividu();
	srand((unsigned) time(NULL));
	int r = rand()%100;
	float p2=(0.3)*100;
	if (r<p2)
		I1.etat=1;
	else
		I1.etat=0;
	I1.afficherindividu();
	/*
	individu Population[10][10];
	Population[0][0].setNom("moi");
	Population[0][0].setPrenom("toi");
	Population[0][0].setAge(22);
	Population[0][0].afficherindividu();
	cout<<"Bonjour"<<endl;
	*/
}
