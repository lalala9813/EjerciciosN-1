#ifndef NUMBER_H
#define NUMBER_H

class Converter{
private:
	unsigned long long int number;
	int numberList[12];
	unsigned long long int tenmulti[12]={100000000000,10000000000,1000000000,100000000,10000000,1000000,100000,10000,1000,100,10,1};
public:	
	
	void setNumber();	
	void convertNumber();
	void printNumber();
	
};
#endif
