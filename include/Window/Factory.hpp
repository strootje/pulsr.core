#ifndef __PULSR_CORE_WINDOW_FACTORY__H__
#define __PULSR_CORE_WINDOW_FACTORY__H__

#include <Pulsr.Core/Window/Window.hpp>
#include <memory>

namespace Pulsr { namespace Core { namespace Window
{
	/**
	 * Factory class to create windows
	 */
	class Factory
	{
	public:
		/**
		 * Create a new window
		 * \returns  Pointer to the new window
		 */
		virtual std::shared_ptr<Window> Create() = 0;
	};
}}}

#endif
