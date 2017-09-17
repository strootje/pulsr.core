#ifndef __PULSRCORE_EVENT__H__
#define __PULSRCORE_EVENT__H__

#include <functional>
#include <list>

namespace Pulsr::Core
{
	template<typename Args>
	class Event
	{
	private:
		typedef std::function<void(const Args&)> Delegate;
		typedef std::list<Delegate> DelegateList;

	public:
		Event();
		~Event();
		void Dispose();
		void operator+=( const Delegate& delegate );

	protected:
		void operator()( const Args& args );
	
	private:
		DelegateList _delegates;
	};
}

#include "./Event.Tmpl.hpp"
#endif
