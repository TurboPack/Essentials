// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsMarque.pas' rev: 32.00 (Windows)

#ifndef EsmarqueHPP
#define EsmarqueHPP

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
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.MMSystem.hpp>
#include <Vcl.StdCtrls.hpp>
#include <System.SysUtils.hpp>
#include <EsData.hpp>
#include <EsLabel.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esmarque
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomScrollingMarquee;
class DELPHICLASS TEsScrollingMarquee;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TEsBehaviors : unsigned char { bhCycle, bhBounce, bhOnce };

enum DECLSPEC_DENUM TEsScrollDirection : unsigned char { sdRightToLeft, sdLeftToRight, sdTopToBottom, sdBottomToTop };

typedef System::Int8 TEsScrollSpeed;

class PASCALIMPLEMENTATION TEsCustomScrollingMarquee : public Eslabel::TEsCustomLabel
{
	typedef Eslabel::TEsCustomLabel inherited;
	
protected:
	bool FActive;
	TEsBehaviors FBehavior;
	TEsScrollSpeed FScrollSpeed;
	TEsScrollDirection FScrollDirection;
	System::Classes::TNotifyEvent FOnCycle;
	Vcl::Graphics::TBitmap* smBmp;
	HDC smDC;
	unsigned smDelay;
	bool smDirty;
	HWND smHandle;
	HBITMAP smOldBmp;
	System::Types::TPoint smPos;
	unsigned smResolution;
	int smTextHeight;
	int smTextWidth;
	unsigned smTimerId;
	void __fastcall smChanged(void);
	void __fastcall smKillTimer(void);
	void __fastcall smSetTimer(void);
	void __fastcall smWndProc(Winapi::Messages::TMessage &Message);
	System::Classes::TAlignment __fastcall GetAlignment(void);
	void __fastcall SetActive(bool Value);
	HIDESBASE void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetBehavior(TEsBehaviors Value);
	void __fastcall SetScrollDirection(TEsScrollDirection Value);
	void __fastcall SetScrollSpeed(TEsScrollSpeed Value);
	HIDESBASE MESSAGE void __fastcall CMColorChanged(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMTextChanged(Winapi::Messages::TWMNoParams &Message);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall DoOnCycle(void);
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property System::Classes::TAlignment Alignment = {read=GetAlignment, write=SetAlignment, nodefault};
	__property TEsBehaviors Behavior = {read=FBehavior, write=SetBehavior, default=0};
	__property TEsScrollDirection ScrollDirection = {read=FScrollDirection, write=SetScrollDirection, default=0};
	__property TEsScrollSpeed ScrollSpeed = {read=FScrollSpeed, write=SetScrollSpeed, nodefault};
	__property System::Classes::TNotifyEvent OnCycle = {read=FOnCycle, write=FOnCycle};
	
public:
	__fastcall virtual TEsCustomScrollingMarquee(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomScrollingMarquee(void);
	virtual void __fastcall Invalidate(void);
};


class PASCALIMPLEMENTATION TEsScrollingMarquee : public TEsCustomScrollingMarquee
{
	typedef TEsCustomScrollingMarquee inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property Active = {default=0};
	__property Align = {default=0};
	__property Alignment;
	__property Appearance = {default=3};
	__property Behavior = {default=0};
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
	__property ScrollDirection = {default=0};
	__property ScrollSpeed;
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property WordWrap = {default=1};
	__property Version = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnCycle;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
public:
	/* TEsCustomScrollingMarquee.Create */ inline __fastcall virtual TEsScrollingMarquee(System::Classes::TComponent* AOwner) : TEsCustomScrollingMarquee(AOwner) { }
	/* TEsCustomScrollingMarquee.Destroy */ inline __fastcall virtual ~TEsScrollingMarquee(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word SM_TIMER = System::Word(0x5f4);
}	/* namespace Esmarque */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESMARQUE)
using namespace Esmarque;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsmarqueHPP
