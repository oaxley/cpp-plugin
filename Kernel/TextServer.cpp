/*
 * TextServer.cpp
 */

#include "TextServer.h"

// ctor
TextServer::TextServer()
{
}

// dtor
TextServer::~TextServer()
{
    // delete all drivers registered
	for( tTextDriverVector::reverse_iterator It=m_TextDrivers.rbegin(); It != m_TextDrivers.rend(); ++It)
		delete *It;
}

// add a driver to the list
void TextServer::addTextDriver(TextDriver *TD)
{
	// add the element at the end of the vector
	m_TextDrivers.push_back(TD);
}

// return a text driver
TextDriver& TextServer::getTextDriver(int index)
{
	// return a ptr to the text driver
	return *m_TextDrivers.at(index);
}

// return the # of driver
int TextServer::getTextDriverCount() const
{
	return m_TextDrivers.size();
}
