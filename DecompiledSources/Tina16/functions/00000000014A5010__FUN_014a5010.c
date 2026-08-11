/* Ghidra address: 014a5010 */
/* Ghidra symbol: FUN_014a5010 */


void FUN_014a5010(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  bool bVar6;
  undefined1 auStack_b58 [32];
  undefined *local_b38;
  undefined8 local_b20;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined1 *local_a90;
  undefined1 *local_a88;
  undefined4 *local_a80;
  undefined2 *local_a78;
  undefined8 *local_a70;
  undefined1 *local_a68;
  byte local_a5b;
  char local_a5a;
  char local_a59;
  char local_a58;
  char local_a57;
  char local_a56;
  char local_a55;
  char local_a54;
  char local_a53;
  char local_a52;
  char local_a51;
  byte local_a50;
  byte local_a4f;
  byte local_a4e;
  byte local_a4d;
  byte local_a4c;
  byte local_a4b;
  undefined2 local_a4a;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined1 local_a38 [663];
  char local_7a1;
  ushort local_69a;
  byte local_67e;
  ushort local_669;
  ushort local_667;
  ushort local_665;
  byte local_623;
  undefined8 local_240;
  undefined1 local_238;
  undefined8 local_237;
  undefined8 local_22f;
  undefined1 local_227;
  undefined1 local_226;
  char local_21f;
  undefined8 local_21d;
  undefined8 local_215;
  char local_20d;
  char local_20c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined4 local_14e;
  char local_14a;
  char local_149;
  undefined8 local_148;
  undefined1 local_140;
  char local_13f;
  char local_13e;
  ushort local_13d;
  undefined1 local_13a;
  undefined1 local_139;
  char local_137;
  char local_136;
  undefined8 local_135;
  undefined8 local_12d;
  undefined1 local_125;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined4 local_100;
  byte local_fb;
  byte local_fa;
  byte local_f9;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_a90 = auStack_b58;
  local_b20 = 0;
  local_b18 = 0;
  local_b10 = 0;
  local_b08 = 0;
  local_b00 = 0;
  local_af8 = 0;
  local_af0 = 0;
  local_ae8 = 0;
  local_ae0 = 0;
  local_ad8 = 0;
  local_ad0 = 0;
  local_ac8 = 0;
  local_ac0 = 0;
  local_ab8 = 0;
  local_ab0 = 0;
  local_aa8 = 0;
  local_aa0 = 0;
  local_a98 = 0;
  local_d8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  local_f0 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  local_a40 = 0;
  local_a48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  FUN_00417580(local_a38,&DAT_01d0d0b8);
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    local_a4a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
    if (*(char *)(*(longlong *)(*param_1 + 0x48) + 0x490) == '\0') {
      FUN_00417c40(local_a38,PTR_DAT_02004010,&DAT_01d0d0b8);
    }
    else {
      FUN_00417c40(local_a38,*(longlong *)(*param_1 + 0x48) + 0x492,&DAT_01d0d0b8);
    }
    FUN_00bac3d0(&local_d8);
    (**(code **)(*local_d8 + 0x148))(local_d8,&local_a98,L"storage");
    (**(code **)(*local_d8 + 0x108))(local_d8,local_a98);
    (**(code **)(*local_d8 + 0x100))(local_d8,&local_e0);
    (**(code **)(*local_d8 + 0x148))(local_d8,&local_e8,L"config");
    (**(code **)(*local_e0 + 0x98))(local_e0,&local_aa0,local_e8);
    FUN_0043f750(&local_aa8,local_238);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"lvon",local_aa8);
    local_b38._0_1_ = 1;
    FUN_00b8fd60(&local_ab0,local_237,6,0);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"lvmv",local_ab0);
    local_b38._0_1_ = 1;
    FUN_00b8fd60(&local_ab8,local_22f,6,0);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"lvmc",local_ab8);
    FUN_0043f750(&local_ac0,local_227);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"lvsc",local_ac0);
    FUN_0043f750(&local_ac8,local_226);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"lvaa",local_ac8);
    local_b38 = (undefined *)CONCAT71(local_b38._1_7_,1);
    FUN_00b8fd60(&local_ad0,local_240,6,0);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"itww",local_ad0);
    FUN_0043f750(&local_ad8,local_13a);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"nlsolver",local_ad8);
    FUN_0043f750(&local_ae0,local_139);
    pwVar5 = L"mospwllevel";
    (**(code **)(*local_e8 + 0x108))(local_e8,L"mospwllevel",local_ae0);
    FUN_00414480(&local_a48);
    local_f9 = 0;
    do {
      if (local_f9 < 0x10) {
        uVar4 = (int)CONCAT62((int6)((ulonglong)pwVar5 >> 0x10),1) << (local_f9 & 0x1f);
        pwVar5 = (wchar_t *)(ulonglong)uVar4;
        bVar6 = ((ushort)uVar4 & local_69a) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00414480(local_20);
        local_a4b = local_f9;
        FUN_0043f750(local_20,(longlong)(char)local_f9);
        pwVar5 = (wchar_t *)0x0;
        local_b38 = &DAT_014a6b34;
        FUN_00416cd0(&local_a48,3,local_a48,local_20[0]);
        FUN_00414480(local_20);
      }
      local_f9 = local_f9 + 1;
    } while (local_f9 != 5);
    pwVar5 = L"acview";
    (**(code **)(*local_e8 + 0x108))(local_e8,L"acview",local_a48);
    FUN_00414480(&local_a48);
    local_f9 = 0;
    do {
      if (local_f9 < 0x10) {
        uVar4 = (int)CONCAT62((int6)((ulonglong)pwVar5 >> 0x10),1) << (local_f9 & 0x1f);
        pwVar5 = (wchar_t *)(ulonglong)uVar4;
        bVar6 = ((ushort)uVar4 & local_669) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00414480(&local_28);
        local_a4c = local_f9;
        FUN_0043f750(&local_28,(longlong)(char)local_f9);
        pwVar5 = (wchar_t *)0x0;
        local_b38 = &DAT_014a6b34;
        FUN_00416cd0(&local_a48,3,local_a48,local_28);
        FUN_00414480(&local_28);
      }
      local_f9 = local_f9 + 1;
    } while (local_f9 != 9);
    pwVar5 = L"acnetworkszyhview";
    (**(code **)(*local_e8 + 0x108))(local_e8,L"acnetworkszyhview",local_a48);
    FUN_00414480(&local_a48);
    local_f9 = 0;
    do {
      if (local_f9 < 0x10) {
        uVar4 = (int)CONCAT62((int6)((ulonglong)pwVar5 >> 0x10),1) << (local_f9 & 0x1f);
        pwVar5 = (wchar_t *)(ulonglong)uVar4;
        bVar6 = ((ushort)uVar4 & local_667) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00414480(&local_30);
        local_a4d = local_f9;
        FUN_0043f750(&local_30,(longlong)(char)local_f9);
        pwVar5 = (wchar_t *)0x0;
        local_b38 = &DAT_014a6b34;
        FUN_00416cd0(&local_a48,3,local_a48,local_30);
        FUN_00414480(&local_30);
      }
      local_f9 = local_f9 + 1;
    } while (local_f9 != 9);
    pwVar5 = L"acnetworkreflectionview";
    (**(code **)(*local_e8 + 0x108))(local_e8,L"acnetworkreflectionview",local_a48);
    FUN_00414480(&local_a48);
    local_f9 = 0;
    do {
      if (local_f9 < 0x10) {
        uVar4 = (int)CONCAT62((int6)((ulonglong)pwVar5 >> 0x10),1) << (local_f9 & 0x1f);
        pwVar5 = (wchar_t *)(ulonglong)uVar4;
        bVar6 = ((ushort)uVar4 & local_665) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00414480(&local_38);
        local_a4e = local_f9;
        FUN_0043f750(&local_38,(longlong)(char)local_f9);
        pwVar5 = (wchar_t *)0x0;
        local_b38 = &DAT_014a6b34;
        FUN_00416cd0(&local_a48,3,local_a48,local_38);
        FUN_00414480(&local_38);
      }
      local_f9 = local_f9 + 1;
    } while (local_f9 != 9);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"acnetworktransmissionview",local_a48);
    uVar3 = FUN_00414480(&local_a48);
    local_fa = 0;
    do {
      if (local_fa < 8) {
        iVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (local_fa & 0x1f);
        uVar3 = (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),((byte)iVar2 & local_67e) != 0);
      }
      else {
        uVar3 = 0;
      }
      if ((char)uVar3 != '\0') {
        FUN_00414480(&local_40);
        local_a4f = local_fa;
        FUN_0043f750(&local_40,(longlong)(char)local_fa);
        local_b38 = &DAT_014a6b34;
        FUN_00416cd0(&local_a48,3,local_a48,local_40);
        uVar3 = FUN_00414480(&local_40);
      }
      local_fa = local_fa + 1;
    } while (local_fa != 4);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"noiseview",local_a48);
    uVar3 = FUN_00414480(&local_a48);
    local_fb = 0;
    do {
      if (local_fb < 8) {
        iVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (local_fb & 0x1f);
        uVar3 = (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),((byte)iVar2 & local_623) != 0);
      }
      else {
        uVar3 = 0;
      }
      if ((char)uVar3 != '\0') {
        FUN_00414480(&local_48);
        local_a50 = local_fb;
        FUN_0043f750(&local_48,(longlong)(char)local_fb);
        local_b38 = &DAT_014a6b34;
        FUN_00416cd0(&local_a48,3,local_a48,local_48);
        uVar3 = FUN_00414480(&local_48);
      }
      local_fb = local_fb + 1;
    } while (local_fb != 6);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"fourierview",local_a48);
    FUN_00414480(&local_50);
    local_a51 = local_21f;
    FUN_0043f750(&local_50,(longlong)local_21f);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"phasecorrection",local_50);
    FUN_00414480(&local_50);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"fourierthdoutput",local_21d);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"fourierspeoutput",local_215);
    FUN_00414480(&local_58);
    local_a52 = local_20d;
    FUN_0043f750(&local_58,(longlong)local_20d);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"fourierthdinitcond",local_58);
    FUN_00414480(&local_58);
    FUN_00414480(&local_60);
    local_a53 = local_20c;
    FUN_0043f750(&local_60,(longlong)local_20c);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"fourierspeinitcond",local_60);
    FUN_00414480(&local_60);
    FUN_00414480(&local_68);
    local_a54 = local_7a1;
    FUN_0043f750(&local_68,(longlong)local_7a1);
    (**(code **)(*local_e8 + 0x108))(local_e8,&DAT_014a6d44,local_68);
    FUN_00414480(&local_68);
    FUN_00414480(&local_70);
    local_a55 = local_137;
    FUN_0043f750(&local_70,(longlong)local_137);
    (**(code **)(*local_e8 + 0x108))(local_e8,&DAT_014a6d58,local_70);
    FUN_00414480(&local_70);
    FUN_00414480(&local_78);
    local_a56 = local_136;
    FUN_0043f750(&local_78,(longlong)local_136);
    (**(code **)(*local_e8 + 0x108))(local_e8,&DAT_014a6d6c,local_78);
    FUN_00414480(&local_78);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"aisettings",local_135);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"jsappsettings",local_12d);
    FUN_00414480(&local_80);
    local_a68 = &local_125;
    FUN_0043f750(&local_80,local_125);
    (**(code **)(*local_e8 + 0x108))(local_e8,L"marginreferencephase",local_80);
    FUN_00414480(&local_80);
    (**(code **)(*local_d8 + 0x148))(local_d8,&local_f0,L"acmultisine");
    (**(code **)(*local_e8 + 0x98))(local_e8,&local_ae8,local_f0);
    local_b38._0_1_ = 1;
    FUN_00b8fd60(&local_af0,local_178,6,0);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"fstart",local_af0);
    local_b38._0_1_ = 1;
    FUN_00b8fd60(&local_af8,local_170,6,0);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"fstop",local_af8);
    local_b38._0_1_ = 1;
    FUN_00b8fd60(&local_b00,local_168,6,0);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"ampl",local_b00);
    FUN_00414480(&local_90);
    local_88 = 0;
    local_a70 = &local_158;
    FUN_00414480(&local_88);
    FUN_00448450(&local_88,*local_a70,PTR_DAT_02004830);
    FUN_00414b50(&local_90,local_88);
    FUN_00414480(&local_88);
    FUN_00414480(&local_88);
    (**(code **)(*local_f0 + 0x108))(local_f0,&PTR_s_StyleManager_TSourceInfo_014a6e74,local_90);
    FUN_00414480(&local_90);
    local_b38 = (undefined *)CONCAT71(local_b38._1_7_,1);
    FUN_00b8fd60(&local_b08,local_160,6,0);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"stime",local_b08);
    FUN_00414480(&local_98);
    local_a78 = &local_150;
    FUN_0043f750(&local_98,local_150);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"points",local_98);
    FUN_00414480(&local_98);
    FUN_00414480(&local_a0);
    local_a80 = &local_14e;
    FUN_0043f750(&local_a0,local_14e);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"cycles",local_a0);
    FUN_00414480(&local_a0);
    FUN_00414480(&local_a8);
    local_a57 = local_14a;
    FUN_0043f750(&local_a8,(longlong)local_14a);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"swmode",local_a8);
    FUN_00414480(&local_a8);
    FUN_00414480(&local_b0);
    local_a88 = &local_140;
    FUN_0043f750(&local_b0,local_140);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"wfunc",local_b0);
    FUN_00414480(&local_b0);
    FUN_00414480(&local_b8);
    local_a58 = local_149;
    FUN_0043f750(&local_b8,(longlong)local_149);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"icond",local_b8);
    FUN_00414480(&local_b8);
    (**(code **)(*local_f0 + 0x108))(local_f0,&DAT_014a6f24,local_148);
    FUN_00414480(&local_c0);
    local_a59 = local_13f;
    FUN_0043f750(&local_c0,(longlong)local_13f);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"repli",local_c0);
    FUN_00414480(&local_c0);
    FUN_00414480(&local_c8);
    local_a5a = local_13e;
    FUN_0043f750(&local_c8,(longlong)local_13e);
    pwVar5 = L"showtr";
    (**(code **)(*local_f0 + 0x108))(local_f0,L"showtr",local_c8);
    FUN_00414480(&local_c8);
    FUN_00414480(&local_a48);
    local_f9 = 0;
    do {
      if (local_f9 < 0x10) {
        uVar4 = (int)CONCAT62((int6)((ulonglong)pwVar5 >> 0x10),1) << (local_f9 & 0x1f);
        pwVar5 = (wchar_t *)(ulonglong)uVar4;
        bVar6 = ((ushort)uVar4 & local_13d) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        FUN_00414480(&local_d0);
        local_a5b = local_f9;
        FUN_0043f750(&local_d0,(longlong)(char)local_f9);
        pwVar5 = (wchar_t *)0x0;
        local_b38 = &DAT_014a6b34;
        FUN_00416cd0(&local_a48,3,local_a48,local_d0);
        FUN_00414480(&local_d0);
      }
      local_f9 = local_f9 + 1;
    } while (local_f9 != 5);
    (**(code **)(*local_f0 + 0x108))(local_f0,L"view",local_a48);
    (**(code **)(*local_d8 + 0x148))(local_d8,&local_f8,&PTR_PTR_014a6f84);
    (**(code **)(*local_e8 + 0x98))(local_e8,&local_b10,local_f8);
    (**(code **)(*local_f8 + 0x108))(local_f8,L"basefreq",local_124);
    (**(code **)(*local_f8 + 0x108))(local_f8,L"numharmonics",local_11c);
    (**(code **)(*local_f8 + 0x108))(local_f8,L"output",local_114);
    (**(code **)(*local_f8 + 0x108))(local_f8,L"options",local_10c);
    FUN_0043f750(&local_b18,local_104);
    (**(code **)(*local_f8 + 0x108))(local_f8,L"format",local_b18);
    (**(code **)(*local_d8 + 0xf0))(local_d8,&local_a40);
    FUN_004168e0(&local_b20,local_a40);
    local_100 = FUN_01d31290(local_b20);
    FUN_01d31180(*param_1,0xf407,0x10,local_100);
    FUN_01d31630(*param_1,local_a40);
    iVar2 = FUN_01d31a40(*param_1);
    if (iVar2 != 0) {
      FUN_00b047e0(0xfffffff3);
    }
    *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_a4a;
  }
  FUN_00414520(&local_b20);
  FUN_00414480(&local_b18);
  FUN_0041b800(&local_b10);
  FUN_00414560(&local_b08,4);
  FUN_0041b800(&local_ae8);
  FUN_00414560(&local_ae0,8);
  FUN_0041b800(&local_aa0);
  FUN_0041b800(&local_a98);
  FUN_00414560(&local_a48,2);
  FUN_00417740(local_a38,&DAT_01d0d0b8);
  FUN_00417840(&local_f8,&LAB_00b9fca0,4);
  FUN_0041b800(&local_d8);
  FUN_00414560(&local_d0,9);
  FUN_00414560(&local_80,0xd);
  return;
}

