#include <SaltE.h>

class Sandbox : public SaltE::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


SaltE::Application* SaltE::CreateApplication()
{
	return new Sandbox();
}