#include "Forcer.hpp"
#include "Log.h"



void forcer::kill_eac( )
{
	if ( utils::get_process_id( L"EasyAntiCheat.exe" ) || utils::get_process_id( L"FortniteClient-Win64-Shipping_EAC.exe" ) );
	{
		// If eac is found we terminate it

		utils::Logger( "Found Eac " );				
		system( "TASKKILL /F /IM EasyAntiCheat.exe >nul" );
		system( "TASKKILL /F /IM FortniteClient-Win64-Shipping_EAC.exe >nul" );
		system( "sc net stop EasyAntiCheat >nul " );

		/*
		note: yup using system( ) to lazy + who cares 
		*/ 

	}
	utils::Logger( "EAC succesfully killed! " );

}

void forcer::force_battleye( )
{
	if ( !utils::get_process_id( L"EasyAntiCheat.exe" ) || utils::get_process_id( L"FortniteClient-Win64-Shipping_EAC.exe" ) );
	{
		ShellExecute( NULL, L"open", L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\FortniteClient-Win64-Shipping_BE.exe", NULL, NULL, SW_SHOWDEFAULT );
		utils::Logger( "BE Succesfully Executed" );
	}
}