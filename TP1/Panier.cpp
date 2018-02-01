#include "panier.h"
#include <string>
#include <iostream>

Panier::Panier(int capacite):capaciteContenu_(capacite)
{
	contenuPanier_ = 0;
	totalAPayer_ = 0;
	nombreContenu_ = 0;
}
Produit** Panier::obtenirContenuPanier() const 
{
	return contenuPanier_;
}

int Panier::obtenirNombreContenu() const
{
	return nombreContenu_;
}

double Panier::obtenirTotalApayer() const
{
	return totalAPayer_;
}

void Panier::ajouter(Produit * prod)
{
	if (nombreContenu_ > capaciteContenu_)
	{
		
		/*if (capaciteContenu_ > 0)
		{
			int newCapacite = capaciteContenu_ * 2;
		}
		else
		{
			int newCapacite = 0;
		}
		*/
		int newCapacite = (capaciteContenu_ > 0) ? capaciteContenu_ * 2 : 10;
		Produit** newContenu = new Produit*[newCapacite];
		// Copie les produits deja present
		for (int i = 0; i < nombreContenu_; i++)
			newContenu[i] = contenuPanier_[i];

		// Supprime le contenu precedent
		delete[] contenuPanier_;

		// Assigne les nouveaux contenus
		contenuPanier_ = newContenu;
		capaciteContenu_ = newCapacite;
	}
	// Ajouter le nouveau produit
	contenuPanier_[nombreContenu_++] = prod;
}

void Panier::livrer() 
{
	delete [] contenuPanier_[nombreContenu_];
	Produit** contenuPanier_ = nullptr;
}

void Panier::afficher() const
{
	cout << obtenirContenuPanier() << endl;
	cout << obtenirNombreContenu() << endl;
	cout << obtenirTotalApayer() << endl;
}