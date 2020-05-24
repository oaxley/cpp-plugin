/*
 * EnglishDriver.cpp
 */

#include <string>
#include "EnglishDriver.h"

using namespace std;

// ctor
EnglishDriver::EnglishDriver()
{
}

// dtor
EnglishDriver::~EnglishDriver()
{
}

// return the name of the driver
const string& EnglishDriver::getName() const
{
	static string name="English Driver";
	return name;
}

// create a renderer
GenericText* EnglishDriver::createRenderer()
{
	return (new EnglishText());
}
