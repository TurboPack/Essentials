// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsDbEd.pas' rev: 32.00 (Windows)

#ifndef EsdbedHPP
#define EsdbedHPP

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
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.StdCtrls.hpp>
#include <EsBase.hpp>
#include <EsCal.hpp>
#include <EsCalc.hpp>
#include <EsEdCal.hpp>
#include <EsEdCalc.hpp>
#include <EsEdPop.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esdbed
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomDbNumberEdit;
class DELPHICLASS TEsDbNumberEdit;
class DELPHICLASS TEsCustomDbDateEdit;
class DELPHICLASS TEsDbDateEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEsCustomDbNumberEdit : public Esedcalc::TEsCustomNumberEdit
{
	typedef Esedcalc::TEsCustomNumberEdit inherited;
	
protected:
	System::Classes::TAlignment FAlignment;
	Vcl::Controls::TControlCanvas* FCanvas;
	Vcl::Dbctrls::TFieldDataLink* FDataLink;
	bool FFocused;
	System::UnicodeString __fastcall GetDataField(void);
	Data::Db::TDataSource* __fastcall GetDataSource(void);
	Data::Db::TField* __fastcall GetField(void);
	HIDESBASE bool __fastcall GetReadOnly(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetFocused(bool Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::Types::TPoint __fastcall GetTextMargins(void);
	void __fastcall UpdateData(System::TObject* Sender);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC bool __fastcall GetButtonEnabled(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall PopupClose(System::TObject* Sender);
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	
public:
	__fastcall virtual TEsCustomDbNumberEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomDbNumberEdit(void);
	DYNAMIC void __fastcall PopupOpen(void);
	__property Data::Db::TField* Field = {read=GetField};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomDbNumberEdit(HWND ParentWindow) : Esedcalc::TEsCustomNumberEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsDbNumberEdit : public TEsCustomDbNumberEdit
{
	typedef TEsCustomDbNumberEdit inherited;
	
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
	__property DataField = {default=0};
	__property DataSource;
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
	__property PopupCalcHeight = {default=140};
	__property PopupCalcFont;
	__property PopupCalcWidth = {default=200};
	__property PopupMenu;
	__property ReadOnly = {default=0};
	__property ShowButton = {default=1};
	__property ShowHint;
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
	/* TEsCustomDbNumberEdit.Create */ inline __fastcall virtual TEsDbNumberEdit(System::Classes::TComponent* AOwner) : TEsCustomDbNumberEdit(AOwner) { }
	/* TEsCustomDbNumberEdit.Destroy */ inline __fastcall virtual ~TEsDbNumberEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsDbNumberEdit(HWND ParentWindow) : TEsCustomDbNumberEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsCustomDbDateEdit : public Esedcal::TEsCustomDateEdit
{
	typedef Esedcal::TEsCustomDateEdit inherited;
	
protected:
	System::Classes::TAlignment FAlignment;
	Vcl::Controls::TControlCanvas* FCanvas;
	Vcl::Dbctrls::TFieldDataLink* FDataLink;
	bool FFocused;
	System::UnicodeString __fastcall GetDataField(void);
	Data::Db::TDataSource* __fastcall GetDataSource(void);
	Data::Db::TField* __fastcall GetField(void);
	HIDESBASE bool __fastcall GetReadOnly(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetFocused(bool Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::Types::TPoint __fastcall GetTextMargins(void);
	void __fastcall UpdateData(System::TObject* Sender);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC bool __fastcall GetButtonEnabled(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall PopupClose(System::TObject* Sender);
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	
public:
	__fastcall virtual TEsCustomDbDateEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomDbDateEdit(void);
	DYNAMIC void __fastcall PopupOpen(void);
	__property Data::Db::TField* Field = {read=GetField};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomDbDateEdit(HWND ParentWindow) : Esedcal::TEsCustomDateEdit(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsDbDateEdit : public TEsCustomDbDateEdit
{
	typedef TEsCustomDbDateEdit inherited;
	
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
	__property DataField = {default=0};
	__property DataSource;
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
	__property PopupMenu;
	__property PopupCalColors;
	__property PopupCalHeight = {default=140};
	__property PopupCalFont;
	__property PopupCalWidth = {default=200};
	__property ReadOnly = {default=0};
	__property RequiredFields;
	__property ShowButton = {default=1};
	__property ShowHint;
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
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
public:
	/* TEsCustomDbDateEdit.Create */ inline __fastcall virtual TEsDbDateEdit(System::Classes::TComponent* AOwner) : TEsCustomDbDateEdit(AOwner) { }
	/* TEsCustomDbDateEdit.Destroy */ inline __fastcall virtual ~TEsDbDateEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsDbDateEdit(HWND ParentWindow) : TEsCustomDbDateEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::Set<Data::Db::TFieldType, Data::Db::TFieldType::ftUnknown, Data::Db::TFieldType::ftSingle> NumFieldTypes;
extern DELPHI_PACKAGE System::Set<Data::Db::TFieldType, Data::Db::TFieldType::ftUnknown, Data::Db::TFieldType::ftSingle> DateFieldTypes;
}	/* namespace Esdbed */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESDBED)
using namespace Esdbed;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsdbedHPP
