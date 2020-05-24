/*
 * English.cpp
 */

#include "Macros.h" 
#include "Kernel.h"
#include "EnglishDriver.h"

// register the plugin on the Kernel
extern "C" _EXPORT_API void registerPlugin(Kernel &K)
{
  // this is a TextDriver binded on the TextServer
  K.getTextServer().addTextDriver(new EnglishDriver());
}
