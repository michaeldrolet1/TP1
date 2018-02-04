#include <string>
#include "Rayon.h"
#include <iostream>

Rayon::Rayon()
{
	categorie_ = "inconnue";
	capaciteProduits_ = 0;
	nombreProduits_ = 0;
	tousProduits_ = nullptr;
}
Rayon::Rayon(string cat) : categorie_(cat), capaciteProduits_(0), nombreProduits_(0), tousProduits_(nullptr)
{

}

string Rayon::obtenirCategorie() const
{
	return categorie_;
}
Produit ** Rayon::obtenirTousProduits() const
{
	return tousProduits_;
}
int Rayon::obtenirCapaciteProduits() const
{
	return capaciteProduits_;
}
int Rayon::obtenirNombreProduits() const
{
	return nombreProduits_;
}
void Rayon::modifierCategorie(string cat)
{
	categorie_ = cat;
}
void Rayon::ajouterProduit(Produit * produit)
{

	if (tousProduits_ == nullptr)
	{
		capaciteProduits_ = 5;
		tousProduits_ = new Produit*[capaciteProduits_];
		tousProduits_[0] = produit;
		nombreProduits_++;

	}
	else 
	{
		if (capaciteProduits_ == nombreProduits_)
		{
			Produit **tableauTemp = new Produit*[capaciteProduits_];
			tableauTemp = tousProduits_;


			tousProduits_ = nullptr;

			capaciteProduits_ += 5;

			tousProduits_ = new Produit*[capaciteProduits_];

			for (int i = 0; i< nombreProduits_; i++)
			{
				tousProduits_[i] = tableauTemp[i];
			}

			tableauTemp = nullptr;


			tousProduits_[nombreProduits_] = produit;

			nombreProduits_++;
		}
		else
		{
			tousProduits_[nombreProduits_] = produit;
			nombreProduits_++;
		}
	}
}
void Rayon::afficher() const
{
	cout << "|Categorie du rayon|             : " << categorie_ << endl;
	cout << "|Capacite de produits|           : " << capaciteProduits_ << endl; 
	cout << "|Nombre de produits disponibles| : " << nombreProduits_ << endl;
	cout << "Contenu du rayon : " << endl;
	cout << "------------------------------------------------------------------------" << endl;

	for (int i = 0; i < nombreProduits_; i++) 
	{
		tousProduits_[i]->afficher();
	}
}
