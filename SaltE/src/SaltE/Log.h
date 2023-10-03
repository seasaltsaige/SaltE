#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"

namespace SaltE
{ 
	class SALTE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};



}

// Core log Macros
#define SE_CORE_ERROR(...)   ::SaltE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SE_CORE_WARN(...)    ::SaltE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SE_CORE_INFO(...)    ::SaltE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SE_CORE_TRACE(...)   ::SaltE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SE_CORE_FATAL(...)   ::SaltE::Log::GetCoreLogger()->critical(__VA_ARGS__)


// Client log Macros
#define SE_ERROR(...)   ::SaltE::Log::GetClientLogger()->error(__VA_ARGS__)
#define SE_WARN(...)    ::SaltE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SE_INFO(...)    ::SaltE::Log::GetClientLogger()->info(__VA_ARGS__)
#define SE_TRACE(...)   ::SaltE::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SE_FATAL(...)   ::SaltE::Log::GetClientLogger()->critical(__VA_ARGS__)