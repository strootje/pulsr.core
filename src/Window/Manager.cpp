#include "./Window/Manager.hpp"

namespace Pulsr::Core::Window
{
	Manager::Manager()
	{
		DLOGEVT(INFO, CONSTRUCT);
	}

	Manager::~Manager()
	{
		DLOGEVT(INFO, DESTRUCT);
		Dispose();
	}

	void Manager::Dispose()
	{
		DLOGEVT(INFO, DISPOSE);
	}
	
	void Manager::OnWindowOpen( const Events::WindowOpenedEventArgs& args )
	{
		DLOGEVT(INFO, CALL);
	}

	void Manager::OnWindowClose( const Events::WindowClosedEventArgs& args )
	{
		DLOGEVT(INFO, CALL);
	}
}
