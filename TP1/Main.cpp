/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit
	Produit produit1("marteau", 1, 5.49);
	Produit produit2("tourne-vis", 2, 3.19);
	Produit produit3("perceuse", 3, 119.99);
	Produit produit4("pinceau", 4, 2.99);
	Produit produit5("rouleau de peinture", 5, 0.99);
	Produit produit6("perche de peinture", 6,5.20);
	Produit produit7("clou", 7, 2.99);
	Produit produit8("vis", 8, 3.99);
	Produit produit9("ecrou", 9, 1.99);
	Produit produit10("peinture rouge",10, 29.99);
	Produit produit11("peinture noire", 11 ,30.99);
	Produit produit12("peinture blanche", 12, 25.99);
	Produit produit13("planche de bouleau", 13, 10.99);
	Produit produit14("planche de pin",14, 10.99);
	Produit produit15("planche d'erable", 15, 10.99);

  
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
 
	 produit3.modifierNom("Drill 12V");
	 produit3.modifierPrix(139.99);
	 produit3.afficher();
	 cout << "________________________________________________________________________" << endl<<endl;
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon rayon1 = Rayon();
   
	//4-  Modifiez la catégorie  du rayon
	rayon1.modifierCategorie("Materiel de construction");
   
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
	
    rayon1.ajouterProduit(&produit7);
	rayon1.ajouterProduit(&produit8);
	rayon1.ajouterProduit(&produit9);
	rayon1.ajouterProduit(&produit13);
	rayon1.ajouterProduit(&produit14);
	rayon1.ajouterProduit(&produit15);

    // 6- afficher le contenu du rayon
	rayon1.afficher();
	cout << "________________________________________________________________________" << endl << endl;
   
  
	//7-  Creez un objet de classe client à l'aide du constructeur
   	Client client("Haddad","Patrick  ",69,"H7H 1C5",19460614);

	//8-  afficher l'etat des attributs du client
	cout<<"Information sur le client"<<endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout<<"Prenom et nom: "<< client.obtenirPrenom()<< "\b" <<client.obtenirNom() <<endl;
	cout << "Identifiant:" << client.obtenirIdentifiant()<< endl;
	cout << "Code Postal: "<< client.obtenirCodePostal() << endl;
	cout << "Date de naissance: " << client.obtenirDateNaissance()<< endl;
	cout << "________________________________________________________________________" << endl << endl;

	//9-   Le client achete 9 produits
   	client.acheter(&produit7);
	client.acheter(&produit9);
	client.acheter(&produit13);
	client.acheter(&produit14);
	client.acheter(&produit15);
	client.acheter(&produit1);
	client.acheter(&produit2);
	client.acheter(&produit3);

	//10- Afficher le contenu du panier du client
	client.afficherPanier();
	cout << "________________________________________________________________________" << endl << endl;
     //11- livrer le panier du client
   	client.livrerPanier();
    
	//12- afficher le contenu du panier du client
	client.afficherPanier();
    
	//13-  terminer le programme correctement
	std::getchar();
    
    return 0;
}
