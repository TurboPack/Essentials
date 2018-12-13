// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsDir.pas' rev: 32.00 (Windows)

#ifndef EsdirHPP
#define EsdirHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <EsData.hpp>
#include <EsUtil.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esdir
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomDirectionPicker;
class DELPHICLASS TEsDirectionPicker;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEsCustomDirectionPicker : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
protected:
	int FDirection;
	int FNumDirections;
	Vcl::Graphics::TBitmap* FSelectedBitmap;
	bool FShowCenter;
	Vcl::Graphics::TBitmap* FDirectionBitmap;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetDirection(int Value);
	void __fastcall SetSelectedBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetNumDirections(int Value);
	void __fastcall SetShowCenter(bool Value);
	void __fastcall SetDirectionBitmap(Vcl::Graphics::TBitmap* Value);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	__property int Direction = {read=FDirection, write=SetDirection, default=0};
	__property int NumDirections = {read=FNumDirections, write=SetNumDirections, default=8};
	__property Vcl::Graphics::TBitmap* SelectedBitmap = {read=FSelectedBitmap, write=SetSelectedBitmap};
	__property bool ShowCenter = {read=FShowCenter, write=SetShowCenter, default=1};
	__property Vcl::Graphics::TBitmap* DirectionBitmap = {read=FDirectionBitmap, write=SetDirectionBitmap};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
public:
	__fastcall virtual TEsCustomDirectionPicker(System::Classes::TComponent* AComponent);
	__fastcall virtual ~TEsCustomDirectionPicker(void);
};


class PASCALIMPLEMENTATION TEsDirectionPicker : public TEsCustomDirectionPicker
{
	typedef TEsCustomDirectionPicker inherited;
	
__published:
	__property Direction = {default=0};
	__property Enabled = {default=1};
	__property SelectedBitmap;
	__property NumDirections = {default=8};
	__property ShowCenter = {default=1};
	__property DirectionBitmap;
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TEsCustomDirectionPicker.Create */ inline __fastcall virtual TEsDirectionPicker(System::Classes::TComponent* AComponent) : TEsCustomDirectionPicker(AComponent) { }
	/* TEsCustomDirectionPicker.Destroy */ inline __fastcall virtual ~TEsDirectionPicker(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Esdir */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESDIR)
using namespace Esdir;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsdirHPP
