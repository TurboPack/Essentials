// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsCal.pas' rev: 32.00 (Windows)

#ifndef EscalHPP
#define EscalHPP

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
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <EsBase.hpp>
#include <EsData.hpp>
#include <EsUtil.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Escal
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCalColors;
class DELPHICLASS TEsCustomCalendar;
class DELPHICLASS TEsCalendar;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEsDateFormat : unsigned char { dfShort, dfLong };

typedef System::Int8 TEsDayNameWidth;

enum DECLSPEC_DENUM TEsDayType : unsigned char { dtSunday, dtMonday, dtTuesday, dtWednesday, dtThursday, dtFriday, dtSaturday };

typedef System::StaticArray<System::Uitypes::TColor, 6> TEsCalColorArray;

enum DECLSPEC_DENUM TEsCalColorScheme : unsigned char { csCustom, csWindows, csGold, csOcean, csRose };

typedef System::StaticArray<System::StaticArray<System::Uitypes::TColor, 6>, 5> TEsCalSchemeArray;

class PASCALIMPLEMENTATION TEsCalColors : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FUpdating;
	System::Classes::TNotifyEvent FOnChange;
	bool SettingScheme;
	void __fastcall DoOnChange(void);
	System::Uitypes::TColor __fastcall GetColor(int Index);
	void __fastcall SetColor(int Index, System::Uitypes::TColor Value);
	void __fastcall SetColorScheme(TEsCalColorScheme Value);
	
