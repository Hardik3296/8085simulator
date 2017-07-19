#include "MASTER.h"

void ADD(string arg1,string registers[],bool flag[],map<string,string>&memory){
	
	int length=arg1.length();
	if(length == 1){
		
		if(validityRegisters(arg1)){
			
			if(arg1 != "M"){
			
				/*Fetches index of register to access array string registers[]*/
				int registerID = registerNumber(arg1);                           
				int value = hexAdd(registers[registerID],registers[0],flag);
				/*Converting decimal value to string format and storing in accumulator*/
				registers[0] = decimalToHex(value);
			}
			else{                         
		
				/*Fetches data of HL pair*/
				string address = "";
				address = address + registers[5] + registers[6];
				if(address >= "2000" && address <= "4000"){
				
					int value = hexAdd(memory[address],registers[0],flag);				
					/*Converting decimal value to string format and storing in accumulator*/
					registers[0] = decimalToHex(value);
				}
				else{
					/*error message of address out of bounds*/
				}						
			}
		}
		else{
			/*error of invalid register details*/
		}
	}
	else{
		/*Error message of invalid arguments*/
	}
}
