#include "MASTER.h"

void DCX(string arg,string registers[],bool flag[]){

	int length = arg.length();
	if(length != 1){
	
		if(validityRegister(arg)){
			
			int registerID = registerNumber(arg);
			if(registerID == 1 || registerID == 3 || registerID == 5){
			
				string data16bit = "";
				string temporary = "";	
				if(validityData(registers[registerID]) == true && validityData(registers[registerID+1]) == true){
					
					data16bit = data16bit + registers[registerID] + registers[registerID + 1];
					int value = hexSub16bit(data16bit,"0001",flag,false);
					temporary = decimalToHex(value);
					registers[registerID] = temporary[0] + temporary[1];		
					registers[registerID] = temporary[2] + temporary[3];
				}
				else{
					/*Error:Invalid data content in registers*/
				}
			}
			else{
				
				/*Error:Invaid register pair*/
			}
		}
		else{
			/*Error:Invalid register content*/ 
		}
	}
	else{
		/*Error:Invalid Input Argument*/
	}
}
