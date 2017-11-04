#include "./Window/Manager.hpp"

namespace Pulsr::Core::Window
{
	Manager::Manager()
	{
		DLOG(DIAG);
	}

	Manager::~Manager()
	{
		DLOG(DIAG);
		Dispose();
	}

	void Manager::Dispose()
	{
		DLOG(DIAG);
	}
	
	void Manager::OnWindowOpen( const Events::WindowOpenedEventArgs& args )
	{
		DLOG(DIAG);
	}

	void Manager::OnWindowClose( const Events::WindowClosedEventArgs& args )
	{
		DLOG(DIAG);
	}
}
