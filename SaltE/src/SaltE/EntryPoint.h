#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern SaltE::Application* SaltE::CreateApplication();

int main(int argc, char** argv)
{
	printf("SaltE Engine Starting!");
	auto app = SaltE::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error SaltE only supports Windows
#endif