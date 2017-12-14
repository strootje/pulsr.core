#ifndef __PULSR_CORE_DRAWING_WINDOW__H__
#define __PULSR_CORE_DRAWING_WINDOW__H__

namespace Pulsr { namespace Core { namespace Drawing
{
	class Window
	{
	public:
		virtual void Show() = 0;
		virtual void Hide() = 0;
		virtual void Close() = 0;
	};
}}}

#endif
