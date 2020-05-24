/*
 * Kernel.h
 */

#ifndef _H_KERNEL
#define _H_KERNEL

#include <string>
#include <map>

#include "Plugin.h"
#include "TextServer.h"

using namespace std;

class Kernel
{
	private:
		//typedef map<string, Plugin*> tPluginMap;
		typedef map<string, Plugin> tPluginMap;

		tPluginMap m_LoadedPlugins;

		TextServer m_TextServer;
	public:
		Kernel();
		~Kernel();

		// load a plugin
		void loadPlugin(string strFilename);

		// return a reference to TextServer instance
		TextServer& getTextServer();
};

#endif // _H_KERNEL
