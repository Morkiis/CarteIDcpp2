#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <string>
#include "CarteID.h"

int menu();
void ajouterCarte(CarteID carteID[]);
void afficher(CarteID carteID[]);
void modifier(CarteID carteID[]);
void suppression(CarteID carteID[]);
int trouverVide(CarteID carteID[]);


int main() {

	CarteID carteID[100];
	bool tourne = true;

	while (tourne) {
		
		switch (menu())
		{
		case 1:
			afficher(carteID);
		
		break;

		case 2:
			ajouterCarte(carteID);
			break;

		case 3:

			modifier(carteID);
			break;



		case 4 :

			suppression(carteID);
			break;


		case 0:
			tourne = false;

			break;
		}
	}

	return 0;
}


int menu() {
	int choix=0;

	system("cls");
	std::cout << "Menu" << std::endl;
	std::cout << "1 Afficher" << std::endl;
	std::cout << "2 Ajouter" << std::endl;
	std::cout << "3 Modifier" << std::endl;
	std::cout << "4 suppresion" << std::endl;
	std::cout << "0 Quitter" << std::endl;
	std::cin >> choix;
	return choix;
}

void ajouterCarte(CarteID carteID[])
{
	int vide = trouverVide(carteID);
	string emplacement;
	system("cls");

	cin.ignore();//vide memoire cin
	
	carteID[vide].setID(vide);

	std::cout << "\nEntrez votre nom : ";
	std::getline(std::cin, emplacement);
	carteID[vide].setnom(emplacement);
	
	std::cout << "\nEntrez votre prenom : ";
	std::getline(std::cin, emplacement);
	carteID[vide].setprenom(emplacement);
	
	std::cout << "\nEntrez votre adresse : ";
	std::getline(std::cin, emplacement);
	carteID[vide].setadresse(emplacement);

	std::cout << "\nEntrez votre CP : ";
	std::getline(std::cin, emplacement);
	carteID[vide].setCP(emplacement);

	std::cout << "\nEntrez votre ville : ";
	std::getline(std::cin, emplacement);
	carteID[vide].setville(emplacement);

	std::cout << "Saisie reussie" << std::endl;
	system("pause");
}

int trouverVide(CarteID carteID[])
{
	int i = 1;

	while (carteID[i].getID() != 0) {
		i++;

	}
	return i;
}

void afficher(CarteID carteID[])
{
	int id = 0;

	system("cls");
	cin.ignore();
	
	std::cout << "Entrez un ID" << endl;
	std::cin >> id;
	
	if (carteID[id].getID() == 0) {
		
		std::cout << "id invalide" << std::endl;
	}
	else {
		carteID[id].afficher();
	}
		
	
			
	
	system("pause");



}

void modifier(CarteID carteID[])
{
	int id = 0;

	system("cls");
	cin.ignore();

	std::cout << "Entrez un ID" << endl;
	std::cin >> id;

	if (carteID[id].getID() == 0) {

		std::cout << "id invalide" << std::endl;
	}
	else {
		string emplacement;
		system("cls");

		cin.ignore();//vide memoire cin

		carteID[id].setID(id);

		std::cout << "\nEntrez votre nom : ";
		std::getline(std::cin, emplacement);
		carteID[id].setnom(emplacement);

		std::cout << "\nEntrez votre prenom : ";
		std::getline(std::cin, emplacement);
		carteID[id].setprenom(emplacement);

		std::cout << "\nEntrez votre adresse : ";
		std::getline(std::cin, emplacement);
		carteID[id].setadresse(emplacement);

		std::cout << "\nEntrez votre CP : ";
		std::getline(std::cin, emplacement);
		carteID[id].setCP(emplacement);

		std::cout << "\nEntrez votre ville : ";
		std::getline(std::cin, emplacement);
		carteID[id].setville(emplacement);

		std::cout << "Saisie reussie" << std::endl;
	}




	system("pause");
}

void suppression(CarteID carteID[])

{
	int id = 0;

	system("cls");
	cin.ignore();

	std::cout << "Entrez un ID" << endl;
	std::cin >> id;

	if (carteID[id].getID() == 0) {

		std::cout << "id invalide" << std::endl;
	}
	else {
		carteID[id].setID(0);
	}
}