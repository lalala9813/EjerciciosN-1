#include "auxiliar.h"
#include <iostream>


void imprimir(int numberList[],int i){
	//CENTENAS
	if(numberList[i]==1){
		std::cout<<"CIEN";
		if(numberList[i+1]!=0 && numberList[i+2]!=0){
			std::cout<<"TO ";
		}
	}
	else if(numberList[i]==2){
		std::cout<<"DOSCIENTOS";
	}
	else if(numberList[i]==3){
		std::cout<<"TRESCIENTOS";
	}
	else if(numberList[i]==4){
		std::cout<<"CUATROCIENTOS";
	}
	else if(numberList[i]==5){
		std::cout<<"QUINIENTOS";
	}
	else if(numberList[i]==6){
		std::cout<<"SEISCIENTOS";
	}
	else if(numberList[i]==7){
		std::cout<<"SETECIENTOS";
	}
	else if(numberList[i]==8){
		std::cout<<"OCHOCIENTOS";
	}
	else if(numberList[i]==9){
		std::cout<<"NOVECIENTOS";
	}
	
	//DECENAS
	
	if(numberList[i+1]==1 && numberList[i+2]==0 ){
		std::cout<<" DIEZ";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==1){
		std::cout<<" ONCE";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==2){
		std::cout<<" DOCE";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==3){
		std::cout<<" TRECE";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==4){
		std::cout<<" CATORCE";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==5){
		std::cout<<" QUINCE";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==6){
		std::cout<<" DIECISEIS";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==7){
		std::cout<<" DIECISIETE";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==8){
		std::cout<<" DIECIOCHO";
	}
	else if(numberList[i+1]==1 && numberList[i+2]==9){
		std::cout<<" DIECINUEVE";
	}	
	else if(numberList[i+1]==2 && numberList[i+2]==0){
		std::cout<<" VEINTE";
	}
	else if(numberList[i+1]==2 && numberList[i+2]!=0){
		std::cout<<" VEINTI";
	}
	else if(numberList[i+1]==3){
		std::cout<<" TREINTA";
		if(numberList[i+2]>0){
			std::cout<<" Y ";
		}
	}
	else if(numberList[i+1]==4){
		std::cout<<" CUARENTA";
		if(numberList[i+2]>0){
			std::cout<<" Y ";
		}
	}
	else if(numberList[i+1]==5){
		std::cout<<" CINCUENTA";
		if(numberList[i+2]>0){
			std::cout<<" Y ";
		}
	}
	else if(numberList[i+1]==6){
		std::cout<<" SESENTA";
		if(numberList[i+2]>0){
			std::cout<<" Y ";
		}
	}
	else if(numberList[i+1]==7){
		std::cout<<" SETENTA";
		if(numberList[i+2]>0){
			std::cout<<" Y ";
		}
	}
	else if(numberList[i+1]==8){
		std::cout<<" OCHENTA";
		if(numberList[i+2]>0){
			std::cout<<" Y ";
		}
	}
	else if(numberList[i+1]==9){
		std::cout<<" NOVENTA";
		if(numberList[i+2]>0){
			std::cout<<" Y ";
		}
	}
	//UNIDADES
	if(numberList[i+1]!=1 && numberList[i+2]==1){
		std::cout<<"UNO";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==2){
		std::cout<<"DOS";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==3){
		std::cout<<"TRES";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==4){
		std::cout<<"CUATRO";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==5){
		std::cout<<"CINCO";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==6){
		std::cout<<"SEIS";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==7){
		std::cout<<"SIETE";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==8){
		std::cout<<"OCHO";
	}
	else if(numberList[i+1]!=1 && numberList[i+2]==9){
		std::cout<<"NUEVE";
	}
}
