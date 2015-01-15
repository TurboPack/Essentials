// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsUtil.pas' rev: 28.00 (Windows)

#ifndef EsutilHPP
#define EsutilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <EsSrMgr.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Esutil
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Essrmgr::TEsStringResource* StrRes;
extern DELPHI_PACKAGE int __fastcall DaysInMonth(int Year, int Month);
extern DELPHI_PACKAGE int __fastcall DefaultEpoch(void);
extern DELPHI_PACKAGE System::Byte __fastcall GetLeftButton(void);
extern DELPHI_PACKAGE void __fastcall GetRGB(System::Uitypes::TColor Clr, System::Byte &IR, System::Byte &IG, System::Byte &IB);
extern DELPHI_PACKAGE bool __fastcall IsLeapYear(int Year);
extern DELPHI_PACKAGE int __fastcall Max(int I, int J);
extern DELPHI_PACKAGE int __fastcall Min(int I, int J);
}	/* namespace Esutil */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESUTIL)
using namespace Esutil;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsutilHPP
