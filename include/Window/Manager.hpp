#ifndef __PULSR_CORE_WINDOW_MANAGER__H__
#define __PULSR_CORE_WINDOW_MANAGER__H__

#include <string>

namespace Pulsr { namespace Core { namespace Window
{
	/**
	 * A Window Manager
	 */
	class Manager
	{
	public:
		/**
		 * Create a new window
		 * \param[in]  name  The name of the new window
		 */
		virtual void Create( const std::string& name ) = 0;

		/**
		 * Method to check if there is any work remaining
		 * \returns  Bool indicating if there is any work left
		 */
		virtual bool HasWork() = 0;

		/**
		 * Method to update all resources related to the Window Manager
		 */
		virtual void Update() = 0;
	};
}}}

#endif
