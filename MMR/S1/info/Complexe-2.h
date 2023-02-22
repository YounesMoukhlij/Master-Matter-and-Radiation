class Complexe
{
   public:
   // les attributs ( data)
   float Re;
   float Im;
   //les méthodes 
   public:
   	Complexe(float _r=0,float _i=0);
   	void afficherComplexe();
   	void SommeComplexe(Complexe Z);
   	void produitComplexe(Complexe Z);
   	Complexe puissanceComplexe(int N);
   	int Egalite(Complexe _Z);
	float Module();
   	
};
