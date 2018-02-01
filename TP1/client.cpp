#include "client.h"
#include <string>
#include <iostream>

//Client::Client()
//{
//	nom_ : "unknown";
//	prenom_: "unknown";
//	identifiant_ : 0;
//	codePostal_: "unknown";
//	dateNaissance_ : 0;
//}

Client::Client(string nom, string prenom, int identifiant, string codePostal, long date)
	: nom_(nom), prenom_(prenom), identifiant_(identifiant), codePostal_(codePostal), dateNaissance_(date), monPanier_(nullptr)
{

}
Client::~Client()
{
}

string Client::obtenirNom() const
{
	return nom_;
}

string Client::obtenirPrenom() const
{
	return prenom_;
}
int Client::obtenirIdentifiant() const
{
	return identifiant_;
}
string Client::obtenirCodePostal() const
{
	return codePostal_;
}
long Client::obtenirDateNaissance() const
{
	return dateNaissance_;
}
void Client::modifierNom(string nom)
{
	nom_ = nom;
}
void Client::modifierPrenom(string prenom)
{
	prenom_ = prenom;
}
void Client::modifierIdentifiant(int identifiant)
{
	identifiant_ = identifiant;
}
void Client::modifierCodePostal(string codePostal)
{
	codePostal_ = codePostal;
}
void Client::modifierDateNaissance(long date)
{
	dateNaissance_ = date;
}