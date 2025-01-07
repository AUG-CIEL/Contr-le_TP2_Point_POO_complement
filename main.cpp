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
	c.getY(3);
	c.setNom("C");

	

	cout << "Le point" <<a.getNom() <<" a pour coordonnées : " << endl;
	a.affiche();
	cout << "Le point"<< b.getNom() << "a pour coordonnées : " << endl;
	b.affiche();

	cout << "Le point" << c.getNom() << "a pour coordonnée:" << endl;
	c.affiche();
}

