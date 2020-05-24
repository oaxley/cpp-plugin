/*
 * TextDriver.h
 */
 
#ifndef _H_TEXTDRIVER
#define _H_TEXTDRIVER

#include "GenericText.h"
#include <string>

using namespace std;

class TextDriver
{
	private:
	
	public:
		TextDriver() {};
		virtual ~TextDriver() {};

		// name of the driver
		virtual const string& getName() const = 0;
		
		// driver are in charge of creating renderer
		virtual GenericText* createRenderer() = 0;
};

#endif // _H_TEXTDRIVER
