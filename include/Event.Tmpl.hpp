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
		DLOGEVT(INFO, CONSTRUCT);
	}

	template<typename Args>
	Event<Args>::~Event()
	{
		DLOGEVT(INFO, DESTRUCT);
		Dispose();
	}

	template<typename Args>
	void Event<Args>::Dispose()
	{
		DLOGEVT(INFO, DISPOSE);
	}

	template<typename Args>
	void Event<Args>::operator+=( const Delegate& delegate )
	{
		DLOGEVT(INFO, CALL);
		_delegates.push_back(delegate);
	}

	template<typename Args>
	void Event<Args>::operator()( const Args& args )
	{
		DLOGEVT(INFO, CALL);
		std::for_each(_delegates.begin(), _delegates.end(), [args]( const auto& delegate )
		{
			delegate(args);
		});
	}
}

#endif
