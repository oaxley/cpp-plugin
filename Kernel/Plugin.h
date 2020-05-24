/*
 * Plugin.h
 */

#ifndef _H_PLUGIN
#define _H_PLUGIN

#include <string>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "Macros.h"

using namespace std;

class Kernel;

class Plugin
{
	private:
		Plugin& operator=(const Plugin&);

		HMODULE m_hDll;

		int *m_pCounter;

		// function prototype typedef
		typedef void fnRegisterPlugin(Kernel &);

		// ptr to hold the register function for this plugin
		fnRegisterPlugin *m_pfnRegisterPlugin;
	public:
		Plugin(string strFilename);
		~Plugin();

		// copy constructor
		Plugin(const Plugin& other);

		// register a plugin
		void registerPlugin(Kernel &K);

};

#endif // _H_PLUGIN
