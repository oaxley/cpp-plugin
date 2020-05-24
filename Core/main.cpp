/*
 * main.cpp
 */

#include <stdexcept>
#include <string>

#include "GenericText.h"
#include "Kernel.h"

using namespace std;

int main(int argc, char *argv[])
{
	GenericText *myText;
	Kernel myKernel;
	try
	{
		myKernel.loadPlugin("English.dll");
		myKernel.loadPlugin("English.dll");

		string strName=myKernel.getTextServer().getTextDriver(0).getName();

		myText=myKernel.getTextServer().getTextDriver(0).createRenderer();
		myText->Message();
	} catch(const exception &Ex) {
		printf("Unhandled error: %s\n",Ex.what());
	}

	return 0;
}
