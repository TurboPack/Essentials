/// <summary>
///   This unit contains tests for the EsEdCal unit.
/// </summary>
unit TestEsEdCal;

interface

uses
  Vcl.StdCtrls, Vcl.Forms, TestFramework, EsEdCal;

type
  /// <summary>
  ///   This is a test class for TEsDateEdit.
  /// </summary>
  TTestEsDateEdit = class(TTestCase)
  strict private
    /// <summary>
    ///   The TEsDateEdit that should be tested.
    /// </summary>
    FDateEdit: TEsDateEdit;
    /// <summary>
    ///   A normal TEEdit that can get the focus.
    /// </summary>
    FEdit: TEdit;
    /// <summary>
    ///   The form that has the TEsDateEdit control.
    /// </summary>
    FForm: TForm;
  strict protected
    /// <summary>
    ///   Is called to set up the test environment. In this case a form with
    ///   some controls is created.
    /// </summary>
    procedure SetUp; override;
    /// <summary>
    ///   This method is called to destroy the the controls that are create in
    ///   Setup.
    /// </summary>
    procedure TearDown; override;
  published
    /// <summary>
    ///   Tests what happens if the TEsDateEdit gets an onExit event.
    /// </summary>
    procedure TestExit;
  end;

implementation

uses
  System.SysUtils;

{ TTestEsDateEdit }

procedure TTestEsDateEdit.SetUp;
begin
  inherited SetUp;
  FForm := TForm.Create(nil);

  FDateEdit := TEsDateEdit.Create(FForm);
  FDateEdit.Parent := FForm;

  FEdit := TEdit.Create(FForm);
  FEdit.Parent := FForm;

  FForm.Show;
end;

procedure TTestEsDateEdit.TearDown;
begin
  FForm.Free;
  inherited TearDown;
end;

procedure TTestEsDateEdit.TestExit;
begin
  FDateEdit.SetFocus;
  FDateEdit.Text := DateToStr(Date);
  FEdit.SetFocus;
end;

initialization
  RegisterTest(TTestEsDateEdit.Suite);
end.

