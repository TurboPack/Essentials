// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'EsLabel0.pas' rev: 32.00 (Windows)

#ifndef Eslabel0HPP
#define Eslabel0HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.StdCtrls.hpp>
#include <EsLabel.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <Vcl.Menus.hpp>
#include <System.IniFiles.hpp>
#include <EsBase.hpp>
#include <EsData.hpp>
#include <EsMnuBtn.hpp>
#include <EsClrCbx.hpp>
#include <EsDir.hpp>
#include <EsWebPE.hpp>
#include <System.TypInfo.hpp>

//-- user supplied -----------------------------------------------------------

namespace Eslabel0
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEsLabelFrm;
class DELPHICLASS TEsLabelEditor;
class DELPHICLASS TEsCustomSettingsProperty;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEsLabelFrm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Vcl::Extctrls::TPanel* Panel1;
	Eslabel::TEsLabel* EsLabel;
	Vcl::Stdctrls::TButton* Button1;
	Vcl::Stdctrls::TButton* Button2;
	Vcl::Extctrls::TPanel* Panel2;
	Vcl::Stdctrls::TComboBox* SchemeCb;
	Vcl::Stdctrls::TButton* SaveAsBtn;
	Vcl::Stdctrls::TButton* DeleteBtn;
	Vcl::Extctrls::TPanel* Panel3;
	Vcl::Extctrls::TRadioGroup* GraduateRg;
	Vcl::Extctrls::TRadioGroup* ShadowRg;
	Vcl::Extctrls::TRadioGroup* HighlightRg;
	Esclrcbx::TEsColorComboBox* FromColorCcb;
	Esclrcbx::TEsColorComboBox* HighlightColorCcb;
	Esclrcbx::TEsColorComboBox* ShadowColorCcb;
	Vcl::Stdctrls::TLabel* HighlightDirectionLbl;
	Vcl::Stdctrls::TLabel* ShadowDirectionLbl;
	Esclrcbx::TEsColorComboBox* FontColorCcb;
	Vcl::Extctrls::TPanel* Panel4;
	Vcl::Stdctrls::TScrollBar* FontSizeSb;
	Vcl::Stdctrls::TLabel* FontSizeLbl;
	Vcl::Stdctrls::TLabel* HighlightDepthLbl;
	Vcl::Stdctrls::TLabel* ShadowDepthLbl;
	Vcl::Stdctrls::TScrollBar* ShadowDepthSb;
	Vcl::Stdctrls::TScrollBar* HighlightDepthSb;
	Vcl::Stdctrls::TComboBox* AppearanceCb;
	Vcl::Stdctrls::TComboBox* ColorSchemeCb;
	void __fastcall FontSizeSbChange(System::TObject* Sender);
	void __fastcall HighlightDepthSbChange(System::TObject* Sender);
	void __fastcall ShadowDepthSbChange(System::TObject* Sender);
	void __fastcall GraduateRgClick(System::TObject* Sender);
	void __fastcall HighlightRgClick(System::TObject* Sender);
	void __fastcall ShadowRgClick(System::TObject* Sender);
	void __fastcall FromColorCcbChange(System::TObject* Sender);
	void __fastcall HighlightColorCcbChange(System::TObject* Sender);
	void __fastcall ShadowColorCcbChange(System::TObject* Sender);
	void __fastcall FontColorCcbChange(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall SaveAsBtnClick(System::TObject* Sender);
	void __fastcall DeleteBtnClick(System::TObject* Sender);
	void __fastcall SchemeCbChange(System::TObject* Sender);
	void __fastcall AppearanceCbChange(System::TObject* Sender);
	void __fastcall ColorSchemeCbChange(System::TObject* Sender);
	
public:
	Esdir::TEsDirectionPicker* HighlightDirectionDp;
	Esdir::TEsDirectionPicker* ShadowDirectionDp;
	bool SettingScheme;
	bool SettingCb;
	void __fastcall DeleteScheme(const System::UnicodeString S);
	void __fastcall HighlightDirectionChange(System::TObject* Sender);
	void __fastcall ShadowDirectionChange(System::TObject* Sender);
	void __fastcall SchemeChange(void);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TEsLabelFrm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TEsLabelFrm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TEsLabelFrm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TEsLabelFrm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TEsLabelEditor : public Designeditors::TDefaultEditor
{
	typedef Designeditors::TDefaultEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TEsLabelEditor(System::Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TDefaultEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TEsLabelEditor(void) { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TEsCustomSettingsProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit(void);
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TEsCustomSettingsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TEsCustomSettingsProperty(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall EditEsLabel(Eslabel::TEsLabel* L);
}	/* namespace Eslabel0 */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ESLABEL0)
using namespace Eslabel0;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Eslabel0HPP
