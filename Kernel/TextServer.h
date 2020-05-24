/*
 * TextServer.h
 */

#ifndef _H_TEXTSERVER
#define _H_TEXTSERVER

#include "TextDriver.h"
#include <vector>

using namespace std;

class TextServer
{
	private:
		typedef vector<TextDriver*> tTextDriverVector;

		// all Text Driver
		tTextDriverVector m_TextDrivers;
	public:
		TextServer();
		~TextServer();

		// add a driver to the list
		void addTextDriver(TextDriver *TD);

		// return a text driver
		TextDriver& getTextDriver(int index);

		// return the # of driver
		int getTextDriverCount() const;

};

#endif // _H_TEXTSERVER
