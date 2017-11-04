#ifndef __PULSRCORE_EVENTS_WINDOWCLOSEDEVENTARGS__H__
#define __PULSRCORE_EVENTS_WINDOWCLOSEDEVENTARGS__H__

#include <Grawlog/Logger.hpp>
#include <string>

namespace Pulsr::Core::Events
{
	class WindowClosedEventArgs
	{
	public:
		const std::string name;
		WindowClosedEventArgs( const std::string& name );
	};
}

#endif
