#include "inverso.h"
#include <iostream>
#include <vector>
void Calculadora::suma(int op1, int op2, int module){
	int temp=op1+op2;
	temp=temp%module;
	if(temp<0)
		temp=module+temp;
	std::cout<<temp<<"mod"<<module<<std::endl;
}

int Calculadora::resta(int op1,int op2,int module){
	int temp=op1-op2;
	temp=temp%module;
	if(temp<0)
		temp=module+temp;
	//std::cout<<temp<<"mod"<<module<<std::endl;
	return temp;
}

void Calculadora::multi(int op1,int op2,int module){
	int temp=op1*op2;
	temp=temp%module;
	if(temp<0)
		temp=module+temp;
	std::cout<<temp<<"mod"<<module<<std::endl;
}

int Calculadora::inversa(int op1,int module){
	std::vector <int> coeficientes;
	int mod=module;
	bool exist=false;
	//divisiones sucesivas y almacenamiento en el vector
	while(module%op1!=0){
		if(module%op1==1){
			exist=true;
		}
		coeficientes.push_back(module/op1);
		int aux=op1;
		op1=module%op1;
		module=aux;			
	}
	if(!exist){
		std::cout<<"El modulo no existe"<<std::endl;
		return 0;
	}
//	std::cout<<std::endl;
	//euclides ++
	int inv = euclidespp(coeficientes,coeficientes.size()+1);
	return inv;
}

int Calculadora::euclidespp(std::vector<int> coeficientes,int i){
	if(i==0){
		return 0;
	}
	if(i==1){
		return 1;
	}
	return euclidespp(coeficientes,i-2) - (euclidespp(coeficientes,i-1)*coeficientes[i-2]);
}


void Calculadora::select(){
	int op;
	std::cout<<"Selecciona la operación:"<<std::endl;
	std::cout<<"1 Suma"<<std::endl;
	std::cout<<"2 Resta"<<std::endl;
	std::cout<<"3 Multiplicación"<<std::endl;
	std::cout<<"4 Inversa"<<std::endl;
	std::cin>>op;
	
	int op1,op2,module;
	if(op==1){
		std::cout<<"Ingrese primer operador:  ";
		std::cin>>op1;
		std::cout<<"Ingrese segundo operador:  ";
		std::cin>>op2;
		std::cout<<"Ingrese módulo:  ";
		std::cin>>module;
		suma(op1,op2,module);
	}
	
	if(op==2){
		std::cout<<"Ingrese primer operador:  ";
		std::cin>>op1;
		std::cout<<"Ingrese segundo operador:  ";
		std::cin>>op2;
		std::cout<<"Ingrese módulo:  ";
		std::cin>>module;
		resta(op1,op2,module);
	}
	
	if(op==3){
		std::cout<<"Ingrese primer operador:  ";
		std::cin>>op1;
		std::cout<<"Ingrese segundo operador:  ";
		std::cin>>op2;
		std::cout<<"Ingrese módulo:  ";
		std::cin>>module;
		multi(op1,op2,module);
	}
	
	if(op==4){
		std::cout<<"Ingrese primer operador:  ";
		std::cin>>op1;		
		std::cout<<"Ingrese modulo:  ";
		std::cin>>module;
		inversa(op1,module);
	}
	
	
}
