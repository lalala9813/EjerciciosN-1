// istream::get example
#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream
#include "inverso.h"
#include "cifrado.h"

using namespace std;
int main () {
	Cifrado miCifrado;
	miCifrado.cifrar();
	miCifrado.descifrar();
	return 0;
}
