#pragma once

#ifdef SF_PLATFORM_WINDOWS

extern SolarFlare::Application* SolarFlare::CreateApplication();
int main(int argc, char** argv) {
	auto app = SolarFlare::CreateApplication();
	app->Run();
	delete app;
}

#endif