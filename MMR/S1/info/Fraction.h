class Fraction
{
	private :
		int N,D;
	public:
		Fraction(); 
		Fraction(int,int); 
		void AfficherFraction();
		void Reduire();
		void SommeFraction(Fraction);
		void produitFraction(Fraction);
		void puissanceFraction(int);
		bool sontEgales(Fraction);
};

