#include <iostream>
#include <chrono>
#include <Windows.h>
#include <tlhelp32.h>


namespace utils
{
	void Logger( const char *message );
	std::int32_t get_process_id( const wchar_t *name );

}