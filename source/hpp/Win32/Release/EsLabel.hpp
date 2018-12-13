// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsLabel.pas' rev: 32.00 (Windows)

#ifndef EslabelHPP
#define EslabelHPP

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
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <EsConst.hpp>
#include <EsData.hpp>
#include <EsUtil.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Eslabel
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomSettings;
class DELPHICLASS TEsCustomLabel;
class DELPHICLASS TEsLabel;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEsAppearance : unsigned char { apNone, apCustom, apFlying, apRaised, apSunken, apShadow };

enum DECLSPEC_DENUM TEsColorScheme : unsigned char { csCustom, csText, csWindows, csEmbossed, csGold, csSteel };

enum DECLSPEC_DENUM TEsGraduateStyle : unsigned char { gsNone, gsHorizontal, gsVertical };

enum DECLSPEC_DENUM TEsShadeDirection : unsigned char { sdNone, sdUp, sdUpRight, sdRight, sdDownRight, sdDown, sdDownLeft, sdLeft, sdUpLeft };

enum DECLSPEC_DENUM TEsShadeStyle : unsigned char { ssPlain, ssExtrude, ssGraduated };

typedef System::Byte TEsDepth;

class PASCALIMPLEMENTATION TEsCustomSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Uitypes::TColor FGraduateFromColor;
	TEsGraduateStyle FGraduateStyle;
	System::Uitypes::TColor FHighlightColor;
	TEsDepth FHighlightDepth;
	TEsShadeDirection FHighlightDirection;
	TEsShadeStyle FHighlightStyle;
	System::Uitypes::TColor FShadowColor;
	TEsDepth FShadowDepth;
	TEsShadeDirection FShadowDirection;
	TEsShadeStyle FShadowStyle;
	System::Classes::TNotifyEvent FOnColorChange;
	System::Classes::TNotifyEvent FOnStyleChange;
	bool FUpdating;
	void __fastcall DoOnColorChange(void);
	void __fastcall DoOnStyleChange(void);
	void __fastcall SetGraduateFromColor(System::Uitypes::TColor Value);
	void __fastcall SetGraduateStyle(TEsGraduateStyle Value);
	void __fastcall SetHighlightColor(System::Uitypes::TColor Value);
	void __fastcall SetHighlightDepth(TEsDepth Value);
	void __fastcall SetHighlightDirection(TEsShadeDirection Value);
	void __fastcall SetHighlightStyle(TEsShadeStyle Value);
	void __fastcall SetShadowColor(System::Uitypes::TColor Value);
	void __fastcall SetShadowDepth(TEsDepth Value);
	void __fastcall SetShadowDirection(TEsShadeDirection Value);
	void __fastcall SetShadowStyle(TEsShadeStyle Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	__property System::Classes::TNotifyEvent OnColorChange = {read=FOnColorChange, write=FOnColorChange};
	__property System::Classes::TNotifyEvent OnStyleChange = {read=FOnStyleChange, write=FOnStyleChange};
	
__published:
	__property System::Uitypes::TColor GraduateFromColor = {read=FGraduateFromColor, write=SetGraduateFromColor, default=8421504};
	__property TEsGraduateStyle GraduateStyle = {read=FGraduateStyle, write=SetGraduateStyle, default=0};
	__property System::Uitypes::TColor HighlightColor = {read=FHighlightColor, write=SetHighlightColor, default=16777215};
	__property TEsDepth HighlightDepth = {read=FHighlightDepth, write=SetHighlightDepth, default=1};
	__property TEsShadeDirection HighlightDirection = {read=FHighlightDirection, write=SetHighlightDirection, default=8};
	__property TEsShadeStyle HighlightStyle = {read=FHighlightStyle, write=SetHighlightStyle, default=0};
	__property System::Uitypes::TColor ShadowColor = {read=FShadowColor, write=SetShadowColor, default=0};
	__property TEsDepth ShadowDepth = {read=FShadowDepth, write=SetShadowDepth, default=1};
	__property TEsShadeDirection ShadowDirection = {read=FShadowDirection, write=SetShadowDirection, default=4};
	__property TEsShadeStyle ShadowStyle = {read=FShadowStyle, write=SetShadowStyle, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TEsCustomSettings(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TEsCustomSettings(void) : System::Classes::TPersistent() { }
	
};


class PASCALIMPLEMENTATION TEsCustomLabel : public Vcl::Stdctrls::TCustomLabel
{
	typedef Vcl::Stdctrls::TCustomLabel inherited;
	
	
private:
	enum DECLSPEC_DENUM _TEsCustomLabel__1 : unsigned char { cpHighlight, cpShadow, cpFace };
	
	
protected:
	TEsAppearance FAppearance;
	TEsColorScheme FColorScheme;
	TEsCustomSettings* FCustomSettings;
	System::StaticArray<System::StaticArray<System::Uitypes::TColor, 3>, 6> eslSchemes;
	bool SettingColorScheme;
	bool SettingAppearance;
	System::UnicodeString __fastcall GetVersion(void);
	bool __fastcall GetWordWrap(void);
	void __fastcall SetAppearance(TEsAppearance Value);
	void __fastcall SetColorScheme(TEsColorScheme Value);
	HIDESBASE void __fastcall SetWordWrap(bool Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall PaintPrim(const System::Types::TRect &CR, System::Word Flags);
	void __fastcall ColorChanged(System::TObject* Sender);
	void __fastcall StyleChanged(System::TObject* Sender);
	virtual void __fastcall Paint(void);
	__property TEsAppearance Appearance = {read=FAppearance, write=SetAppearance, default=3};
	__property TEsColorScheme ColorScheme = {read=FColorScheme, write=SetColorScheme, default=2};
	__property TEsCustomSettings* CustomSettings = {read=FCustomSettings, write=FCustomSettings};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	__property bool WordWrap = {read=GetWordWrap, write=SetWordWrap, default=1};
	
public:
	__fastcall virtual TEsCustomLabel(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomLabel(void);
	void __fastcall PaintTo(HDC DC, const System::Types::TRect &CR, System::Word Flags);
	__property AutoSize = {default=1};
};


class PASCALIMPLEMENTATION TEsLabel : public TEsCustomLabel
{
	typedef TEsCustomLabel inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Appearance = {default=3};
	__property Caption = {default=0};
	__property Color = {default=-16777211};
	__property ColorScheme = {default=2};
	__property Cursor = {default=0};
	__property CustomSettings;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FocusControl;
	__property Font;
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property Transparent = {default=1};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property WordWrap = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TEsCustomLabel.Create */ inline __fastcall virtual TEsLabel(System::Classes::TComponent* AOwner) : TEsCustomLabel(AOwner) { }
	/* TEsCustomLabel.Destroy */ inline __fastcall virtual ~TEsLabel(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const TEsAppearance lblDefAppearance = (TEsAppearance)(3);
static const bool lblDefAutoSize = false;
static const TEsColorScheme lblDefColorScheme = (TEsColorScheme)(2);
#define lblDefFontName L"Times New Roman"
static const System::Int8 lblDefFontSize = System::Int8(0x14);
static const int lblDefGraduateFromColor = int(8421504);
static const TEsGraduateStyle lblDefGraduateStyle = (TEsGraduateStyle)(0);
static const int lblDefHighlightColor = int(16777215);
static const System::Int8 lblDefHighlightDepth = System::Int8(0x1);
static const TEsShadeDirection lblDefHighlightDirection = (TEsShadeDirection)(8);
static const TEsShadeStyle lblDefHighlightStyle = (TEsShadeStyle)(0);
static const int lblDefShadowColor = int(0);
static const System::Int8 lblDefShadowDepth = System::Int8(0x1);
static const TEsShadeDirection lblDefShadowDirection = (TEsShadeDirection)(4);
static const TEsShadeStyle lblDefShadowStyle = (TEsShadeStyle)(0);
static const bool lblDefTransparent = true;
static const bool lblDefWordWrap = true;
}	/* namespace Eslabel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESLABEL)
using namespace Eslabel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EslabelHPP
