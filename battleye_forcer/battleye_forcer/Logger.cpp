#include "Log.h"





void utils::Logger( const char *message )
{
	std::cout << "[ LOG ] -->  " << message << std::endl;
}

std::int32_t utils::get_process_id( const wchar_t *name )
{
    const auto snapshot = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 );

    PROCESSENTRY32 entry = { 0 };
    entry.dwSize = sizeof( entry );

    Process32First( snapshot, &entry );
    do
    {
        if ( wcscmp( entry.szExeFile, name ) )
        {
            continue;
        }

        CloseHandle( snapshot );
        return entry.th32ProcessID;

    } while ( Process32Next( snapshot, &entry ) );

    CloseHandle( snapshot );
    return 0;
}

