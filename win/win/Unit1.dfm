object Form1: TForm1
  Left = 652
  Top = 116
  Width = 1044
  Height = 540
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 128
    Top = 80
    Width = 32
    Height = 13
    Caption = 'FOR B'
  end
  object Label2: TLabel
    Left = 128
    Top = 144
    Width = 32
    Height = 13
    Caption = 'FOR A'
  end
  object Label3: TLabel
    Left = 128
    Top = 232
    Width = 32
    Height = 13
    Caption = 'FOR Z'
  end
  object Edit1: TEdit
    Left = 176
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 176
    Top = 144
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 176
    Top = 232
    Width = 121
    Height = 21
    TabOrder = 2
    Text = 'Edit3'
  end
  object Button1: TButton
    Left = 120
    Top = 328
    Width = 161
    Height = 73
    Caption = 'START'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 456
    Top = 240
    Width = 385
    Height = 193
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 4
  end
  object RadioGroup1: TRadioGroup
    Left = 688
    Top = 104
    Width = 185
    Height = 105
    Caption = #1074#1099#1073#1086#1088' '#1092#1091#1085#1082#1094#1080#1080
    Items.Strings = (
      '2x'
      'x^2'
      'x/3')
    TabOrder = 5
  end
end
