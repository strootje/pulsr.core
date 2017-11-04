#include "./Events/WindowClosedEventArgs.hpp"

namespace Pulsr::Core::Events
{
	WindowClosedEventArgs::WindowClosedEventArgs( const std::string& name )
		: name(name)
	{
		DLOG(DIAG);
	}
}
