#pragma once

#include <iostream>;
using namespace std;
class Point 
{
private : 
	double x;
	double y;
	string nom; 

public : 
	Point();
	Point(double x, double y, string str);
	const double getX() ;
	const double getY();
	const string getNom(); 
	void setX(double x); 
	void setY(double y);
	void setNom(string nom);
	void saisir();
	void affiche();
	double distance(Point P);
	Point additionner(const Point* pt, string nom);
	/* const double getC();
	const double getD();
	void setC(double c);
	void setD(double d);
	*/ 

};
class Triangle
{
	
	private:
		Point Sommet[3]; 
		double cote[3];

	public:
	Triangle();
	void init();
	void affiche();
	double perimetre();

};
