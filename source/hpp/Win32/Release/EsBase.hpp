// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsBase.pas' rev: 32.00 (Windows)

#ifndef EsbaseHPP
#define EsbaseHPP

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
#include <EsConst.hpp>
#include <EsData.hpp>
#include <EsLabel.hpp>
#include <EsUtil.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esbase
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EEssentialsError;
class DELPHICLASS TEsAttachedLabel;
class DELPHICLASS TEsLabelInfo;
class DELPHICLASS TEsBase;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEsLabelPosition : unsigned char { dlpTopLeft, dlpBottomLeft };

#pragma pack(push,4)
class PASCALIMPLEMENTATION EEssentialsError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EEssentialsError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EEssentialsError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EEssentialsError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EEssentialsError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EEssentialsError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EEssentialsError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EEssentialsError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EEssentialsError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEssentialsError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EEssentialsError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEssentialsError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EEssentialsError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EEssentialsError(void) { }
	
};

#pragma pack(pop)

typedef void __fastcall (__closure *TEsAttachEvent)(System::TObject* Sender, bool Value);

class PASCALIMPLEMENTATION TEsAttachedLabel : public Eslabel::TEsCustomLabel
{
	typedef Eslabel::TEsCustomLabel inherited;
	
private:
	Vcl::Controls::TWinControl* FEsControl;
	void __fastcall eslSavePosition(void);
	
protected:
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TEsAttachedLabel(System::Classes::TComponent* AOwner);
	__fastcall virtual TEsAttachedLabel(System::Classes::TComponent* AOwner, Vcl::Controls::TWinControl* AControl);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Alignment = {default=0};
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property FocusControl;
	__property Font;
	__property Height;
	__property Left;
	__property Name = {default=0};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property Tag = {default=0};
	__property Top;
	__property Transparent;
	__property Width;
	__property WordWrap = {default=1};
	__property Appearance = {default=0};
	__property ColorScheme = {default=1};
	__property CustomSettings;
	__property Vcl::Controls::TWinControl* EsControl = {read=FEsControl, write=FEsControl};
public:
	/* TEsCustomLabel.Destroy */ inline __fastcall virtual ~TEsAttachedLabel(void) { }
	
};


class PASCALIMPLEMENTATION TEsLabelInfo : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FOffsetX;
	int FOffsetY;
	System::Classes::TNotifyEvent FOnChange;
	TEsAttachEvent FOnAttach;
	void __fastcall DoOnAttach(void);
	void __fastcall DoOnChange(void);
	void __fastcall SetOffsetX(int Value);
	void __fastcall SetOffsetY(int Value);
	void __fastcall SetVisible(bool Value);
	
public:
	TEsAttachedLabel* ALabel;
	bool FVisible;
	__property TEsAttachEvent OnAttach = {read=FOnAttach, write=FOnAttach};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	void __fastcall SetOffsets(int X, int Y);
	
__published:
	__property int OffsetX = {read=FOffsetX, write=SetOffsetX, nodefault};
	__property int OffsetY = {read=FOffsetY, write=SetOffsetY, nodefault};
	__property bool Visible = {read=FVisible, write=SetVisible, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEsLabelInfo(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEsLabelInfo(void) : System::Classes::TPersistent() { }
	
};


typedef void __fastcall (__closure *TMouseWheelEvent)(System::TObject* Sender, System::Classes::TShiftState Shift, System::Word Delta, System::Word XPos, System::Word YPos);

class PASCALIMPLEMENTATION TEsBase : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
protected:
	TEsLabelInfo* FEsLabel;
	TMouseWheelEvent FOnMouseWheel;
	TEsAttachedLabel* __fastcall GetAttachedLabel(void);
	System::UnicodeString __fastcall GetVersion(void);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall LabelChange(System::TObject* Sender);
	void __fastcall LabelAttach(System::TObject* Sender, bool Value);
	void __fastcall PositionLabel(void);
	MESSAGE void __fastcall ESAssignLabel(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall ESPositionLabel(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall ESRecordLabelPosition(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMMouseWheel(Winapi::Messages::TMessage &Msg);
	TEsLabelPosition DefaultLabelPosition;
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall DoOnMouseWheel(System::Classes::TShiftState Shift, short Delta, short XPos, short YPos);
	__property TEsLabelInfo* EsLabelInfo = {read=FEsLabel, write=FEsLabel};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	
public:
	__fastcall virtual TEsBase(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsBase(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property TEsAttachedLabel* AttachedLabel = {read=GetAttachedLabel};
	
__published:
	__property TMouseWheelEvent OnMouseWheel = {read=FOnMouseWheel, write=FOnMouseWheel};
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsBase(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Esbase */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESBASE)
using namespace Esbase;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsbaseHPP
