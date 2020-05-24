/*
 * Kernel.cpp
 */

#include "Kernel.h"

// ctor
Kernel::Kernel()
{
}

// dtor
Kernel::~Kernel()
{
}

// load a plugin
void Kernel::loadPlugin(string strFilename)
{
    // check if the plugin is not already loaded
    if( m_LoadedPlugins.find(strFilename) == m_LoadedPlugins.end() ) {
        // insert and register the plugin
        // the insert return a pair<Iterator,bool> on the new element inserted
        // the Iterator->second is the plugin newly inserted
        m_LoadedPlugins.insert(tPluginMap::value_type(strFilename,Plugin(strFilename))).first->second.registerPlugin(*this);
	}
/*	else {
		cout << "Plugin already loaded !" << endl;
	}*/
}

// return a reference to TextServer
TextServer& Kernel::getTextServer()
{
	return m_TextServer;
}
