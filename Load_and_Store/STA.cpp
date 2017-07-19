#include"MASTER.h"
void STA (string arg1,string registers[],string flag[],map<string,string> &memory)
{
	int l1=arg1.length();
	if(l1==4)
	{
		if(validityAddress(arg1))
			memory[arg1]=registers[0];
		else
			//error!!!!!!!!!!!!!
	}
	else
		//error!!!!!!!!!!!!!
}
