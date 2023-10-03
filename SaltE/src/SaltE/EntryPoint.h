#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern SaltE::Application* SaltE::CreateApplication();

int main(int argc, char** argv)
{
	SaltE::Log::Init();
	SE_CORE_WARN("Initialized Log!");
	int a = 5;
	SE_CORE_INFO("Hello! Var={0}",a);

	auto app = SaltE::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error SaltE only supports Windows
#endif