#ifndef __PULSR_CORE_KERNEL_WINDOWMANAGER__H__
#define __PULSR_CORE_KERNEL_WINDOWMANAGER__H__

#include <string>

namespace Pulsr { namespace Core { namespace Kernel
{
	class WindowManager
	{
	public:
		virtual void Create( const std::string& name ) = 0;
		virtual bool HasWork() = 0;
		virtual void Update() = 0;
	};
}}}

#endif
