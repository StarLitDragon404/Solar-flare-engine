#include "SolarFlare.h"
#include <iostream>
class Sandbox : public SolarFlare::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

SolarFlare::Application* SolarFlare::CreateApplication() {
	std::cout << "Hello World!";
	return new Sandbox();
}