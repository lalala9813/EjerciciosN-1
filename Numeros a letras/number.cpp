#include <iostream>
#include "number.h"
#include "auxiliar.h"

void Converter::setNumber(){
	unsigned long long int temp;
	std::cin>>temp;
	number = temp;
}

void Converter::convertNumber(){	
	
	for(int i=0;i<12;i++){
		numberList[i]=(number/tenmulti[i])%10;
	}	
}

void Converter::printNumber(){	
	//MIL MILLONES
	imprimir(numberList,0);
	if(numberList[0]!=0 || numberList[1]!=0 || numberList[2]!=0){
		std::cout<<" MIL ";
	}
	imprimir(numberList,3);
	if(numberList[3]!=0 || numberList[4]!=0 || numberList[5]!=0 ||
	   numberList[0]!=0 || numberList[1]!=0 || numberList[2]!=0){
		std::cout<<" MILLONES ";
	}
	imprimir(numberList,6);
	if(numberList[6]!=0 || numberList[7]!=0 || numberList[8]!=0){
		std::cout<<" MIL ";
	}
	imprimir(numberList,9);
	
	
	
}


