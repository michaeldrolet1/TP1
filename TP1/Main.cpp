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
	Produit("marteau", 0, 5.49);
	Produit("tourne-vis", 1, 3.19);
	Produit("perceuse", 2, 119.99);
	Produit("pinceau", 3, 2.99);
	Produit("rouleau de peinture", 4, 0.99);
	Produit("perche de peinture", 5.20);
	Produit("clou", 6, 2.99);
	Produit("vis", 7, 3.99);
	Produit("ecrou", 8, 1.99);
	Produit("peinture rouge",9, 29.99);
	Produit("peinture noire", 10, 30.99);
	Produit("peinture blanche", 11, 25.99);
	Produit("planche de bouleau", 12, 10.99);
	Produit("planche de pin",13, 10.99);
	Produit("planche d'erable", 14, 10.99);


    
    
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    //   afficher les attributs de cet objet Produit
 
	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
   
	//4-  Modifiez la catégorie  du rayon
   
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
    

    // 6- afficher le contenu du rayon
   
  
	//7-  Creez un objet de classe client à l'aide du constructeur
   

	//8-  afficher l'etat des attributs du client
   

	//9-   Le client achete 9 produits
   

	//10- Afficher le contenu du panier du client

     //11- livrer le panier du client
   
    
	//12- afficher le contenu du panier du client
    
	//13-  terminer le programme correctement
    
    return 0;
}
