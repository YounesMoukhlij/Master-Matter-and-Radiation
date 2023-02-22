class individu
{
   public:
   // les attributs ( data)
   char *nom,*prenom;
   int  age;
   int etat;
   //les méthodes 
   public:
   	individu();
   	individu(char *_nom,char *_prenom,int _age,int _etat);
   	void setNom(char *_nom);
   	void setPrenom(char *_prenom);
   	void setAge(int _age);
   	void setEtat(int _etat);
   	void afficherindividu();
   	
};
