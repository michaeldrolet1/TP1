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
	Produit p1("marteau", 1, 5.49);
	Produit p2("tourne-vis", 2, 3.19);
	Produit p3("perceuse", 3, 119.99);
	Produit p4("pinceau", 4, 2.99);
	Produit p5("rouleau de peinture", 5, 0.99);
	Produit p6("perche de peinture", 6.20);
	Produit p7("clou", 7, 2.99);
	Produit p8("vis", 8, 3.99);
	Produit p9("ecrou", 9, 1.99);
	Produit p10("peinture rouge",10 29.99);
	Produit p11("peinture noire", 11 30.99);
	Produit p12("peinture blanche", 12, 25.99);
	Produit p13("planche de bouleau", 13, 10.99);
	Produit p14("planche de pin",14, 10.99);
	Produit p15("planche d'erable", 15, 10.99);

  
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
 
	 p3.modifierNom("drill 12V");
	 p3.modifierPrix(139.99);
	 p3.afficher();
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
	Rayon r1();
   
	//4-  Modifiez la catégorie  du rayon
	r1.modifierCategorie("Materiel de construction");
   
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
	
    	r1.ajouterProduit(p7);
	r1.ajouterProduit(p8);
	r1.ajouterProduit(p9);
	r1.ajouterProduit(p13);
	r1.ajouterProduit(p14);
	r1.ajouterProduit(p15);

    // 6- afficher le contenu du rayon
	r1.afficher();
   
  
	//7-  Creez un objet de classe client à l'aide du constructeur
   	Client client1("Haddad","Patrick",69,"H7H 1C5",19460614);

	//8-  afficher l'etat des attributs du client
	cout<<"Information sur le client"<<endl;
	cout<< "--------------------------" << endl;
	cout<<"Prenom et nom: "<<client.obtenirPrenom()<< "\b" <<client.obtenirNom() <<endl;
	cout << "Identifiant:" << client.obtenirIdentifiant()<< endl;
	cout << "Code Postal: "<< client.obtenirCodePostal() << endl;
	cout << "Date de naissance: " << client.obtenirDateNaissance()<< endl;
   

	//9-   Le client achete 9 produits
   	client.acheter(p7);
	client.acheter(p8);
	client.acheter(p9);
	client.acheter(p13);
	client.acheter(p14);
	client.acheter(p15);

	//10- Afficher le contenu du panier du client

     //11- livrer le panier du client
   
    
	//12- afficher le contenu du panier du client
    
	//13-  terminer le programme correctement
    
    return 0;
}
