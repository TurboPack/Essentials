// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsClrCbx.pas' rev: 32.00 (Windows)

#ifndef EsclrcbxHPP
#define EsclrcbxHPP

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
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.StdCtrls.hpp>
#include <EsBase.hpp>
#include <EsConst.hpp>
#include <EsData.hpp>
#include <EsUtil.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esclrcbx
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomColorComboBox;
class DELPHICLASS TEsColorComboBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEsCustomColorComboBox : public Vcl::Stdctrls::TCustomComboBox
{
	typedef Vcl::Stdctrls::TCustomComboBox inherited;
	
protected:
	Esbase::TEsLabelInfo* FEsLabel;
	bool FShowColorNames;
	int BoxWidth;
	Esbase::TEsAttachedLabel* __fastcall GetAttachedLabel(void);
	System::Uitypes::TColor __fastcall GetSelectedColor(void);
	System::UnicodeString __fastcall GetVersion(void);
	void __fastcall SetSelectedColor(System::Uitypes::TColor Value);
	void __fastcall SetShowColorNames(bool Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall CalculateBoxWidth(void);
	void __fastcall LabelChange(System::TObject* Sender);
	void __fastcall LabelAttach(System::TObject* Sender, bool Value);
	void __fastcall PositionLabel(void);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall ESAssignLabel(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall ESPositionLabel(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall ESRecordLabelPosition(Winapi::Messages::TMessage &Msg);
	Esbase::TEsLabelPosition DefaultLabelPosition;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property Esbase::TEsLabelInfo* EsLabelInfo = {read=FEsLabel, write=FEsLabel};
	__property System::Uitypes::TColor SelectedColor = {read=GetSelectedColor, write=SetSelectedColor, stored=false, nodefault};
	__property bool ShowColorNames = {read=FShowColorNames, write=SetShowColorNames, default=1};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	
public:
	__fastcall virtual TEsCustomColorComboBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomColorComboBox(void);
	virtual void __fastcall DrawItem(int Index, const System::Types::TRect &Rect, Winapi::Windows::TOwnerDrawState State);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Esbase::TEsAttachedLabel* AtachedLabel = {read=GetAttachedLabel};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsCustomColorComboBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomComboBox(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsColorComboBox : public TEsCustomColorComboBox
{
	typedef TEsCustomColorComboBox inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Cursor = {default=0};
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property DropDownCount = {default=8};
	__property Enabled = {default=1};
	__property EsLabelInfo;
	__property Font;
	__property Height;
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property SelectedColor;
	__property ShowColorNames = {default=1};
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
	__property OnDropDown;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnStartDrag;
public:
	/* TEsCustomColorComboBox.Create */ inline __fastcall virtual TEsColorComboBox(System::Classes::TComponent* AOwner) : TEsCustomColorComboBox(AOwner) { }
	/* TEsCustomColorComboBox.Destroy */ inline __fastcall virtual ~TEsColorComboBox(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsColorComboBox(HWND ParentWindow) : TEsCustomColorComboBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Esclrcbx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESCLRCBX)
using namespace Esclrcbx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsclrcbxHPP
