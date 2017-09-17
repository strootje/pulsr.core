#ifndef __PULSRCORE_EVENTS_WINDOWCLOSEDEVENT__H__
#define __PULSRCORE_EVENTS_WINDOWCLOSEDEVENT__H__

#include "./WindowClosedEventArgs.hpp"
#include "./../Window/Window.Fwd.hpp"
#include "./../Event.hpp"

namespace Pulsr::Core::Events
{
	class WindowClosedEvent : public Event<WindowClosedEventArgs>
	{
		friend class Window::Window;
	};
}

#endif
