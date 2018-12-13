// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsLabel1.pas' rev: 32.00 (Windows)

#ifndef Eslabel1HPP
#define Eslabel1HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Eslabel1
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSaveSchemeFrm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TSaveSchemeFrm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Stdctrls::TLabel* Label1;
	Vcl::Stdctrls::TEdit* SchemeNameEd;
	Vcl::Stdctrls::TButton* OkBtn;
	Vcl::Stdctrls::TButton* CancelBtn;
	void __fastcall FormCreate(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TSaveSchemeFrm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSaveSchemeFrm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TSaveSchemeFrm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSaveSchemeFrm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Eslabel1 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESLABEL1)
using namespace Eslabel1;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Eslabel1HPP
