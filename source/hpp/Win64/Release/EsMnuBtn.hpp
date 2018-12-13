// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsMnuBtn.pas' rev: 32.00 (Windows)

#ifndef EsmnubtnHPP
#define EsmnubtnHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Buttons.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Menus.hpp>
#include <EsBase.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esmnubtn
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomMenuButton;
class DELPHICLASS TEsMenuButton;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEsMenuPosition : unsigned char { mpBelow, mpRight };

class PASCALIMPLEMENTATION TEsCustomMenuButton : public Esbase::TEsBase
{
	typedef Esbase::TEsBase inherited;
	
private:
	Vcl::Graphics::TBitmap* __fastcall GetGlyph(void);
	
protected:
	Vcl::Controls::TCaption FCaption;
	TEsMenuPosition FMenuPosition;
	bool FShowGlyph;
	bool mbDown;
	bool mbDragging;
	Vcl::Graphics::TBitmap* mbGlyph;
	Vcl::Controls::TImageList* mbImage;
	Vcl::Buttons::TButtonState mbState;
	void __fastcall SetCaption(Vcl::Controls::TCaption Value);
	void __fastcall SetMenuPosition(TEsMenuPosition Value);
	void __fastcall SetShowGlyph(bool Value);
	void __fastcall SetGlyph(Vcl::Graphics::TBitmap* Glyph);
	void __fastcall cbDrawFocusRect(void);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Winapi::Messages::TWMKey &Message);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMRButtonUp(Winapi::Messages::TWMMouse &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Message);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property TEsMenuPosition MenuPosition = {read=FMenuPosition, write=SetMenuPosition, default=0};
	__property bool ShowGlyph = {read=FShowGlyph, write=SetShowGlyph, default=1};
	__property Vcl::Graphics::TBitmap* Glyph = {read=GetGlyph, write=SetGlyph};
	
public:
	__fastcall virtual TEsCustomMenuButton(System::Classes::TComponent* AOwner);
	DYNAMIC void __fastcall Click(void);
	__fastcall virtual ~TEsCustomMenuButton(void);
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomMenuButton(HWND ParentWindow) : Esbase::TEsBase(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsMenuButton : public TEsCustomMenuButton
{
	typedef TEsCustomMenuButton inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Caption;
	__property Cursor = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property EsLabelInfo;
	__property Font;
	__property Glyph;
	__property MenuPosition = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowGlyph = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TEsCustomMenuButton.Create */ inline __fastcall virtual TEsMenuButton(System::Classes::TComponent* AOwner) : TEsCustomMenuButton(AOwner) { }
	/* TEsCustomMenuButton.Destroy */ inline __fastcall virtual ~TEsMenuButton(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsMenuButton(HWND ParentWindow) : TEsCustomMenuButton(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Esmnubtn */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESMNUBTN)
using namespace Esmnubtn;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsmnubtnHPP
