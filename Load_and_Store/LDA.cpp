#include"MASTER.h"
void LDA (string arg1,string registers[],bool flag[],map<string,string> &memory)
{
	int l1=arg1.length();
	if(l1==4)
	{
		if(validityAddress(arg1))
			registers[0]=memory[arg1];
		else
			//error!!!!!!!!!!!!
	}
	else
		//error!!!!!!!!!!!!!
}
