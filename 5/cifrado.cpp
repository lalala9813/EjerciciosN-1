#include <fstream>
#include <iostream>
#include <string>
#include "inverso.h"
#include "cifrado.h"

void Cifrado::cifrar(){
	char ruta[256];
	cout << "Archivo?";
	cin >> ruta;
	cout << "ClavePublica?";
	int clavePublica;
	cin >> clavePublica;
	ifstream plain(ruta);
	ofstream cipher("cipher.txt");
	char c;
	Calculadora miCalculadora;
	while(plain.get(c)){
		int aux;
		aux = c;
		int aTransformar = aux * clavePublica; //sino se resta hay un riesgo que quede negativo
		aTransformar = miCalculadora.resta(aTransformar,0,256);
		char aInsertar = aTransformar;
		cipher << aInsertar;
	}
	plain.close();
	cipher.close();
	cout << "Archivo creado!" << endl;
	cout << "clavePublica: " << clavePublica << endl;
}

void Cifrado::descifrar(){
	char ruta[256];
	cout << "ArchivoCifrado?";
	cin >> ruta;
	cout << "Clave Publica?";
	int clavePublica;
	cin>> clavePublica;
	ifstream cipher(ruta);
	ofstream plain("plain2.txt");
	char c;
	Calculadora miCalculadora;
	while(cipher.get(c)){
		int aux;
		aux = c;
		int clavePrivada = miCalculadora.inversa(clavePublica,256);
		int aRecibir = aux * clavePrivada;//si no se resta hay riesgo que quede negativo
		aRecibir = miCalculadora.resta(aRecibir,0,256);
		char aMandar = aRecibir;
		plain << aMandar;	
  }
	cipher.close();
	plain.close();
	cout << "Archivo creado!" << endl;
}
