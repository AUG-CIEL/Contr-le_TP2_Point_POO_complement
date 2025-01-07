#include <iostream>;
#include "DS.h";
Point::Point()
{

	this->x = 0;
	this->y = 0;
	this->nom = " ";
}

Point::Point(double x, double y, string str)
{

	 this->x = x;
	 this->y = y;
	
}

const double Point::getX()
{
	return x;
}

const double Point::getY()
{
	return y;
}

const string Point::getNom()
{
	return nom;
}

void Point::setX(double x)
{
	this->x = x; 
}

void Point::setY(double y)
{
	this->y = y; 
}

void Point::setNom(string nom)
{
	this->nom = nom;
}

void Point::saisir()
{
}

void Point::affiche()
{
	cout << "abcisse: " << x << endl;
	cout << "ordonnee: " << y << endl;

}

double Point::distance(Point P)
{
	 
	return 0.0;
}

Point Point::additionner(const Point* pt, string nom)
{
	Point somme;

	somme.x = this->x + pt->x;//x=x1+x2
	//y=y1+y2
	somme.y = this->y + pt->y;
	 
	
	// nom 
	somme.nom = nom;
	return somme;
}




