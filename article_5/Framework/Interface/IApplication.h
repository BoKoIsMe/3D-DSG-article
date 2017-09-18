#pragma once
#include "Interface.h"
#include "IRuntimeModule.h"

namespace My {
	Interface IApplication:implements IRuntimeModule
	{
	public:
		virtual int Initialize() = 0;
		virtual void Finalize() = 0;
		//主循环中的一环
		virtual void Tick() = 0;

		virtual bool IsQuit() = 0;
	};
}
