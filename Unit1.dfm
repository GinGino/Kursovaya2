object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 749
  ClientWidth = 960
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Number1: TEdit
    Left = 96
    Top = 36
    Width = 50
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Visible = False
  end
  object Number2: TEdit
    Left = 152
    Top = 36
    Width = 50
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Visible = False
  end
  object AddLeaves: TButton
    Left = 208
    Top = 36
    Width = 33
    Height = 33
    Caption = '+'
    TabOrder = 2
    Visible = False
    OnClick = AddLeavesClick
  end
  object AddRoot: TButton
    Left = 96
    Top = 75
    Width = 145
    Height = 38
    Caption = 'Add Root'
    TabOrder = 3
    OnClick = AddRootClick
  end
  object Root: TEdit
    Left = 448
    Top = 32
    Width = 60
    Height = 24
    Alignment = taCenter
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    Text = '1'
    Visible = False
  end
  object Result: TEdit
    Left = 96
    Top = 75
    Width = 145
    Height = 21
    TabOrder = 5
    Visible = False
  end
end
