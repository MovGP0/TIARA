/* Ghidra address: 01296c90 */
/* Ghidra symbol: FUN_01296c90 */


/* WARNING: Removing unreachable block (ram,0x0129762f) */

void FUN_01296c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,longlong param_6,longlong param_7,undefined8 param_8,
                 longlong param_9)

{
  char cVar1;
  uint uVar2;
  bool bVar4;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  wchar_t *local_250;
  undefined *local_248;
  undefined *local_240;
  longlong local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined *local_210;
  ulonglong local_200;
  wchar_t *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  byte local_3d;
  int local_3c;
  longlong local_38;
  byte local_29;
  undefined8 local_28;
  ulonglong local_20;
  longlong local_18;
  undefined8 local_10;
  ulonglong uVar3;
  
  local_50 = auStack_278;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = (wchar_t *)0x0;
  local_200 = 0;
  local_1b8 = 0;
  local_1c0 = (undefined *)0x0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = (wchar_t *)0x0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_118 = 0;
  local_120 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  cVar1 = FUN_0113f6d0(param_9 + 1000);
  if (cVar1 != '\0') {
    FUN_0113f760(param_3,param_4,param_9 + 1000);
  }
  local_258 = L"Caption";
  FUN_00de8b50(&local_60,L"TFrequencySpectrumDlg",L"Label1",param_8);
  FUN_004168b0(&local_68,local_60);
  local_258 = (wchar_t *)local_68;
  local_250 = L"0";
  local_248 = *(undefined **)(param_9 + 0x3e9);
  local_240 = (undefined *)((ulonglong)local_240 & 0xffffffffffffff00);
  FUN_01250840(&local_58,param_1,param_2,param_5);
  local_258 = L"Caption";
  FUN_00de8b50(&local_78,L"TFrequencySpectrumDlg",L"Label2",param_8);
  FUN_004168b0(&local_80,local_78);
  local_258 = (wchar_t *)local_80;
  local_250 = L"1";
  local_248 = *(undefined **)(param_9 + 0x3f1);
  local_240 = (undefined *)((ulonglong)local_240 & 0xffffffffffffff00);
  FUN_01250840(&local_70,param_1,param_2,param_5);
  local_258 = L"Caption";
  FUN_00de8b50(&local_90,L"TFrequencySpectrumDlg",L"Label3",param_8);
  FUN_004168b0(&local_98,local_90);
  local_258 = (wchar_t *)local_98;
  local_250 = L"2";
  local_248 = *(undefined **)(param_9 + 0x3f9);
  local_240 = (undefined *)((ulonglong)local_240 & 0xffffffffffffff00);
  FUN_01250840(&local_88,param_1,param_2,param_5);
  local_258 = L"Caption";
  FUN_00de8b50(&local_a8,L"TFrequencySpectrumDlg",L"Label4",param_8);
  FUN_004168b0(&local_b0,local_a8);
  local_258 = (wchar_t *)local_b0;
  local_250 = L"3";
  local_248 = *(undefined **)(param_9 + 0x401);
  local_240 = (undefined *)((ulonglong)local_240 & 0xffffffffffffff00);
  FUN_01250840(&local_a0,param_1,param_2,param_5);
  FUN_00414b50(&local_18,L"128|256|512|1024|2048|4096|8192|16384|32768|65536");
  local_258 = L"Caption";
  FUN_00de8b50(&local_c0,L"TFrequencySpectrumDlg",L"Label5",param_8);
  FUN_004168b0(&local_c8,local_c0);
  FUN_012422b0(&local_d0,local_18,*(byte *)(param_9 + 1000) - 7,0x7c);
  local_258 = (wchar_t *)local_c8;
  local_250 = L"4";
  local_248 = (undefined *)local_18;
  local_240 = (undefined *)local_d0;
  FUN_01250a90(&local_b8,param_1,param_2,param_5);
  FUN_00414b50(&local_18,L"Uniform|Hanning|Flattop|Blackman|Hamming|Bartlet");
  local_258 = L"Caption";
  FUN_00de8b50(&local_e0,L"TFrequencySpectrumDlg",L"Label6",param_8);
  FUN_004168b0(&local_e8,local_e0);
  FUN_012422b0(&local_f0,local_18,*(undefined1 *)(param_9 + 0x412),0x7c);
  local_258 = (wchar_t *)local_e8;
  local_250 = L"5";
  local_248 = (undefined *)local_18;
  local_240 = (undefined *)local_f0;
  FUN_01250a90(&local_d8,param_1,param_2,param_5);
  local_258 = (wchar_t *)param_8;
  local_250 = L"|";
  local_248 = (undefined *)CONCAT71(local_248._1_7_,1);
  local_240 = (undefined *)((ulonglong)local_240 & 0xffffffff00000000);
  FUN_00de8fd0(&local_28,L"TFrequencySpectrumDlg",L"rgMode",L"Items");
  local_258 = L"Caption";
  FUN_00de8b50(&local_100,L"TFrequencySpectrumDlg",L"rgMode",param_8);
  FUN_004168b0(&local_108,local_100);
  FUN_004168b0(&local_110,local_28);
  local_258 = (wchar_t *)local_108;
  local_250 = L"6";
  local_248 = (undefined *)local_110;
  local_240 = (undefined *)CONCAT71(local_240._1_7_,*(undefined1 *)(param_9 + 0x413));
  FUN_01250bc0(&local_f8,param_1,param_2,param_5);
  local_258 = L"Caption";
  FUN_00de8b50(&local_118,L"TFrequencySpectrumDlg",L"PhaseCorrectionCB",param_8);
  FUN_004168b0(&local_120,local_118);
  local_258 = L"7";
  local_250 = (wchar_t *)CONCAT71(local_250._1_7_,*(undefined1 *)(param_9 + 0x819));
  FUN_01250950(param_1,param_2,param_5,local_120);
  FUN_017c7f50(&local_18);
  if (param_6 == 0) {
    local_3c = FUN_004170c0(&DAT_01298518,param_7,1);
    if (local_3c < 1) {
      FUN_00414b50(&local_20,param_7);
    }
    else {
      FUN_00416dc0(&local_20,param_7,1,local_3c + -1);
    }
    local_3c = FUN_004413f0(&DAT_01298578,local_20);
    local_44 = 0;
    if (local_20 != 0) {
      local_44 = *(undefined4 *)(local_20 - 4);
    }
    FUN_00416dc0(&local_20,local_20,local_3c + 1,local_44);
  }
  else {
    local_38 = FUN_019ac5b0(param_6,*(undefined8 *)(param_9 + 0x823));
    if (local_38 == 0) {
      FUN_00414b50(&local_20,*(undefined8 *)(param_9 + 0x823));
    }
    else {
      FUN_017ff4f0(local_38,&local_20);
    }
  }
  if (param_6 == 0) {
    local_258 = L"Caption";
    FUN_00de8b50(&local_148,L"TFrequencySpectrumDlg",L"Label9",param_8);
    FUN_004168b0(&local_150,local_148);
    local_258 = (wchar_t *)local_150;
    local_250 = L"outp";
    local_248 = (undefined *)param_7;
    local_240 = (undefined *)local_20;
    FUN_01250a90(&local_140,param_1,param_2,param_5);
  }
  else {
    local_258 = L"Caption";
    FUN_00de8b50(&local_130,L"TFrequencySpectrumDlg",L"Label9",param_8);
    FUN_004168b0(&local_138,local_130);
    local_258 = (wchar_t *)local_138;
    local_250 = L"8";
    local_248 = (undefined *)local_18;
    local_240 = (undefined *)local_20;
    FUN_012511b0(&local_128,param_1,param_2,param_5);
  }
  local_258 = (wchar_t *)param_8;
  local_250 = L"|";
  local_248 = (undefined *)CONCAT71(local_248._1_7_,1);
  local_240 = (undefined *)((ulonglong)local_240 & 0xffffffff00000000);
  FUN_00de8fd0(&local_28,L"TFrequencySpectrumDlg",L"cbxScale",L"Items");
  local_258 = L"Caption";
  FUN_00de8b50(&local_160,L"TFrequencySpectrumDlg",L"Label8",param_8);
  FUN_004168b0(&local_168,local_160);
  FUN_004168b0(&local_170,local_28);
  local_258 = (wchar_t *)local_168;
  local_250 = L"scale";
  local_248 = (undefined *)local_170;
  local_240._0_1_ = *(undefined1 *)(param_9 + 0x414);
  FUN_01250bc0(&local_158,param_1,param_2,param_5);
  local_258 = L"Caption";
  FUN_00de8b50(&local_180,L"TFrequencySpectrumDlg",L"Label7",param_8);
  FUN_004168b0(&local_188,local_180);
  local_258 = local_188;
  local_250 = L"refv";
  local_248 = *(undefined **)(param_9 + 0x409);
  local_240 = (undefined *)((ulonglong)local_240._1_7_ << 8);
  FUN_01250840(&local_178,param_1,param_2,param_5);
  if (param_6 != 0) {
    local_258 = (wchar_t *)param_8;
    local_250 = L"|";
    local_248 = (undefined *)CONCAT71(local_248._1_7_,1);
    local_240 = (undefined *)((ulonglong)local_240 & 0xffffffff00000000);
    FUN_00de8fd0(&local_28,L"TFrequencySpectrumDlg",L"rgTRControls",L"Items");
    FUN_0041ddd0(&local_1a0,&PTR_PTR_01241f90);
    local_258 = (wchar_t *)local_1a0;
    FUN_00de8a20(&local_198,L"TSCXMLConverter",L"sStartCondition",param_8);
    FUN_004168b0(&local_1a8,local_198);
    FUN_004168b0(&local_1b0,local_28);
    local_258 = (wchar_t *)local_1a8;
    local_250 = L"icond";
    local_248 = (undefined *)local_1b0;
    local_240 = (undefined *)
                CONCAT71(local_240._1_7_,(char)((ulonglong)(*(byte *)(param_9 + 0x82c) + 2) % 3));
    FUN_01250bc0(&local_190,param_1,param_2,param_5);
    local_258 = L"Caption";
    FUN_00de8b50(&local_1b8,L"TFrequencySpectrumDlg",L"CBComplAmpl",param_8);
    local_258 = L"Caption";
    FUN_00de8b50(&local_1c0,L"TFrequencySpectrumDlg",L"CBPhase",param_8);
    local_258 = L"Caption";
    FUN_00de8b50(&local_1c8,L"TFrequencySpectrumDlg",L"CBRealPart",param_8);
    local_258 = L"Caption";
    FUN_00de8b50(&local_1d0,L"TFrequencySpectrumDlg",L"CBImagPart",param_8);
    local_258 = L"Caption";
    FUN_00de8b50(&local_1d8,L"TFrequencySpectrumDlg",L"CBPower",param_8);
    local_258 = L"Caption";
    FUN_00de8b50(&local_1e0,L"TFrequencySpectrumDlg",L"CBRealAmpl",param_8);
    uVar3 = 0;
    local_258 = (wchar_t *)local_1c0;
    local_250 = L":1|";
    local_248 = (undefined *)local_1c8;
    local_240 = &DAT_01298760;
    local_238 = local_1d0;
    local_230 = &DAT_01298790;
    local_228 = local_1d8;
    local_220 = &DAT_012987b8;
    local_218 = local_1e0;
    local_210 = &DAT_012987e8;
    FUN_00416310(&local_28,0xc,local_1b8,&DAT_01298708);
    FUN_00414480(&local_18);
    local_29 = 0;
    do {
      if (local_29 < 8) {
        uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (local_29 & 0x1f);
        uVar3 = (ulonglong)uVar2;
        bVar4 = ((byte)uVar2 & *(byte *)(param_9 + 0x415)) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        FUN_00414480(&local_10);
        local_3d = local_29;
        FUN_0043f750(&local_10,(longlong)(char)local_29);
        uVar3 = 0;
        local_258 = L",";
        FUN_00416cd0(&local_18,3,local_18,local_10);
        FUN_00414480(&local_10);
      }
      local_29 = local_29 + 1;
    } while (local_29 != 6);
    local_48 = 0;
    if (local_18 != 0) {
      local_48 = *(undefined4 *)(local_18 + -4);
    }
    FUN_00416e20(&local_18,local_48,1);
    local_258 = L"Caption";
    FUN_00de8b50(&local_1f0,L"TFrequencySpectrumDlg",L"GroupBox",param_8);
    FUN_004168b0(&local_1f8,local_1f0);
    FUN_004168b0(&local_200,local_28);
    local_258 = L"multienum";
    local_250 = local_1f8;
    local_248 = &DAT_0129884c;
    local_240 = (undefined *)local_200;
    local_238 = local_18;
    FUN_0124fe60(&local_1e8,param_1,param_2,param_5);
  }
  FUN_00414560(&local_200,2);
  FUN_00414520(&local_1f0);
  FUN_0041b800(&local_1e8);
  FUN_004145c0(&local_1e0,6);
  FUN_00414560(&local_1b0,3);
  FUN_00414520(&local_198);
  FUN_0041b800(&local_190);
  FUN_00414480(&local_188);
  FUN_00414520(&local_180);
  FUN_0041b800(&local_178);
  FUN_00414560(&local_170,2);
  FUN_00414520(&local_160);
  FUN_0041b800(&local_158);
  FUN_00414480(&local_150);
  FUN_00414520(&local_148);
  FUN_0041b800(&local_140);
  FUN_00414480(&local_138);
  FUN_00414520(&local_130);
  FUN_0041b800(&local_128);
  FUN_00414480(&local_120);
  FUN_00414520(&local_118);
  FUN_00414560(&local_110,2);
  FUN_00414520(&local_100);
  FUN_0041b800(&local_f8);
  FUN_00414560(&local_f0,2);
  FUN_00414520(&local_e0);
  FUN_0041b800(&local_d8);
  FUN_00414560(&local_d0,2);
  FUN_00414520(&local_c0);
  FUN_0041b800(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414520(&local_a8);
  FUN_0041b800(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414520(&local_90);
  FUN_0041b800(&local_88);
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_0041b800(&local_70);
  FUN_00414480(&local_68);
  FUN_00414520(&local_60);
  FUN_0041b800(&local_58);
  FUN_00414520(&local_28);
  FUN_00414560(&local_20,3);
  FUN_00414560(&param_7,2);
  return;
}

