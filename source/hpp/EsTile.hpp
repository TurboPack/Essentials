// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsTile.pas' rev: 28.00 (Windows)

#ifndef EstileHPP
#define EstileHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <EsConst.hpp>	// Pascal unit
#include <EsData.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Estile
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TEsCustomTile;
class PASCALIMPLEMENTATION TEsCustomTile : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
protected:
	Vcl::Graphics::TBitmap* FBitmap;
	void __fastcall tiBitmapChange(System::TObject* Sender);
	System::UnicodeString __fastcall GetVersion(void);
	void __fastcall SetBitmap(Vcl::Graphics::TBitmap* Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	virtual void __fastcall Paint(void);
	__property Vcl::Graphics::TBitmap* Bitmap = {read=FBitmap, write=SetBitmap};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	
public:
	__fastcall virtual TEsCustomTile(System::Classes::TComponent* AComponent);
	__fastcall virtual ~TEsCustomTile(void);
	void __fastcall PaintTo(HDC DC, const System::Types::TRect &R);
};


class DELPHICLASS TEsTile;
class PASCALIMPLEMENTATION TEsTile : public TEsCustomTile
{
	typedef TEsCustomTile inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Align = {default=0};
	__property Bitmap;
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
	/* TEsCustomTile.Create */ inline __fastcall virtual TEsTile(System::Classes::TComponent* AComponent) : TEsCustomTile(AComponent) { }
	/* TEsCustomTile.Destroy */ inline __fastcall virtual ~TEsTile(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Estile */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESTILE)
using namespace Estile;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EstileHPP
