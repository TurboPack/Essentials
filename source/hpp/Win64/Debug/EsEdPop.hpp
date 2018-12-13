// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsEdPop.pas' rev: 32.00 (Windows)

#ifndef EsedpopHPP
#define EsedpopHPP

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
#include <EsLabel.hpp>
#include <EsUtil.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esedpop
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsEdButton;
class DELPHICLASS TEsEdPopup;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEsEdButton : public Vcl::Buttons::TBitBtn
{
	typedef Vcl::Buttons::TBitBtn inherited;
	
public:
	DYNAMIC void __fastcall Click(void);
public:
	/* TBitBtn.Create */ inline __fastcall virtual TEsEdButton(System::Classes::TComponent* AOwner) : Vcl::Buttons::TBitBtn(AOwner) { }
	/* TBitBtn.Destroy */ inline __fastcall virtual ~TEsEdButton(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsEdButton(HWND ParentWindow) : Vcl::Buttons::TBitBtn(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TEsEdPopup : public Vcl::Stdctrls::TCustomEdit
{
	typedef Vcl::Stdctrls::TCustomEdit inherited;
	
protected:
	TEsEdButton* FButton;
	Esbase::TEsLabelInfo* FEsLabel;
	bool FPopupActive;
	bool FShowButton;
	Esbase::TEsAttachedLabel* __fastcall GetAttachedLabel(void);
	System::UnicodeString __fastcall GetVersion(void);
	void __fastcall SetShowButton(bool Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	int __fastcall GetButtonWidth(void);
	void __fastcall LabelChange(System::TObject* Sender);
	void __fastcall LabelAttach(System::TObject* Sender, bool Value);
	void __fastcall PositionLabel(void);
	MESSAGE void __fastcall ESAssignLabel(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall ESPositionLabel(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall ESRecordLabelPosition(Winapi::Messages::TMessage &Msg);
	Esbase::TEsLabelPosition DefaultLabelPosition;
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC bool __fastcall GetButtonEnabled(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall PopupClose(System::TObject* Sender);
	__property Esbase::TEsLabelInfo* EsLabelInfo = {read=FEsLabel, write=FEsLabel};
	__property bool ShowButton = {read=FShowButton, write=SetShowButton, default=1};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	
public:
	__fastcall virtual TEsEdPopup(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsEdPopup(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property Esbase::TEsAttachedLabel* AttachedLabel = {read=GetAttachedLabel};
	DYNAMIC void __fastcall PopupOpen(void);
	__property bool PopupActive = {read=FPopupActive, nodefault};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsEdPopup(HWND ParentWindow) : Vcl::Stdctrls::TCustomEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Esedpop */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESEDPOP)
using namespace Esedpop;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsedpopHPP
