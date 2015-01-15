// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsWebPE.pas' rev: 28.00 (Windows)

#ifndef EswebpeHPP
#define EswebpeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Dialogs.hpp>	// Pascal unit
#include <DesignIntf.hpp>	// Pascal unit
#include <DesignEditors.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Winapi.ShellAPI.hpp>	// Pascal unit
#include <EsData.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Eswebpe
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TEsWebEditor;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TEsWebEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TEsWebEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEsWebEditor(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
#define WebText1 L"TurboPower on the Web"
#define WebText2 L"Essentials Home Page"
#define MailText L"Send a Support Message"
extern DELPHI_PACKAGE void __fastcall ShellWebCall1(void);
extern DELPHI_PACKAGE void __fastcall ShellWebCall2(void);
extern DELPHI_PACKAGE void __fastcall ShellMailCall(void);
}	/* namespace Eswebpe */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESWEBPE)
using namespace Eswebpe;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EswebpeHPP
