#include <iostream>;
#include "DS.h";
using namespace std;
int main()
{
	
  

	Point a, b, c, d;

	a.setX(2);
	a.setY(3);
	a.setNom("A");
	b.setX(4);
	b.setY(-2);
	b.setNom("B");

	c.setX(1);
	c.setY(0);
	c.setNom("C");

	d.setX(-1);
	d.setY(3);
	d.setNom("D");

	cout << "Le point " <<a.getNom() <<" a pour coordonnées : " << endl;
	a.affiche();
	cout << "Le point "<< b.getNom() << " a pour coordonnées : " << endl;
	b.affiche();

	cout << "Le point " << c.getNom() << " a pour coordonnée:" << endl;
	c.affiche();


	cout << "Le point " << d.getNom() << " a pour coordonnée:" << endl;
	d.affiche();
}

