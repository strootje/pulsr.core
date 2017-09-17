#ifndef __PULSRCORE_WINDOW_WINDOW__H__
#define __PULSRCORE_WINDOW_WINDOW__H__

#include "./../Events/WindowClosedEvent.hpp"
#include "./../Events/WindowClosedEventArgs.hpp"
#include "./../Events/WindowOpenedEvent.hpp"
#include "./../Events/WindowOpenedEventArgs.hpp"
#include "./Window.Fwd.hpp"
#include <Grawlog/Logger.hpp>
#include <string>

namespace Pulsr::Core::Window
{
	class Window
	{
	public:
		Events::WindowClosedEvent OnClose;
		Events::WindowOpenedEvent OnOpen;

	public:
		Window( const std::string& name );
		virtual ~Window();
		void Dispose();
		virtual void Open();
		virtual void Close();

	protected:
		const std::string _name;
	};
}

#endif
