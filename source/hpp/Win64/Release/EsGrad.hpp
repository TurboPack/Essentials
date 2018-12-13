// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsGrad.pas' rev: 32.00 (Windows)

#ifndef EsgradHPP
#define EsgradHPP

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
#include <EsConst.hpp>
#include <EsData.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esgrad
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomGradient;
class DELPHICLASS TEsGradient;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TGradDirection : unsigned char { dHorizontal, dVertical };

typedef System::Word TEsColorBand;

class PASCALIMPLEMENTATION TEsCustomGradient : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
protected:
	System::Uitypes::TColor FFromColor;
	System::Uitypes::TColor FToColor;
	TGradDirection FDirection;
	TEsColorBand FColorBands;
	System::StaticArray<unsigned, 256> gGradColors;
	HPALETTE gPalette;
	System::UnicodeString __fastcall GetVersion(void);
	void __fastcall SetColorBands(TEsColorBand Value);
	void __fastcall SetDirection(TGradDirection Value);
	void __fastcall SetFromColor(System::Uitypes::TColor Value);
	void __fastcall SetToColor(System::Uitypes::TColor Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall gCalculateColors(void);
	void __fastcall gFillRectGradient(HDC DC, const System::Types::TRect &R);
	MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	DYNAMIC bool __fastcall PaletteChanged(bool Foreground);
	virtual void __fastcall Paint(void);
	__property TEsColorBand ColorBands = {read=FColorBands, write=SetColorBands, default=128};
	__property TGradDirection Direction = {read=FDirection, write=SetDirection, default=0};
	__property System::Uitypes::TColor FromColor = {read=FFromColor, write=SetFromColor, default=255};
	__property System::Uitypes::TColor ToColor = {read=FToColor, write=SetToColor, default=65535};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	
public:
	__fastcall virtual TEsCustomGradient(System::Classes::TComponent* AComponent);
	__fastcall virtual ~TEsCustomGradient(void);
	void __fastcall PaintTo(HDC DC, const System::Types::TRect &R);
};


class PASCALIMPLEMENTATION TEsGradient : public TEsCustomGradient
{
	typedef TEsCustomGradient inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Align = {default=0};
	__property ColorBands = {default=128};
	__property Direction = {default=0};
	__property FromColor = {default=255};
	__property ToColor = {default=65535};
	__property Version = {default=0};
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
public:
	/* TEsCustomGradient.Create */ inline __fastcall virtual TEsGradient(System::Classes::TComponent* AComponent) : TEsCustomGradient(AComponent) { }
	/* TEsCustomGradient.Destroy */ inline __fastcall virtual ~TEsGradient(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MinColorBands = System::Int8(0x2);
static const System::Word MaxColorBands = System::Word(0x100);
}	/* namespace Esgrad */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESGRAD)
using namespace Esgrad;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsgradHPP
