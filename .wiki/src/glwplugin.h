#ifndef _glplugin_h_
#define _glplugin_h_

#include "npapi/npapi.h"
#include "npapi/npfunctions.h"

NPError NP_Initialize(NPNetscapeFuncs* browserFunctions, NPPluginFuncs* pluginFunctions);
NPError NP_Shutdown();




#endif //_glplugin_h_
