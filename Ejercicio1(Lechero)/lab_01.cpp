#include "lab_01.h"
#include <iostream>

using namespace std;

void calcularBotellas(int botellas){
    int sevenLitros = botellas / 7;
    cout << "7 L: " << sevenLitros << endl;
    botellas = botellas - (sevenLitros * 7);
    int fiveLitros = botellas / 5;
    cout << "5 L: " << fiveLitros << endl;
    botellas = botellas - (fiveLitros * 5);
    int threeLitros = botellas / 3;
    cout << "3 L: " << threeLitros << endl;
    botellas = botellas - (threeLitros * 3);
    cout << "1 L: " << botellas << endl;
}
