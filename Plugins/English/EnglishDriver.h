/*
 * EnglishDriver.h
 */
 
#ifndef _H_ENGLISHDRIVER
#define _H_ENGLISHDRIVER

#include <string>
#include "Macros.h"
#include "TextDriver.h"
#include "EnglishText.h"
#include "GenericText.h"

using namespace std;

class EnglishDriver : public TextDriver
{
	private:
	
	public:
		EnglishDriver();
		_EXPORT_API virtual ~EnglishDriver();
		
		_EXPORT_API const string& getName() const;
		GenericText* createRenderer();
};

#endif // _H_ENGLISHDRIVER
