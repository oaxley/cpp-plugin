/*
 * Plugin.cpp
 */

#include <stdexcept>
#include "Plugin.h"

using namespace std;

// ctor
Plugin::Plugin(string strFilename) :
	m_hDll(0), m_pCounter(0), m_pfnRegisterPlugin(0)
{
	m_hDll=LoadLibrary(strFilename.c_str());
	if( !m_hDll )
		throw runtime_error(string("Unable to load plugin [") + strFilename + "]");

	try
	{
		// try to found the registerPlugin function
		m_pfnRegisterPlugin=reinterpret_cast<fnRegisterPlugin*>(GetProcAddress(m_hDll,"registerPlugin"));

        // check if the function has been found
		if( !m_pfnRegisterPlugin )
			throw runtime_error(string("Could not fount the registerPlugin function !!!"));

        // create the counter
        m_pCounter=new int(1);
	} catch(...) {
		FreeLibrary(m_hDll);
		throw;
	}
}


// dtor
Plugin::~Plugin()
{
    // free the library only if nobody uses it anymore
    if( !--*m_pCounter ) {
        FreeLibrary(m_hDll);
        m_hDll=0;
    }
}

// copy constructor
Plugin::Plugin(const Plugin& other) :
	m_hDll(other.m_hDll), m_pCounter(other.m_pCounter), m_pfnRegisterPlugin(other.m_pfnRegisterPlugin)
{
    // increase the number of use
	++*m_pCounter;
}

// register a plugin
void Plugin::registerPlugin(Kernel &K)
{
	// call the registered function
	m_pfnRegisterPlugin(K);
}
