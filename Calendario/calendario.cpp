#include <iostream>
using namespace std;

string nombreMes(int mes)
{
	switch(mes){
		case 1:
			return "Enero";
		case 2:
			return "Febrero";
		case 3:
			return "Marzo";
		case 4:
			return "Abril";
		case 5:
			return "Mayo";
		case 6:
			return "Junio";
		case 7:
			return "Julio";
		case 8:
			return "Agosto";
		case 9:
			return "Setiembre";
		case 10:
			return "Octubre";
		case 11:
			return "Noviembre";
		default:
			return "Diciembre";
	}
}

bool esBisiesto(int anio)
{
	if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Devuelve  
// 0 = Domingo, 1 = Lunes, 2 = Martes, 3 = Miercoles,  
// 4 = Jueves, 5 = Viernes, 6 = Sábado 
int zeller(int anio, int mes) 
{ 
	int a = (14 - mes) / 12; 
	int y = anio - a; 
	int m = mes + 12 * a - 2; 
	int dia = 1, d; 
	d = (dia + y + y / 4 - y / 100 + y / 400 + 
		 (31 * m) / 12) % 7; 
	return d; 
} 

int calcularDiaMes(int anio, int mes)
{
	if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 
	   || mes == 12)
	{
		return 31;
	}
	if(mes == 2)
	{
		if(esBisiesto(anio))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	return 30;
}

void calendario(int anio, int mes1)
{
	for(int mes = mes1; mes <= mes1; mes++)
	{
		cout << "Mes: " << nombreMes(mes) << endl;
		cout << "Dom Lun Mar Mie Jue Vie Sab\n";
		int z = zeller(anio, mes);
		for(int i = 0; i < z; i++)
		{
			cout << "    ";
		}
		int diasMes = calcularDiaMes(anio, mes);
		for(int dia = 1; dia <= diasMes; dia++)
		{
			printf("%3d ", dia);
			z++;
			if(z % 7 == 0)
			{
				cout << "\n";
			}
		}
		cout << "\n\n";
	}
}

int main() 
{
	int anio;
	cout << "Anio -> ";
	cin >> anio;
	int mes1;
	cout << "Mes -> ";
	cin >> mes1;
	
	calendario(anio, mes1);
	return 0;
}

