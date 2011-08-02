#include "glwplugin.h"
#include <stdio.h>

NPError NP_Initialize(NPNetscapeFuncs* browserFuncs, NPPluginFuncs* pluginFuncs){
	printf("GLWPlugin Initialized.\n");
}

NPError NP_Shutdown(){
	printf("GLWPlugin Shutdown.\n");
}
