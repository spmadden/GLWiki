#ifndef _glplugin_h_
#define _glplugin_h_

#include "npapi/npapi.h"
#include "npapi/npfunctions.h"

NPError NP_Initialize(NPNetscapeFuncs* browserFunctions, NPPluginFuncs* pluginFunctions);
NPError NP_Shutdown();

NPError NP_GetValue(void* future, NPPVariable var, void* val);
NPError NPP_New(NPMIMEType pluginType, NPP instance, uint16_t mode, int16_t argc, char* argn[], char* argv[], NPSavedData* saved);


#endif //_glplugin_h_
