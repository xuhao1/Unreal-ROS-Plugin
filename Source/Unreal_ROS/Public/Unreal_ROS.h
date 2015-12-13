#ifndef __CppTestADV_H__
#define __CppTestADV_H__

#include "ModuleManager.h"


/**
* The public interface to this module
*/
class IROSPlugin : public IModuleInterface
{

public:

	/**
	* Singleton-like access to this module's interface.  This is just for convenience!
	* Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	*
	* @return Returns singleton instance, loading the module on demand if needed
	*/
	static inline IROSPlugin& Get()
	{
		return FModuleManager::LoadModuleChecked< IROSPlugin >("Unreal_ROS");
	}

	/**
	* Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	*
	* @return True if the module is loaded and ready to use
	*/
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("Unreal_ROS");
	}
};




#endif
