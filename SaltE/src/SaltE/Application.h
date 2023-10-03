#pragma once
#include "Core.h"

namespace SaltE 
{ 
	class SALTE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined by client
	Application* CreateApplication();
}
