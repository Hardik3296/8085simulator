#include "MASTER.h"

void ADI(string arg, string registers[],bool flag[]){

	int length = arg.length();
	if(length == 2){
	
		if(validityData(arg)){
			
			/*Performs immediate subtraction and stores in accumulator*/
			int value = hexSub(arg,registers[0],flag,true);
			registers[0] = decimalToHex(value);
		}
		else{
			/*Error message of invalid data content*/
		}
	}
	else{
		/*Error message of invalid data size*/
	}
	
}
