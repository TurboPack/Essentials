// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsEdCal.pas' rev: 32.00 (Windows)

#ifndef EsedcalHPP
#define EsedcalHPP

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
#include <EsCal.hpp>
#include <EsConst.hpp>
#include <EsEdPop.hpp>
#include <EsUtil.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esedcal
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomDateEdit;
class DELPHICLASS TEsDateEdit;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEsDateOrder : unsigned char { doMDY, doDMY, doYMD };

enum DECLSPEC_DENUM TEsRequiredField : unsigned char { rfYear, rfMonth, rfDay };

typedef System::Set<TEsRequiredField, TEsRequiredField::rfYear, TEsRequiredField::rfDay> TEsRequiredFields;

typedef void __fastcall (__closure *TEsGetDateEvent)(System::TObject* Sender, System::UnicodeString &Value);

class PASCALIMPLEMENTATION TEsCustomDateEdit : public Esedpop::TEsEdPopup
{
	typedef Esedpop::TEsEdPopup inherited;
	
protected:
	bool FAllowIncDec;
	System::TDateTime FDate;
	int FEpoch;
	bool FForceCentury;
	Escal::TEsCalColors* FPopupCalColors;
	Vcl::Graphics::TFont* FPopupCalFont;
	int FPopupCalHeight;
	int FPopupCalWidth;
	TEsRequiredFields FRequiredFields;
	System::UnicodeString FTodayString;
	Escal::TEsDayType FWeekStarts;
	TEsGetDateEvent FOnGetDate;
	System::Classes::TNotifyEvent FOnSetDate;
	Escal::TEsCalendar* Calendar;
	TEsDateOrder DateOrder;
	bool GettingDate;
	System::Uitypes::TCursor HoldCursor;
	bool WasAutoScroll;
	System::TDateTime __fastcall GetDate(void);
	HIDESBASE bool __fastcall GetReadOnly(void);
	void __fastcall SetForceCentury(bool Value);
	void __fastcall SetPopupCalFont(Vcl::Graphics::TFont* Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall PopupDateChange(System::TObject* Sender, System::TDateTime Date);
	void __fastcall PopupKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall PopupKeyPress(System::TObject* Sender, System::WideChar &Key);
	void __fastcall PopupMouseDown(System::TObject* Sender, System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall DoExit(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	DYNAMIC void __fastcall PopupClose(System::TObject* Sender);
	void __fastcall SetDate(System::TDateTime Value);
	DYNAMIC void __fastcall SetDateText(System::UnicodeString Value);
	__property bool AllowIncDec = {read=FAllowIncDec, write=FAllowIncDec, default=1};
	__property int Epoch = {read=FEpoch, write=FEpoch, nodefault};
	__property bool ForceCentury = {read=FForceCentury, write=SetForceCentury, default=0};
	__property Escal::TEsCalColors* PopupCalColors = {read=FPopupCalColors, write=FPopupCalColors};
	__property Vcl::Graphics::TFont* PopupCalFont = {read=FPopupCalFont, write=SetPopupCalFont};
	__property int PopupCalHeight = {read=FPopupCalHeight, write=FPopupCalHeight, default=140};
	__property int PopupCalWidth = {read=FPopupCalWidth, write=FPopupCalWidth, default=200};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, nodefault};
	__property TEsRequiredFields RequiredFields = {read=FRequiredFields, write=FRequiredFields, nodefault};
	__property System::UnicodeString TodayString = {read=FTodayString, write=FTodayString};
	__property Escal::TEsDayType WeekStarts = {read=FWeekStarts, write=FWeekStarts, default=0};
	__property TEsGetDateEvent OnGetDate = {read=FOnGetDate, write=FOnGetDate};
	__property System::Classes::TNotifyEvent OnSetDate = {read=FOnSetDate, write=FOnSetDate};
	
public:
	__fastcall virtual TEsCustomDateEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomDateEdit(void);
	DYNAMIC void __fastcall PopupOpen(void);
	DYNAMIC System::UnicodeString __fastcall FormatDate(System::TDateTime Value);
	__property System::TDateTime Date = {read=GetDate, write=SetDate};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomDateEdit(HWND ParentWindow) : Esedpop::TEsEdPopup(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsDateEdit : public TEsCustomDateEdit
{
	typedef TEsCustomDateEdit inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property AllowIncDec = {default=1};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property BorderStyle = {default=1};
	__property CharCase = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Cursor = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Epoch;
	__property EsLabelInfo;
	__property Font;
	__property ForceCentury = {default=0};
	__property HideSelection = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupCalColors;
	__property PopupCalFont;
	__property PopupCalHeight = {default=140};
	__property PopupCalWidth = {default=200};
	__property PopupMenu;
	__property ReadOnly;
	__property RequiredFields;
	__property ShowHint;
	__property ShowButton = {default=1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TodayString = {default=0};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property WeekStarts = {default=0};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetDate;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnSetDate;
	__property OnStartDrag;
public:
	/* TEsCustomDateEdit.Create */ inline __fastcall virtual TEsDateEdit(System::Classes::TComponent* AOwner) : TEsCustomDateEdit(AOwner) { }
	/* TEsCustomDateEdit.Destroy */ inline __fastcall virtual ~TEsDateEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsDateEdit(HWND ParentWindow) : TEsCustomDateEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Esedcal */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESEDCAL)
using namespace Esedcal;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsedcalHPP
