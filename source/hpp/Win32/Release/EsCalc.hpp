// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsCalc.pas' rev: 32.00 (Windows)

#ifndef EscalcHPP
#define EscalcHPP

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
#include <Vcl.Clipbrd.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <EsBase.hpp>
#include <EsConst.hpp>
#include <EsData.hpp>
#include <EsUtil.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Escalc
{
//-- forward type declarations -----------------------------------------------
struct TEsButtonInfo;
class DELPHICLASS TEsCalcColors;
class DELPHICLASS TEsCalcPanel;
class DELPHICLASS TEsCustomCalculator;
class DELPHICLASS TEsCalculator;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEsCalculatorButton : unsigned char { ccNone, ccBack, ccClearEntry, ccClear, ccAdd, ccSub, ccMul, ccDiv, cc0, cc1, cc2, cc3, cc4, cc5, cc6, cc7, cc8, cc9, ccDecimal, ccEqual, ccInvert, ccChangeSign, ccPercent, ccSqrt, ccMemClear, ccMemRecall, ccMemStore, ccMemAdd, ccMemSub };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TEsButtonInfo
{
public:
	System::Types::TRect Position;
	System::UnicodeString Caption;
	bool Visible;
};
#pragma pack(pop)


typedef System::StaticArray<TEsButtonInfo, 28> TEsButtonArray;

enum DECLSPEC_DENUM TEsCalcState : unsigned char { csValid, csLocked, csClear };

typedef System::StaticArray<System::Uitypes::TColor, 8> TEsCalcColorArray;

enum DECLSPEC_DENUM TEsCalcColorScheme : unsigned char { csCustom, csWindows, csDark, csOcean, csPlain };

typedef System::StaticArray<System::StaticArray<System::Uitypes::TColor, 8>, 5> TEsCalcSchemeArray;

class PASCALIMPLEMENTATION TEsCalcColors : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FUpdating;
	System::Classes::TNotifyEvent FOnChange;
	bool SettingScheme;
	void __fastcall DoOnChange(void);
	System::Uitypes::TColor __fastcall GetColor(int Index);
	void __fastcall SetColor(int Index, System::Uitypes::TColor Value);
	void __fastcall SetColorScheme(TEsCalcColorScheme Value);
	System::Uitypes::TColor __fastcall GetDisplayText(void);
	void __fastcall SetDisplayText(System::Uitypes::TColor Value);
	
public:
	TEsCalcColorArray FCalcColors;
	TEsCalcColorScheme FColorScheme;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property TEsCalcColorScheme ColorScheme = {read=FColorScheme, write=SetColorScheme, nodefault};
	__property System::Uitypes::TColor DisabledMemoryButtons = {read=GetColor, write=SetColor, index=0, nodefault};
	__property System::Uitypes::TColor Display = {read=GetColor, write=SetColor, index=1, nodefault};
	__property System::Uitypes::TColor DisplayText = {read=GetDisplayText, write=SetDisplayText, nodefault};
	__property System::Uitypes::TColor EditButtons = {read=GetColor, write=SetColor, index=3, nodefault};
	__property System::Uitypes::TColor FunctionButtons = {read=GetColor, write=SetColor, index=4, nodefault};
	__property System::Uitypes::TColor MemoryButtons = {read=GetColor, write=SetColor, index=5, nodefault};
	__property System::Uitypes::TColor NumberButtons = {read=GetColor, write=SetColor, index=6, nodefault};
	__property System::Uitypes::TColor OperatorButtons = {read=GetColor, write=SetColor, index=7, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEsCalcColors(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEsCalcColors(void) : System::Classes::TPersistent() { }
	
};


class PASCALIMPLEMENTATION TEsCalcPanel : public Vcl::Extctrls::TPanel
{
	typedef Vcl::Extctrls::TPanel inherited;
	
protected:
	DYNAMIC void __fastcall Click(void);
public:
	/* TCustomPanel.Create */ inline __fastcall virtual TEsCalcPanel(System::Classes::TComponent* AOwner) : Vcl::Extctrls::TPanel(AOwner) { }
	
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TEsCalcPanel(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCalcPanel(HWND ParentWindow) : Vcl::Extctrls::TPanel(ParentWindow) { }
	
};


typedef void __fastcall (__closure *TButtonPressedEvent)(System::TObject* Sender, TEsCalculatorButton Button);

class PASCALIMPLEMENTATION TEsCustomCalculator : public Esbase::TEsBase
{
	typedef Esbase::TEsBase inherited;
	
protected:
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	TEsCalcColors* FColors;
	bool FShowMemoryButtons;
	TButtonPressedEvent FOnButtonPressed;
	TEsButtonArray cButtons;
	System::Extended cDisplay;
	System::UnicodeString cDisplayStr;
	TEsCalculatorButton cDownButton;
	TEsCalculatorButton cLastButton;
	int cMargin;
	System::Extended cMemory;
	System::Extended cOperand;
	TEsCalculatorButton cOperation;
	TEsCalcPanel* cPanel;
	System::Set<TEsCalcState, TEsCalcState::csValid, TEsCalcState::csClear> cState;
	bool cPopup;
	void __fastcall cAdjustHeight(void);
	void __fastcall cCalculateLook(void);
	void __fastcall cClearAll(void);
	void __fastcall cColorChange(System::TObject* Sender);
	void __fastcall cDisplayError(void);
	void __fastcall cDisplayValue(const System::Extended Value);
	void __fastcall cDrawCalcButton(const TEsButtonInfo &Button, bool Pressed);
	void __fastcall cDrawFocusState(void);
	void __fastcall cEvaluate(void);
	void __fastcall cInvalidateIndicator(void);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetShowMemoryButtons(bool Value);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	MESSAGE void __fastcall WMGetText(Winapi::Messages::TWMGetText &Msg);
	MESSAGE void __fastcall WMGetTextLength(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMSetText(Winapi::Messages::TWMSetText &Msg);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property bool ShowMemoryButtons = {read=FShowMemoryButtons, write=SetShowMemoryButtons, default=1};
	__property TButtonPressedEvent OnButtonPressed = {read=FOnButtonPressed, write=FOnButtonPressed};
	
public:
	__fastcall virtual TEsCustomCalculator(System::Classes::TComponent* AOwner);
	__fastcall virtual TEsCustomCalculator(System::Classes::TComponent* AOwner, bool AsPopup);
	__fastcall virtual ~TEsCustomCalculator(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall CopyToClipboard(void);
	void __fastcall PasteFromClipboard(void);
	void __fastcall PressButton(TEsCalculatorButton Button);
	__property TEsCalcColors* Colors = {read=FColors, write=FColors};
	__property System::Extended Memory = {read=cMemory, write=cMemory};
	__property Text = {default=0};
	__property System::Extended Value = {read=cDisplay};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomCalculator(HWND ParentWindow) : Esbase::TEsBase(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsCalculator : public TEsCustomCalculator
{
	typedef TEsCustomCalculator inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Font;
	__property Align = {default=0};
	__property BorderStyle = {default=0};
	__property Ctl3D;
	__property Colors;
	__property Cursor = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property EsLabelInfo;
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property ShowMemoryButtons = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property OnButtonPressed;
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
	/* TEsCustomCalculator.Create */ inline __fastcall virtual TEsCalculator(System::Classes::TComponent* AOwner) : TEsCustomCalculator(AOwner) { }
	/* TEsCustomCalculator.CreateEx */ inline __fastcall virtual TEsCalculator(System::Classes::TComponent* AOwner, bool AsPopup) : TEsCustomCalculator(AOwner, AsPopup) { }
	/* TEsCustomCalculator.Destroy */ inline __fastcall virtual ~TEsCalculator(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCalculator(HWND ParentWindow) : TEsCustomCalculator(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const Vcl::Forms::TFormBorderStyle calcDefBorderStyle = (Vcl::Forms::TFormBorderStyle)(0);
static const int calcDefColor = int(-16777201);
static const System::Byte calcDefHeight = System::Byte(0x8c);
static const bool calcDefShowMemoryButtons = true;
static const bool calcDefTabStop = true;
static const System::Byte calcDefWidth = System::Byte(0xc8);
extern DELPHI_PACKAGE TEsCalcSchemeArray CalcScheme;
}	/* namespace Escalc */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESCALC)
using namespace Escalc;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EscalcHPP
