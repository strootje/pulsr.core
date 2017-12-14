#ifndef __PULSR_CORE_DRAWING_WINDOWFACTORY__H__
#define __PULSR_CORE_DRAWING_WINDOWFACTORY__H__

#include <Pulsr.Core/Drawing/Window.hpp>
#include <memory>

namespace Pulsr { namespace Core { namespace Drawing
{
	class WindowFactory
	{
	public:
		virtual std::shared_ptr<Window> Create() = 0;
		virtual void Dispatch() = 0;
	};
}}}

#endif
