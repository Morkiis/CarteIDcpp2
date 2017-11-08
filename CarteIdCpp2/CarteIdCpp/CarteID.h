#pragma once
#include <iostream>
#include <string>

using namespace std;

class CarteID
{
	//Données membres
	string ID, nom, prenom, adresse, cp, ville;

public:
	CarteID();
	//SETTER
	void setID(string mID);
	void setnom(string mNom);
	void setprenom(string mPrenom);
	void setadresse(string mAdresse);
	void setCP(string mCP);
	void setcp(string mCp);
	void setville(string mVille);

	//GETTER
	string getID() const;
	string getnom()const;
	string getprenom()const;
	string getadresse()const;
	string getCP() const;
	string getcp()const;
	string getville()const;

	void setID(int mID);

	void ajouter(string mID, string mNom, string mPrenom, string mAdresse, string mCp, string mVille);
	void afficher() const;
	void modifier();
	~CarteID();
};