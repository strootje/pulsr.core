#ifndef __PULSRCORE_WINDOW_MANAGER__H__
#define __PULSRCORE_WINDOW_MANAGER__H__

#include "./Window.hpp"
#include <string>

namespace Pulsr::Core::Window
{
	class Manager
	{
	public:
		Manager();
		virtual ~Manager();
		void Dispose();
		virtual void Create( const std::string& name ) = 0;
		virtual bool HasWork() = 0;
		virtual void Update() = 0;
		
	protected:
		virtual void OnWindowOpen( const Events::WindowOpenedEventArgs& args );
		virtual void OnWindowClose( const Events::WindowClosedEventArgs& args );
	};
}

#endif
