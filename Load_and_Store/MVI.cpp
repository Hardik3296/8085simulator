#include"MASTER.h"
void MVI (string arg1,string arg2,string registers[],bool flags[],map<string,string> &memory)
{
	int l1=arg1.length();
	int l2=arg2.length();
	if(l1==1&&l2==2)
	{
		if(validityRegisters(arg1)&&validityData(arg2))
			registers[registerNumber(arg1)]=arg2;
		else
			//error!!!!!!!!!!!!!!
	}
	else if(l1==4&&l2==2)
	{
		if(validityAddress(arg1)&&validityData(arg2))
			memory[arg1]=arg2;
		else
			//error!!!!!!!!!!!!!!
	}
	else
		//error!!!!!!!!!!!!!!!
}
