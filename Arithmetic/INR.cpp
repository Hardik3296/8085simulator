#include "MASTER.h"

void INR(string arg,string registers[],bool flag[],map<string,string>&memory){

	int length = arg.length();
	if(length == 1){
	
		if(validityRegister(arg)){
		
			if(arg != "M"){
				
				/*Performs INR on a register*/
				int registerID = registerNumber(arg);
				int value = hexAdd(registers[registerID],"01",flag,false);
				registers[registerID] = decimalToHex(value); 
			}
			else{
				/*Performs DCR on HL pair*/
				string address = "";
				address = address + registers[5] + registers[6];
				if(address >= "2000" && address <= "4000"){
				
					int value = hexAdd(memory[address],"01",flag,false);
					memory[address] = decimalToHex(value);
				}
				else{
					/*Error:Address out of bounds*/
				}
			}
		}
		else{
			/*Error:Invalid Register*/
		}
	}
	else{
		/*Error: Invalid argument type*/
	}
}
