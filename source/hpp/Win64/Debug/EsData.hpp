// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsData.pas' rev: 32.00 (Windows)

#ifndef EsdataHPP
#define EsdataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esdata
{
//-- forward type declarations -----------------------------------------------
struct TRGBMap;
//-- type declarations -------------------------------------------------------
typedef HDC TEsHdc;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TRGBMap
{
	
public:
	union
	{
		struct 
		{
			System::Byte Red;
			System::Byte Green;
			System::Byte Blue;
			System::Byte Unused;
		};
		struct 
		{
			unsigned RGBValue;
		};
		
	};
};
#pragma pack(pop)


//-- var, const, procedure ---------------------------------------------------
static const System::Word ES_POSITIONLABEL = System::Word(0x464);
static const System::Word ES_RECORDLABELPOSITION = System::Word(0x465);
static const System::Word ES_ASSIGNLABEL = System::Word(0x466);
static const System::Word VK_0 = System::Word(0x30);
static const System::Word VK_1 = System::Word(0x31);
static const System::Word VK_2 = System::Word(0x32);
static const System::Word VK_3 = System::Word(0x33);
static const System::Word VK_4 = System::Word(0x34);
static const System::Word VK_5 = System::Word(0x35);
static const System::Word VK_6 = System::Word(0x36);
static const System::Word VK_7 = System::Word(0x37);
static const System::Word VK_8 = System::Word(0x38);
static const System::Word VK_9 = System::Word(0x39);
#define EsVersionStr L"1.11"
}	/* namespace Esdata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESDATA)
using namespace Esdata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsdataHPP
