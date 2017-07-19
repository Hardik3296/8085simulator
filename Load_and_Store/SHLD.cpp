#include"MASTER.h"
void SHLD (string arg1, string registers[],bool flag[], map<string,string> &memory)
{
	int l1=arg1.length();
	if(l1==4)
	{
		if(validityAddress(arg1)&&validityAddress(increaseAddress(arg1)))
		{
			memory[arg1]=registers[6];
			memory[increaseAddress(arg1)]=registers[5];
		}
		else
			//error!!!!!!!!!!!!!!
	}
	else
		//error!!!!!!!!!!!!!!!!!
}
