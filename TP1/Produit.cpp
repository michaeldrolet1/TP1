#include "Produit.h"
#include <string>
#include <iostream>



Produit::Produit()
{ //Constructeur par default
	string nom = "outil";
	int reference = 0;
	double prix = 0;
}

Produit::Produit(string nom, int reference, double prix):nom_(nom),reference_(reference),prix_(prix) 
{ // Constructeur par attributs
	
}

string Produit::obtenirNom() const 
{
	return nom_;
}

int Produit::obtenirReference() const 
{ 
	return reference_;
}

double Produit::obtenirPrix() const 
{
	return prix_;
}

void Produit::modifierNom(string nom) 
{
	nom_ = nom;
}

void Produit::modifierReference(int reference) 
{
	 reference_= reference;
}

void Produit::modifierPrix(double prix)
{
	prix_=prix;
}

void Produit:: afficher() const
{
	cout << obtenirNom() << endl;
	cout << obtenirReference() << endl;
	cout << obtenirPrix() << endl;
}