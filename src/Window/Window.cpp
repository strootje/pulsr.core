#include "./Window/Window.hpp"

namespace Pulsr::Core::Window
{
	Window::Window( const std::string& name )
		: _name(name)
		, OnOpen(Events::WindowOpenedEvent())
		, OnClose(Events::WindowClosedEvent())
	{
		DLOGEVT(INFO, CONSTRUCT);
	}

	Window::~Window()
	{
		DLOGEVT(INFO, DESTRUCT);
		Dispose();
	}

	void Window::Dispose()
	{
		DLOGEVT(INFO, DISPOSE);
	}

	void Window::Open()
	{
		DLOGEVT(INFO, CALL);
		OnOpen(Events::WindowOpenedEventArgs(_name));
	}

	void Window::Close()
	{
		DLOGEVT(INFO, CALL);
		OnClose(Events::WindowClosedEventArgs(_name));
	}
}
