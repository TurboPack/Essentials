// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsRollUp.pas' rev: 32.00 (Windows)

#ifndef EsrollupHPP
#define EsrollupHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.MMSystem.hpp>
#include <EsConst.hpp>
#include <EsData.hpp>

//-- user supplied -----------------------------------------------------------

namespace Esrollup
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsCustomRollUp;
class DELPHICLASS TEsRollUp;
//-- type declarations -------------------------------------------------------
typedef System::Int8 TEsAnimateSpeed;

class PASCALIMPLEMENTATION TEsCustomRollUp : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	bool FAnimate;
	TEsAnimateSpeed FAnimateSpeed;
	bool FHookForm;
	int FMinHeight;
	System::Classes::TNotifyEvent FOnRollDown;
	System::Classes::TNotifyEvent FOnRollUp;
	void *ruNewWndProc;
	int ruOldHeight;
	void *ruPrevWndProc;
	bool __fastcall GetRolledUp(void);
	System::UnicodeString __fastcall GetVersion(void);
	void __fastcall SetAnimateSpeed(TEsAnimateSpeed Value);
	void __fastcall SetHookForm(bool Value);
	void __fastcall SetMinHeight(int Value);
	void __fastcall SetRolledUp(bool Value);
	void __fastcall SetVersion(const System::UnicodeString Value);
	void __fastcall ruWndProc(Winapi::Messages::TMessage &Msg);
	DYNAMIC void __fastcall DoOnRollDown(void);
	DYNAMIC void __fastcall DoOnRollUp(void);
	__property bool Animate = {read=FAnimate, write=FAnimate, default=1};
	__property TEsAnimateSpeed AnimateSpeed = {read=FAnimateSpeed, write=FAnimateSpeed, default=8};
	__property bool HookForm = {read=FHookForm, write=SetHookForm, default=0};
	__property int MinHeight = {read=FMinHeight, write=SetMinHeight, nodefault};
	__property bool RolledUp = {read=GetRolledUp, write=SetRolledUp, stored=false, nodefault};
	__property System::UnicodeString Version = {read=GetVersion, write=SetVersion, stored=false};
	__property System::Classes::TNotifyEvent OnRollDown = {read=FOnRollDown, write=FOnRollDown};
	__property System::Classes::TNotifyEvent OnRollUp = {read=FOnRollUp, write=FOnRollUp};
	
public:
	__fastcall virtual TEsCustomRollUp(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TEsCustomRollUp(void);
};


class PASCALIMPLEMENTATION TEsRollUp : public TEsCustomRollUp
{
	typedef TEsCustomRollUp inherited;
	
__published:
	__property Animate = {default=1};
	__property AnimateSpeed = {default=8};
	__property HookForm = {default=0};
	__property MinHeight;
	__property RolledUp;
	__property Version = {default=0};
	__property OnRollDown;
	__property OnRollUp;
public:
	/* TEsCustomRollUp.Create */ inline __fastcall virtual TEsRollUp(System::Classes::TComponent* AOwner) : TEsCustomRollUp(AOwner) { }
	/* TEsCustomRollUp.Destroy */ inline __fastcall virtual ~TEsRollUp(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const bool ruDefAnimate = true;
static const System::Int8 ruDefAnimateSpeed = System::Int8(0x8);
}	/* namespace Esrollup */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESROLLUP)
using namespace Esrollup;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EsrollupHPP
