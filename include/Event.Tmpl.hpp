#ifndef __PULSRCORE_EVENTTMPL__H__
#define __PULSRCORE_EVENTTMPL__H__

#include <algorithm>
#include <functional>
#include <Grawlog/Logger.hpp>
#include <list>

namespace Pulsr::Core
{
	template<typename Args>
	Event<Args>::Event()
		: _delegates(DelegateList())
	{
		DLOG(DIAG);
	}

	template<typename Args>
	Event<Args>::~Event()
	{
		DLOG(DIAG);
		Dispose();
	}

	template<typename Args>
	void Event<Args>::Dispose()
	{
		DLOG(DIAG);
	}

	template<typename Args>
	void Event<Args>::operator+=( const Delegate& delegate )
	{
		DLOG(DIAG);
		_delegates.push_back(delegate);
	}

	template<typename Args>
	void Event<Args>::operator()( const Args& args )
	{
		DLOG(DIAG);
		std::for_each(_delegates.begin(), _delegates.end(), [args]( const auto& delegate )
		{
			delegate(args);
		});
	}
}

#endif
