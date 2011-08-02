#include "glwplugin.h"
#include <stdio.h>

static NPNetscapeFuncs* browserFuncs = NULL;

NP_EXPORT(char*) 
NP_GetPluginVersion(){
	return "0.0.0.1";
}

NP_EXPORT(const char*) 
NP_GetMIMEDescription(){
	return "application/x-glwplugin-browser:glw:GLWEngine";
}

NP_EXPORT(NPError) 
NP_Initialize(NPNetscapeFuncs* bFuncs, NPPluginFuncs* pluginFuncs){
	browserFuncs = bFuncs;
	
	
	printf("GLWPlugin Initialized.\n");
	return NPERR_NO_ERROR;
}

NP_EXPORT(NPError) 
NP_Shutdown(){
	printf("GLWPlugin Shutdown.\n");
	return NPERR_NO_ERROR;
}

NP_EXPORT(NPError)
NP_GetValue(void* future, NPPVariable aVariable, void* aValue) {
  switch (aVariable) {
    case NPPVpluginNameString:
      *((char**)aValue) = "GLWiki Browser Plugin";
      break;
    case NPPVpluginDescriptionString:
      *((char**)aValue) = "GLWiki Browser Plugin";
      break;
    default:
      return NPERR_INVALID_PARAM;
      break;
  }
  return NPERR_NO_ERROR;
}

NPError NPP_New(NPMIMEType pluginType, NPP instance, uint16_t mode, int16_t argc, char* argn[], char* argv[], NPSavedData* saved){
	printf("GLWPlugin: NPP_New called\n");
	NPBool browserSupportsWindowless = false;

	browserFuncs->getvalue(instance, NPNVSupportsWindowless, &browserSupportsWindowless);
	if(!browserSupportsWindowless){
		printf("Windowless mode not supported by the browser\n");
		return NPERR_GENERIC_ERROR;
	}
	
	browserFuncs->setvalue(instance, NPPVpluginWindowBool, (void*) false);
	
	
	return NPERR_NO_ERROR;
}

NPError NPP_GetValue(NPP instance, NPPVariable var, void* value){
	
	if(var == NPPVpluginScriptableNPObject){
		printf("BROWSER WANTS SHIT");
	}	

	return NPERR_NO_ERROR;
}
