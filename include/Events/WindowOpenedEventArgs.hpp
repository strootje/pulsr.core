#ifndef __PULSRCORE_EVENTS_WINDOWOPENEDEVENTARGS__H__
#define __PULSRCORE_EVENTS_WINDOWOPENEDEVENTARGS__H__

#include <Grawlog/Logger.hpp>
#include <string>

namespace Pulsr::Core::Events
{
	class WindowOpenedEventArgs
	{
	public:
		const std::string name;
		WindowOpenedEventArgs( const std::string& name );
	};
}

#endif
