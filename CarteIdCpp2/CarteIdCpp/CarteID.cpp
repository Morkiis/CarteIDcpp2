#pragma once

#include <iostream>
#include <string>
#include "CarteID.h"

CarteID::CarteID()
{
	setID(0);
}

CarteID::~CarteID()
{
}

string CarteID::getID()const
{
	return string(ID);
}

string CarteID::getnom()const
{
	return string(nom);
}

string CarteID::getprenom()const
{
	return string(prenom);
}

string CarteID::getadresse()const
{
	return string(adresse);
}

string CarteID::getCP()const
{
	return string(cp);
}

string CarteID::getville()const
{
	return string(ville);
}

void CarteID::setID(int mID)
{
	ID = mID;
}

void CarteID::setnom(string mnom)
{
	nom = mnom;
}

void CarteID::setprenom(string mprenom)
{
	prenom = mprenom;
}

void CarteID::setadresse(string madresse)
{
	adresse = madresse;
}

void CarteID::setCP(string mCP)
{
	cp = mCP;
}

void CarteID::setville(string mville)
{
	ville = mville;
}

void CarteID::afficher()const
{
	cout << "ID: " << this->getID() << endl;
	cout << "Nom: " << this->getnom() << endl;
	cout << "Prenom: " << this->getprenom() << endl;
	cout << "Adresse: " << this->getadresse() << endl;
	cout << "CP: " << this->getCP() << endl;
	cout << "Ville: " << this->getville() << endl;

}

