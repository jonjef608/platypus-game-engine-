#include <Platypus.h>

class Sandbox : public Platypus::Application
{
public:
	Sandbox() 
	{

	}
	~Sandbox()
	{

	}



};

Platypus::Application* Platypus::CreateApplication()
{
	return new Sandbox();
}