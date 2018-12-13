// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsEdCalc.pas' rev: 32.00 (Windows)

#ifndef EsedcalcHPP
#define EsedcalcHPP

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
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <EsBase.hpp>
#include <EsCalc.hpp>
#include <EsConst.hpp>
#include <EsEdPop.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esedcalc
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomNumberEdit;
class DELPHICLASS TEsNumberEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEsCustomNumberEdit : public Esedpop::TEsEdPopup
{
	typedef Esedpop::TEsEdPopup inherited;
	
protected:
	bool FAllowIncDec;
	Escalc::TEsCalcColors* FPopupCalcColors;
	Vcl::Graphics::TFont* FPopupCalcFont;
	int FPopupCalcHeight;
	int FPopupCalcWidth;
	Escalc::TEsCalculator* Calculator;
	System::Uitypes::TCursor HoldCursor;
	bool WasAutoScroll;
	double __fastcall GetAsFloat(void);
	int __fastcall GetAsInteger(void);
	System::UnicodeString __fastcall GetAsString(void);
	void __fastcall SetAsFloat(double Value);
	void __fastcall SetAsInteger(int Value);
	void __fastcall SetAsString(const System::UnicodeString Value);
	HIDESBASE bool __fastcall GetReadOnly(void);
	void __fastcall SetPopupCalcFont(Vcl::Graphics::TFont* Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall PopupButtonPressed(System::TObject* Sender, Escalc::TEsCalculatorButton Button);
	void __fastcall PopupKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall PopupKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall PopupMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall DoExit(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall PopupClose(System::TObject* Sender);
	__property bool AllowIncDec = {read=FAllowIncDec, write=FAllowIncDec, default=0};
	__property Escalc::TEsCalcColors* PopupCalcColors = {read=FPopupCalcColors, write=FPopupCalcColors};
	__property Vcl::Graphics::TFont* PopupCalcFont = {read=FPopupCalcFont, write=SetPopupCalcFont};
	__property int PopupCalcHeight = {read=FPopupCalcHeight, write=FPopupCalcHeight, default=140};
	__property int PopupCalcWidth = {read=FPopupCalcWidth, write=FPopupCalcWidth, default=200};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, nodefault};
	
public:
	__fastcall virtual TEsCustomNumberEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomNumberEdit(void);
	DYNAMIC void __fastcall PopupOpen(void);
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomNumberEdit(HWND ParentWindow) : Esedpop::TEsEdPopup(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsNumberEdit : public TEsCustomNumberEdit
{
	typedef TEsCustomNumberEdit inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property AllowIncDec = {default=0};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Cursor = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property EsLabelInfo;
	__property Font;
	__property HideSelection = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupCalcColors;
	__property PopupCalcFont;
	__property PopupCalcHeight = {default=140};
	__property PopupCalcWidth = {default=200};
	__property PopupMenu;
	__property ReadOnly;
	__property ShowHint;
	__property ShowButton = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
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
	__property OnStartDrag;
public:
	/* TEsCustomNumberEdit.Create */ inline __fastcall virtual TEsNumberEdit(System::Classes::TComponent* AOwner) : TEsCustomNumberEdit(AOwner) { }
	/* TEsCustomNumberEdit.Destroy */ inline __fastcall virtual ~TEsNumberEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsNumberEdit(HWND ParentWindow) : TEsCustomNumberEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Esedcalc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESEDCALC)
using namespace Esedcalc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsedcalcHPP
