#pragma once
#include "Core.h";

namespace SolarFlare {

	class SOLARFLARE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}