public:
	TEsCalColorArray FCalColors;
	TEsCalColorScheme FColorScheme;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property System::Uitypes::TColor ActiveDay = {read=GetColor, write=SetColor, index=0, nodefault};
	__property TEsCalColorScheme ColorScheme = {read=FColorScheme, write=SetColorScheme, nodefault};
	__property System::Uitypes::TColor DayNames = {read=GetColor, write=SetColor, index=1, nodefault};
	__property System::Uitypes::TColor Days = {read=GetColor, write=SetColor, index=2, nodefault};
	__property System::Uitypes::TColor InactiveDays = {read=GetColor, write=SetColor, index=3, nodefault};
	__property System::Uitypes::TColor MonthAndYear = {read=GetColor, write=SetColor, index=4, nodefault};
	__property System::Uitypes::TColor Weekend = {read=GetColor, write=SetColor, index=5, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEsCalColors(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEsCalColors(void) : System::Classes::TPersistent() { }
	
};


typedef void __fastcall (__closure *TDateChangeEvent)(System::TObject* Sender, System::TDateTime Date);

typedef void __fastcall (__closure *TCalendarDateEvent)(System::TObject* Sender, System::TDateTime ADate, const System::Types::TRect &Rect);

class PASCALIMPLEMENTATION TEsCustomCalendar : public Esbase::TEsBase
{
	typedef Esbase::TEsBase inherited;
	
protected:
	bool FBrowsing;
	TEsCalColors* FColors;
	System::TDateTime FDate;
	TEsDateFormat FDateFormat;
	TEsDayNameWidth FDayNameWidth;
	bool FShowDate;
	bool FShowInactive;
	bool FShowToday;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	TEsDayType FWeekStarts;
	TDateChangeEvent FOnChange;
	TCalendarDateEvent FOnDrawDate;
	TCalendarDateEvent FOnDrawItem;
	Vcl::Buttons::TSpeedButton* clBtnLeft;
	Vcl::Buttons::TSpeedButton* clBtnRight;
	Vcl::Buttons::TSpeedButton* clBtnToday;
	bool clInPopup;
	Vcl::Buttons::TSpeedButton* clBtnNextYear;
	Vcl::Buttons::TSpeedButton* clBtnPrevYear;
	System::StaticArray<System::Byte, 42> clCalendar;
	System::Word clDay;
	System::Byte clFirst;
	System::Byte clLast;
	System::Word clMonth;
	System::StaticArray<System::StaticArray<System::Types::TRect, 7>, 8> clRowCol;
	bool cSettingScheme;
	System::Word clYear;
	int clWidth;
	bool clPopup;
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetDate(System::TDateTime Value);
	void __fastcall SetDateFormat(TEsDateFormat Value);
	void __fastcall SetDayNameWidth(TEsDayNameWidth Value);
	void __fastcall SetShowDate(bool Value);
	void __fastcall SetShowInactive(bool Value);
	void __fastcall SetShowToday(bool Value);
	void __fastcall SetWeekStarts(TEsDayType Value);
	void __fastcall calBtnClick(System::TObject* Sender);
	void __fastcall calChangeMonth(System::TObject* Sender);
	void __fastcall calColorChange(System::TObject* Sender);
	System::Types::TRect __fastcall calGetCurrentRectangle(void);
	void __fastcall calRebuildCalArray(void);
	void __fastcall calRecalcSize(void);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall DoOnChange(System::TDateTime Value);
	DYNAMIC void __fastcall DoOnMouseWheel(System::Classes::TShiftState Shift, short Delta, short XPos, short YPos);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TEsCustomCalendar(System::Classes::TComponent* AOwner);
	__fastcall virtual TEsCustomCalendar(System::Classes::TComponent* AOwner, bool AsPopup);
	__fastcall virtual ~TEsCustomCalendar(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=0};
	__property bool Browsing = {read=FBrowsing, nodefault};
	__property TEsCalColors* Colors = {read=FColors, write=FColors};
	__property TEsDayNameWidth DayNameWidth = {read=FDayNameWidth, write=SetDayNameWidth, default=3};
	__property System::TDateTime Date = {read=FDate, write=SetDate};
	__property TEsDateFormat DateFormat = {read=FDateFormat, write=SetDateFormat, default=1};
	__property bool ShowDate = {read=FShowDate, write=SetShowDate, default=1};
	__property bool ShowInactive = {read=FShowInactive, write=SetShowInactive, default=0};
	__property bool ShowToday = {read=FShowToday, write=SetShowToday, default=1};
	__property TEsDayType WeekStarts = {read=FWeekStarts, write=SetWeekStarts, default=0};
	__property TDateChangeEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TCalendarDateEvent OnDrawDate = {read=FOnDrawDate, write=FOnDrawDate};
	__property TCalendarDateEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomCalendar(HWND ParentWindow) : Esbase::TEsBase(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsCalendar : public TEsCustomCalendar
{
	typedef TEsCustomCalendar inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Align = {default=0};
	__property BorderStyle = {default=0};
	__property Colors;
	__property Ctl3D;
	__property Cursor = {default=0};
	__property DayNameWidth = {default=3};
	__property DateFormat = {default=1};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property EsLabelInfo;
	__property Font;
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowDate = {default=1};
	__property ShowHint;
	__property ShowInactive = {default=0};
	__property ShowToday = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property WeekStarts = {default=0};
	__property OnChange;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDrawDate;
	__property OnDrawItem;
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
	/* TEsCustomCalendar.Create */ inline __fastcall virtual TEsCalendar(System::Classes::TComponent* AOwner) : TEsCustomCalendar(AOwner) { }
	/* TEsCustomCalendar.CreateEx */ inline __fastcall virtual TEsCalendar(System::Classes::TComponent* AOwner, bool AsPopup) : TEsCustomCalendar(AOwner, AsPopup) { }
	/* TEsCustomCalendar.Destroy */ inline __fastcall virtual ~TEsCalendar(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCalendar(HWND ParentWindow) : TEsCustomCalendar(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const Vcl::Forms::TFormBorderStyle calDefBorderStyle = (Vcl::Forms::TFormBorderStyle)(0);
static const int calDefColor = int(-16777201);
static const TEsDateFormat calDefDateFormat = (TEsDateFormat)(1);
static const System::Int8 calDefDayNameWidth = System::Int8(0x3);
static const System::Byte calDefHeight = System::Byte(0x8c);
static const bool calDefShowDate = true;
static const bool calDefShowInactive = false;
static const bool calDefShowToday = true;
static const bool calDefTabStop = true;
static const TEsDayType calDefWeekStarts = (TEsDayType)(0);
static const System::Byte calDefWidth = System::Byte(0xc8);
static const System::Int8 calMargin = System::Int8(0x4);
extern DELPHI_PACKAGE TEsCalSchemeArray CalScheme;
}	/* namespace Escal */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESCAL)
using namespace Escal;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EscalHPP
