#ifndef __PULSRCORE_EVENTS_WINDOWOPENEDEVENT__H__
#define __PULSRCORE_EVENTS_WINDOWOPENEDEVENT__H__

#include "./WindowOpenedEventArgs.hpp"
#include "./../Window/Window.Fwd.hpp"
#include "./../Event.hpp"

namespace Pulsr::Core::Events
{
	class WindowOpenedEvent : public Event<WindowOpenedEventArgs>
	{
		friend class Window::Window;
	};
}

#endif
