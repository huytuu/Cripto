object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 543
  ClientWidth = 734
  Color = clGradientActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Main: TPageControl
    Left = 0
    Top = 8
    Width = 657
    Height = 481
    ActivePage = Cesar
    TabOrder = 0
    object Cesar: TTabSheet
      Caption = 'Cesar'
      object Label1: TLabel
        Left = 256
        Top = 56
        Width = 38
        Height = 13
        Caption = 'Entrada'
      end
      object Label2: TLabel
        Left = 256
        Top = 120
        Width = 28
        Height = 13
        Caption = 'Salida'
      end
      object Button1: TButton
        Left = 48
        Top = 32
        Width = 75
        Height = 25
        Caption = 'Encriptar'
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 48
        Top = 96
        Width = 75
        Height = 25
        Caption = 'Desencriptar'
        TabOrder = 1
      end
      object Memo1: TMemo
        Left = 376
        Top = 53
        Width = 185
        Height = 89
        Lines.Strings = (
          'Memo1')
        TabOrder = 2
      end
      object Memo2: TMemo
        Left = 360
        Top = 200
        Width = 185
        Height = 89
        Lines.Strings = (
          'Memo2')
        TabOrder = 3
      end
    end
    object Vigenere: TTabSheet
      Caption = 'Vigenere'
      ImageIndex = 1
      object Label3: TLabel
        Left = 352
        Top = 3
        Width = 38
        Height = 13
        Caption = 'entrada'
      end
      object Label4: TLabel
        Left = 344
        Top = 157
        Width = 27
        Height = 13
        Caption = 'salida'
      end
      object Button3: TButton
        Left = 112
        Top = 67
        Width = 75
        Height = 25
        Caption = 'Encriptar'
        TabOrder = 0
        OnClick = Button3Click
      end
      object Button4: TButton
        Left = 112
        Top = 145
        Width = 75
        Height = 25
        Caption = 'Desencriptar'
        TabOrder = 1
        OnClick = Button4Click
      end
      object MemoInput: TMemo
        Left = 344
        Top = 22
        Width = 321
        Height = 139
        TabOrder = 2
      end
      object MemoOutput: TMemo
        Left = 344
        Top = 176
        Width = 321
        Height = 137
        TabOrder = 3
      end
      object MemoClave: TMemo
        Left = 112
        Top = 200
        Width = 185
        Height = 25
        TabOrder = 4
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Transposicion Por Columnas'
      ImageIndex = 2
      object Label5: TLabel
        Left = 376
        Top = 228
        Width = 28
        Height = 13
        Caption = 'Salida'
      end
      object Label6: TLabel
        Left = 376
        Top = 3
        Width = 38
        Height = 13
        Caption = 'Entrada'
      end
      object Button5: TButton
        Left = 40
        Top = 80
        Width = 75
        Height = 25
        Caption = 'Encriptar'
        TabOrder = 0
      end
      object Button6: TButton
        Left = 40
        Top = 144
        Width = 75
        Height = 27
        Caption = 'Desencriptar'
        TabOrder = 1
      end
      object Memo5: TMemo
        Left = 368
        Top = 22
        Width = 312
        Height = 200
        Lines.Strings = (
          '')
        TabOrder = 2
      end
      object Memo6: TMemo
        Left = 368
        Top = 264
        Width = 329
        Height = 153
        TabOrder = 3
      end
    end
  end
end