/* Ghidra address: 010ce790 */
/* Ghidra symbol: FUN_010ce790 */


longlong *
FUN_010ce790(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
            undefined8 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *local_res10;
  longlong *local_res18 [2];
  undefined1 auStack_258 [32];
  wchar_t *local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined4 local_220;
  longlong *local_210;
  longlong *local_208;
  int local_200;
  int local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
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
  wchar_t *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
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
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_108 = 0;
  local_110 = (wchar_t *)0x0;
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_210 = param_1;
  local_208 = param_4;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18[0]);
  FUN_00414610(param_5);
  (**(code **)(*local_208 + 0x38))(local_208,local_210);
  (**(code **)(*local_res10 + 0x148))(local_res10,&local_38,L"format");
  (**(code **)(*local_res18[0] + 0x98))(local_res18[0],&local_50,local_38);
  (**(code **)(*local_res10 + 0x148))(local_res10,local_30,L"drawing");
  (**(code **)(*local_res18[0] + 0x98))(local_res18[0],&local_58,local_30[0]);
  (**(code **)(*local_res10 + 0x148))(local_res10,&local_40,L"math");
  (**(code **)(*local_res18[0] + 0x98))(local_res18[0],&local_60,local_40);
  if (param_6 == '\0') {
    local_1fc = (**(code **)(*local_208 + 0xb0))(local_208,L"; numerical format");
  }
  else {
    local_1fc = (**(code **)(*local_208 + 0xb0))(local_208,L"\\d( ; numerical format )");
  }
  if (param_6 == '\0') {
    iVar1 = (**(code **)(*local_208 + 0xb0))(local_208,L"; math");
  }
  else {
    iVar1 = (**(code **)(*local_208 + 0xb0))(local_208,L"\\d( ; math )");
  }
  if (param_6 == '\0') {
    local_200 = (**(code **)(*local_208 + 0xb0))(local_208,L"; drawing");
  }
  else {
    local_200 = (**(code **)(*local_208 + 0xb0))(local_208,L"\\d( ; drawing )");
  }
  if (param_6 == '\0') {
    iVar2 = FUN_004170c0(L"@ Configuration begin",*local_210,1);
  }
  else {
    iVar2 = FUN_004170c0(L"\\d(  )\r\n\\d( @ Configuration begin )",*local_210,1);
  }
  if (local_1fc < 1) {
    FUN_0043f750(&local_48,0);
  }
  else {
    (**(code **)(*local_208 + 0x18))(local_208,&local_48,local_1fc + 1);
  }
  local_238 = L"Caption";
  FUN_00de8b50(&local_68,L"TI_NumFDlg",L"NumericF",param_5);
  FUN_004168b0(&local_70,local_68);
  local_238 = (wchar_t *)param_5;
  local_230 = &DAT_010d0014;
  local_228 = CONCAT71(local_228._1_7_,1);
  local_220 = 0;
  FUN_00de8fd0(&local_78,L"TI_NumFDlg",L"NumericF",L"Items");
  FUN_004168b0(&local_80,local_78);
  local_238 = (wchar_t *)local_70;
  local_230 = (undefined *)CONCAT71(local_230._1_7_,3);
  local_228 = local_80;
  FUN_010ce3e0(auStack_258,local_38,local_48,L"bNumericF");
  if (local_1fc < 1) {
    FUN_0043f750(&local_48,1);
  }
  else {
    (**(code **)(*local_208 + 0x18))(local_208,&local_48,local_1fc + 2);
  }
  local_238 = L"Caption";
  FUN_00de8b50(&local_88,L"TI_NumFDlg",L"Angle",param_5);
  FUN_004168b0(&local_90,local_88);
  local_238 = (wchar_t *)param_5;
  local_230 = &DAT_010d0014;
  local_228 = CONCAT71(local_228._1_7_,1);
  local_220 = 0;
  FUN_00de8fd0(&local_98,L"TI_NumFDlg",L"Angle",L"Items");
  FUN_004168b0(&local_a0,local_98);
  local_238 = (wchar_t *)local_90;
  local_230 = (undefined *)CONCAT71(local_230._1_7_,3);
  local_228 = local_a0;
  FUN_010ce3e0(auStack_258,local_38,local_48,L"bAngle");
  if (local_1fc < 1) {
    FUN_0043f750(&local_48,0);
  }
  else {
    (**(code **)(*local_208 + 0x18))(local_208,&local_48,local_1fc + 3);
  }
  local_238 = L"Caption";
  FUN_00de8b50(&local_a8,L"TI_NumFDlg",L"ComplexF",param_5);
  FUN_004168b0(&local_b0,local_a8);
  local_238 = (wchar_t *)param_5;
  local_230 = &DAT_010d0014;
  local_228 = CONCAT71(local_228._1_7_,1);
  local_220 = 0;
  FUN_00de8fd0(&local_b8,L"TI_NumFDlg",L"ComplexF",L"Items");
  FUN_004168b0(&local_c0,local_b8);
  local_238 = (wchar_t *)local_b0;
  local_230 = (undefined *)CONCAT71(local_230._1_7_,3);
  local_228 = local_c0;
  FUN_010ce3e0(auStack_258,local_38,local_48,L"bComplexF");
  if (local_1fc < 1) {
    FUN_0043f750(&local_48,1);
  }
  else {
    (**(code **)(*local_208 + 0x18))(local_208,&local_48,local_1fc + 4);
  }
  local_238 = L"Caption";
  FUN_00de8b50(&local_c8,L"TI_NumFDlg",L"Imaginary",param_5);
  FUN_004168b0(&local_d0,local_c8);
  local_238 = (wchar_t *)param_5;
  local_230 = &DAT_010d0014;
  local_228 = CONCAT71(local_228._1_7_,1);
  local_220 = 0;
  FUN_00de8fd0(&local_d8,L"TI_NumFDlg",L"Imaginary",L"Items");
  FUN_004168b0(&local_e0,local_d8);
  local_238 = (wchar_t *)local_d0;
  local_230 = (undefined *)CONCAT71(local_230._1_7_,3);
  local_228 = local_e0;
  FUN_010ce3e0(auStack_258,local_38,local_48,L"bImaginary");
  if (local_1fc < 1) {
    FUN_00414b50(&local_48,&DAT_010d00dc);
  }
  else {
    (**(code **)(*local_208 + 0x18))(local_208,&local_48,local_1fc + 5);
  }
  local_238 = L"Caption";
  FUN_00de8b50(&local_e8,L"TI_NumFDlg",L"lPrec",param_5);
  FUN_004168b0(&local_f0,local_e8);
  local_238 = (wchar_t *)local_f0;
  local_230 = (undefined *)CONCAT71(local_230._1_7_,1);
  local_228 = 0;
  FUN_010ce3e0(auStack_258,local_38,local_48,L"lDisplayed");
  if (local_1fc < 1) {
    FUN_00414b50(&local_48,L"0.01");
  }
  else {
    (**(code **)(*local_208 + 0x18))(local_208,&local_48,iVar1 + 1);
  }
  local_238 = L"Caption";
  FUN_00de8b50(&local_f8,L"TI_NumFDlg",L"lDiff",param_5);
  FUN_004168b0(&local_100,local_f8);
  local_238 = (wchar_t *)local_100;
  local_230 = (undefined *)CONCAT71(local_230._1_7_,2);
  local_228 = 0;
  FUN_010ce3e0(auStack_258,local_38,local_48,L"rDiffStep");
  if (local_1fc < 1) {
    FUN_00414b50(&local_48,&DAT_010d0178);
  }
  else {
    (**(code **)(*local_208 + 0x18))(local_208,&local_48,iVar1 + 2);
  }
  local_238 = L"Caption";
  FUN_00de8b50(&local_108,L"TI_NumFDlg",L"lIntegr",param_5);
  FUN_004168b0(&local_110,local_108);
  local_238 = local_110;
  local_230 = (undefined *)CONCAT71(local_230._1_7_,1);
  local_228 = 0;
  FUN_010ce3e0(auStack_258,local_38,local_48,L"iIntegSubD");
  if ((0 < local_200) && (0 < iVar1)) {
    (**(code **)(*local_208 + 0x18))(local_208,&local_118,local_200 + 1);
    local_238 = L"Caption";
    FUN_00de8b50(&local_120,L"TI_Drawing",L"rgType",param_5);
    FUN_004168b0(&local_128,local_120);
    local_238 = (wchar_t *)param_5;
    local_230 = &DAT_010d0014;
    local_228 = CONCAT71(local_228._1_7_,1);
    local_220 = 0;
    FUN_00de8fd0(&local_130,L"TI_Drawing",L"rgType",L"Items");
    FUN_004168b0(&local_138,local_130);
    local_238 = (wchar_t *)local_128;
    local_230._0_1_ = 3;
    local_228 = local_138;
    FUN_010ce3e0(auStack_258,local_30[0],local_118,L"bType");
    (**(code **)(*local_208 + 0x18))(local_208,&local_140,local_200 + 7);
    local_238 = L"Caption";
    FUN_00de8b50(&local_148,L"TI_Drawing",L"lLLimit",param_5);
    FUN_004168b0(&local_150,local_148);
    local_238 = (wchar_t *)local_150;
    local_230._0_1_ = 2;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_30[0],local_140,L"rLLimit");
    (**(code **)(*local_208 + 0x18))(local_208,&local_158,local_200 + 8);
    local_238 = L"Caption";
    FUN_00de8b50(&local_160,L"TI_Drawing",L"lRLimit",param_5);
    FUN_004168b0(&local_168,local_160);
    local_238 = (wchar_t *)local_168;
    local_230._0_1_ = 2;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_30[0],local_158,L"rRLimit");
    (**(code **)(*local_208 + 0x18))(local_208,&local_170,local_200 + 9);
    local_238 = L"Caption";
    FUN_00de8b50(&local_178,L"TI_Drawing",L"lIntv",param_5);
    FUN_004168b0(&local_180,local_178);
    local_238 = (wchar_t *)local_180;
    local_230._0_1_ = 1;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_30[0],local_170,L"iPoints");
    (**(code **)(*local_208 + 0x18))(local_208,&local_188,local_200 + 2);
    local_238 = L"Caption";
    FUN_00de8b50(&local_190,L"TI_Drawing",L"lUPar",param_5);
    FUN_004168b0(&local_198,local_190);
    local_238 = (wchar_t *)local_198;
    local_230._0_1_ = 0;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_30[0],local_188,L"sUPar");
    (**(code **)(*local_208 + 0x18))(local_208,&local_1a0,local_200 + 3);
    local_238 = L"Caption";
    FUN_00de8b50(&local_1a8,L"TI_Drawing",L"lURes",param_5);
    FUN_004168b0(&local_1b0,local_1a8);
    local_238 = (wchar_t *)local_1b0;
    local_230._0_1_ = 0;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_30[0],local_1a0,L"sURes");
    (**(code **)(*local_208 + 0x18))(local_208,&local_1b8,local_200 + 4);
    local_238 = L"Caption";
    FUN_00de8b50(&local_1c0,L"TI_Drawing",L"lIPar",param_5);
    FUN_004168b0(&local_1c8,local_1c0);
    local_238 = (wchar_t *)local_1c8;
    local_230._0_1_ = 0;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_30[0],local_1b8,L"sNPar");
    (**(code **)(*local_208 + 0x18))(local_208,&local_1d0,local_200 + 5);
    local_238 = L"Caption";
    FUN_00de8b50(&local_1d8,L"TI_Drawing",L"lIRes",param_5);
    FUN_004168b0(&local_1e0,local_1d8);
    local_238 = (wchar_t *)local_1e0;
    local_230._0_1_ = 0;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_30[0],local_1d0,L"sNRes");
    (**(code **)(*local_208 + 0x18))(local_208,&local_1e8,iVar1 + 3);
    local_238 = L"rTestUpLimit";
    local_230._0_1_ = 2;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_40,local_1e8,L"rTestUpLimit");
    (**(code **)(*local_208 + 0x18))(local_208,&local_1f0,iVar1 + 4);
    local_238 = L"iUserDefDiv";
    local_230._0_1_ = 1;
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_40,local_1f0,L"iUserDefDiv");
    (**(code **)(*local_208 + 0x18))(local_208,&local_1f8,local_200 + 6);
    local_238 = L"sFName";
    local_230 = (undefined *)((ulonglong)local_230._1_7_ << 8);
    local_228 = 0;
    FUN_010ce3e0(auStack_258,local_40,local_1f8,L"sFName");
  }
  if (0 < iVar2) {
    uVar3 = 0;
    if (*local_210 != 0) {
      uVar3 = *(undefined4 *)(*local_210 + -4);
    }
    FUN_00416e20(local_210,iVar2,uVar3);
  }
  FUN_00414560(&local_1f8,4);
  FUN_00414520(&local_1d8);
  FUN_00414560(&local_1d0,2);
  FUN_00414520(&local_1c0);
  FUN_00414560(&local_1b8,2);
  FUN_00414520(&local_1a8);
  FUN_00414560(&local_1a0,2);
  FUN_00414520(&local_190);
  FUN_00414560(&local_188,2);
  FUN_00414520(&local_178);
  FUN_00414560(&local_170,2);
  FUN_00414520(&local_160);
  FUN_00414560(&local_158,2);
  FUN_00414520(&local_148);
  FUN_00414560(&local_140,2);
  FUN_00414520(&local_130);
  FUN_00414480(&local_128);
  FUN_00414520(&local_120);
  FUN_00414560(&local_118,2);
  FUN_00414520(&local_108);
  FUN_00414480(&local_100);
  FUN_00414520(&local_f8);
  FUN_00414480(&local_f0);
  FUN_00414520(&local_e8);
  FUN_00414480(&local_e0);
  FUN_00414520(&local_d8);
  FUN_00414480(&local_d0);
  FUN_00414520(&local_c8);
  FUN_00414480(&local_c0);
  FUN_00414520(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414520(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414520(&local_98);
  FUN_00414480(&local_90);
  FUN_00414520(&local_88);
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_00414480(&local_70);
  FUN_00414520(&local_68);
  FUN_00417840(&local_60,&DAT_00b9f8e0,3);
  FUN_00414480(&local_48);
  FUN_00417840(&local_40,&LAB_00b9fca0,3);
  FUN_0041b800(&local_res10);
  FUN_0041b800(local_res18);
  FUN_00414480(&param_5);
  return local_210;
}

