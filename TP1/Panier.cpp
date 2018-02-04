#include "panier.h"
#include <string>
#include <iostream>

Panier::Panier(int capacite):capaciteContenu_(capacite)
{
	contenuPanier_ = new Produit*[capaciteContenu_];
	totalAPayer_ = 0;
	nombreContenu_ = 0;
}
Panier::~Panier()
{
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
	
	if (nombreContenu_ >= capaciteContenu_)
	{
		
		int nouveauCapacite = (capaciteContenu_ > 0) ? capaciteContenu_ * 2 : 1;
		Produit** nouveauContenu = new Produit*[nouveauCapacite];
		// Copie les produits deja present
		for (int i = 0; i < nombreContenu_; i++)
			nouveauContenu[i] = contenuPanier_[i];

		// Supprime le contenu precedent
		delete[] contenuPanier_;

		// Assigne les nouveaux contenus
		contenuPanier_ = nouveauContenu;
		capaciteContenu_ = nouveauCapacite;
	}
	// Ajouter le nouveau produit
	contenuPanier_[nombreContenu_++] = prod;

	//Mise a jour du total a payer
	double nouveauSomme = totalAPayer_;
	for (int i = 0; i < nombreContenu_; i++)
	{
		//newSomme += contenuPanier_[i]->obtenirPrix;
		nouveauSomme += prod->obtenirPrix();

		
	}

	totalAPayer_ = nouveauSomme;
}

void Panier::livrer() 
{
	if (contenuPanier_ != nullptr)
	{
		delete[] contenuPanier_;
		Produit** contenuPanier_ = nullptr;
		
	}
}

void Panier::afficher() const
{
	cout << "Contenu du panier: " << contenuPanier_ << endl;
	cout << "Capacite du panier: " << capaciteContenu_ << endl;
	cout << "Nombre de produits dans le panier: " << obtenirNombreContenu() << endl;
	cout << "Total a payer " << obtenirTotalApayer() << endl;
	for (int i = 0; i < nombreContenu_; i++)
		{
			contenuPanier_[i]->afficher();
		}
	
	
	

}