#include "./Window/Window.hpp"

namespace Pulsr::Core::Window
{
	Window::Window( const std::string& name )
		: _name(name)
		, OnOpen(Events::WindowOpenedEvent())
		, OnClose(Events::WindowClosedEvent())
	{
		DLOG(DIAG);
	}

	Window::~Window()
	{
		DLOG(DIAG);
		Dispose();
	}

	void Window::Dispose()
	{
		DLOG(DIAG);
	}

	void Window::Open()
	{
		DLOG(DIAG);
		OnOpen(Events::WindowOpenedEventArgs(_name));
	}

	void Window::Close()
	{
		DLOG(DIAG);
		OnClose(Events::WindowClosedEventArgs(_name));
	}
}
