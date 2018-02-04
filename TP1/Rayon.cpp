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
	cout << "Un objet est ajoute a l'objet rayon" << endl;

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
	cout << "La categorie du rayon est " << categorie_ << " La capacite du tableau dynamique de produit est " << capaciteProduits_ << " Le nombre de produit disponible est " << nombreProduits_;
	for (int i = 0; i < nombreProduits_; i++) 
	{
		tousProduits_[i]->afficher();
	}
}
