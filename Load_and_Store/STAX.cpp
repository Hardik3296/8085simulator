#include"MASTER.h"
void STAX(string arg1,string registers[],bool flag[],map<string,string> &memory)
{
	int l1=arg1.length();
	if(l1==1)
	{
		if(validityRegisterPair(arg1))
		{
			string address="";
			int index=registerNumber(arg1);
			address+=registers[index]+registers[index+1];
			if(validityAddress(address))
				memory[address]=registers[0];
			else
				//error!!!!!!!!!!!!!
		}
		else
			//error!!!!!!!!!!!11
	}
	else
		//error!!!!!!!!!!!!!!
}
