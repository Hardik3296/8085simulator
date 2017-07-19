#include"master.h"

void MOV (string argument1,string argument2,string registers[],bool flags[],map<string,string> &memory)
{
	int l1=argument1.length();
	int l2=argument2.length();
	if(l1==1&&l2==1)
	{
		if(validityRegisters(argument1)&&validityRegisters(argument2))
			registers[registerNumber(argument1)]=registers[registerNumber(argument2)];
		else
			//error!!!!!!!!!!!!!!!!!!
	}
	else if(l1==4&&l2==1)
	{
		if(validityAddress(argument1)&&validityRegisters(argument2))
			memory[argument1]=registers[registerNumber(argument2)];
		else
			//error!!!!!!!!!!!!!!!!
	}
	else if(l1==1&&l2==4)
	{
		if(validityRegisters(argument1)&&validityAddress(arguent2))
			registers[registerNumber(argument1)]=memory[argument2];
		else
			//error!!!!!!!!!!!!!!!!!!!!!!!!!!!
	}
	else
		//error!!!!!!!!!!!!!!!!!!!!!
}
