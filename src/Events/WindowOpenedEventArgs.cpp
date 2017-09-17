#include "./Events/WindowOpenedEventArgs.hpp"

namespace Pulsr::Core::Events
{
	WindowOpenedEventArgs::WindowOpenedEventArgs( const std::string& name )
		: name(name)
	{
	}
}
