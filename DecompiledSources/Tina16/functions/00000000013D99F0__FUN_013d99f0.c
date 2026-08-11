/* Ghidra address: 013d99f0 */
/* Ghidra symbol: FUN_013d99f0 */


void FUN_013d99f0(longlong param_1,ulonglong param_2,char param_3,byte param_4,char param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  ulonglong in_stack_fffffffffffffdf8;
  uint uVar12;
  ulonglong in_stack_fffffffffffffe00;
  undefined8 local_198;
  undefined8 local_190;
  ulonglong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  ulonglong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_158 = 0;
  local_160 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_1 == 0) goto LAB_013db362;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d9c45:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) goto LAB_013d9c45;
  }
  uVar12 = (uint)(in_stack_fffffffffffffdf8 >> 0x20);
  iVar9 = 0;
  if ((param_2 & 1) != 0) {
    iVar9 = 1;
    local_50[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_50);
    FUN_0043f750(&local_58,DAT_01f4546c);
    FUN_00416ba0(&local_38,L"Fourier - Complex Amplitude",local_58);
    DAT_01f4546c = DAT_01f4546c + 1;
    uVar5 = FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    if (param_4 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_4 & 0x1f) & 5U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbc030,1,param_1);
    }
    else {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbc328,1,param_1);
    }
    FUN_01cc5c60(param_1);
    lVar7 = FUN_01cc5cc0(param_1);
    if (param_4 == 1) {
      FUN_00414b50(&local_40,&PTR_DAT_013db450);
    }
    else if (lVar7 == 0) {
      FUN_00414480(&local_40);
    }
    else {
      FUN_01cc1400(lVar7,&local_60,*(undefined8 *)PTR_DAT_02001f18);
      iVar4 = FUN_004170c0(&DAT_013db464,local_60,1);
      FUN_01cc1400(lVar7,&local_68,*(undefined8 *)PTR_DAT_02001f18);
      FUN_00416780(&local_40,*(undefined2 *)(local_68 + -2 + (longlong)(iVar4 + 1) * 2));
    }
    if (param_3 == '\0') {
      FUN_00414b50(&local_38,L"/Hz]");
    }
    else {
      FUN_00414b50(&local_38,&DAT_013db48c);
    }
    local_30 = 0;
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_70,0x129);
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_80,0x13c);
    uVar11 = local_40;
    FUN_00416cd0(&local_78,4,local_80,&DAT_013db49c,local_40,local_38);
    in_stack_fffffffffffffdf8 = (ulonglong)uVar12 << 0x20;
    in_stack_fffffffffffffe00 = local_78;
    FUN_00f16900(local_198,param_1,0,local_70,uVar11 & 0xffffffffffffff00,1,
                 in_stack_fffffffffffffdf8,local_78,param_4,1,2,&local_30,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_90);
    FUN_01acf9e0(lVar6,local_90);
    uVar5 = local_30;
    cVar2 = FUN_01ce8540(local_30);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 2) != 0) {
    iVar9 = iVar9 + 1;
    local_50[0] = FUN_00498310(0,0);
    uVar11 = *(ulonglong *)(*(longlong *)PTR_DAT_02001e00 + 0x780);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,uVar11,local_50);
    if (param_5 == '\0') {
      FUN_0043f750(&local_a8,DAT_01f45470);
      FUN_00416ba0(&local_38,L"Fourier - Phase",local_a8);
    }
    else {
      FUN_013d2e10(&local_98,param_1 + 0x68);
      FUN_0043f750(&local_a0,DAT_01f45470);
      uVar11 = local_a0;
      FUN_00416cd0(&local_38,3,local_98,L" - Phase",local_a0);
    }
    DAT_01f45470 = DAT_01f45470 + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbc850,1,param_1);
    FUN_01cc5c60(param_1);
    lVar7 = FUN_01cc5cc0(param_1);
    if (lVar7 == 0) {
      FUN_00414480(&local_40);
    }
    else {
      FUN_01cc1400(lVar7,&local_b0,*(undefined8 *)PTR_DAT_02001f18);
      iVar4 = FUN_004170c0(&DAT_013db464,local_b0,1);
      FUN_01cc1400(lVar7,&local_b8,*(undefined8 *)PTR_DAT_02001f18);
      FUN_00416780(&local_40,*(undefined2 *)(local_b8 + -2 + (longlong)(iVar4 + 1) * 2));
    }
    local_30 = 0;
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_c0,0x129);
    uVar8 = FUN_00b89270();
    FUN_00b8e520(uVar8,&local_c8,0x13d);
    FUN_00416ad0(&local_c8,L" [#deg]");
    in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffff00000000;
    in_stack_fffffffffffffe00 = local_c8;
    FUN_00f16900(uVar5,param_1,0,local_c0,uVar11 & 0xffffffffffffff00,1,in_stack_fffffffffffffdf8,
                 local_c8,0,1,2,&local_30,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_90);
    FUN_01acf9e0(lVar6,local_90);
    uVar5 = local_30;
    cVar2 = FUN_01ce8540(local_30);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 4) != 0) {
    iVar9 = iVar9 + 1;
    local_50[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_50);
    FUN_0043f750(&local_d0,DAT_01f45474);
    FUN_00416ba0(&local_38,L"Fourier - Real part",local_d0);
    DAT_01f45474 = DAT_01f45474 + 1;
    uVar5 = FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    if (param_4 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_4 & 0x1f) & 5U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbcb38,1,param_1);
    }
    else {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbcfe8,1,param_1);
    }
    FUN_01cc5c60(param_1);
    lVar7 = FUN_01cc5cc0(param_1);
    if (param_4 == 1) {
      FUN_00414b50(&local_40,&PTR_DAT_013db450);
    }
    else if (lVar7 == 0) {
      FUN_00414480(&local_40);
    }
    else {
      FUN_01cc1400(lVar7,&local_d8,*(undefined8 *)PTR_DAT_02001f18);
      iVar4 = FUN_004170c0(&DAT_013db464,local_d8,1);
      FUN_01cc1400(lVar7,&local_e0,*(undefined8 *)PTR_DAT_02001f18);
      FUN_00416780(&local_40,*(undefined2 *)(local_e0 + -2 + (longlong)(iVar4 + 1) * 2));
    }
    if (param_3 == '\0') {
      FUN_00414b50(&local_38,L"/Hz]");
    }
    else {
      FUN_00414b50(&local_38,&DAT_013db48c);
    }
    local_30 = 0;
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_e8,0x129);
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_f8,0x11d);
    uVar11 = local_40;
    FUN_00416cd0(&local_f0,4,local_f8,&DAT_013db49c,local_40,local_38);
    in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffff00000000;
    in_stack_fffffffffffffe00 = local_f0;
    FUN_00f16900(local_198,param_1,0,local_e8,uVar11 & 0xffffffffffffff00,1,
                 in_stack_fffffffffffffdf8,local_f0,param_4,1,2,&local_30,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_90);
    FUN_01acf9e0(lVar6,local_90);
    uVar5 = local_30;
    cVar2 = FUN_01ce8540(local_30);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 8) != 0) {
    iVar9 = iVar9 + 1;
    local_50[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_50);
    FUN_0043f750(&local_100,DAT_01f45478);
    FUN_00416ba0(&local_38,L"Fourier - Imaginary part",local_100);
    DAT_01f45478 = DAT_01f45478 + 1;
    uVar5 = FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    if (param_4 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_4 & 0x1f) & 5U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbd2b8,1,param_1);
    }
    else {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbd580,1,param_1);
    }
    FUN_01cc5c60(param_1);
    lVar7 = FUN_01cc5cc0(param_1);
    if (param_4 == 1) {
      FUN_00414b50(&local_40,&PTR_DAT_013db450);
    }
    else if (lVar7 == 0) {
      FUN_00414480(&local_40);
    }
    else {
      FUN_01cc1400(lVar7,&local_108,*(undefined8 *)PTR_DAT_02001f18);
      iVar4 = FUN_004170c0(&DAT_013db464,local_108,1);
      FUN_01cc1400(lVar7,&local_110,*(undefined8 *)PTR_DAT_02001f18);
      FUN_00416780(&local_40,*(undefined2 *)(local_110 + -2 + (longlong)(iVar4 + 1) * 2));
    }
    if (param_3 == '\0') {
      FUN_00414b50(&local_38,L"/Hz]");
    }
    else {
      FUN_00414b50(&local_38,&DAT_013db48c);
    }
    local_30 = 0;
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_118,0x129);
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_128,0x11e);
    uVar11 = local_40;
    FUN_00416cd0(&local_120,4,local_128,&DAT_013db49c,local_40,local_38);
    in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffff00000000;
    in_stack_fffffffffffffe00 = local_120;
    FUN_00f16900(local_198,param_1,0,local_118,uVar11 & 0xffffffffffffff00,1,
                 in_stack_fffffffffffffdf8,local_120,param_4,1,2,&local_30,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_90);
    FUN_01acf9e0(lVar6,local_90);
    uVar5 = local_30;
    cVar2 = FUN_01ce8540(local_30);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 0x10) != 0) {
    iVar9 = iVar9 + 1;
    local_50[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_50);
    FUN_0043f750(&local_130,DAT_01f45468);
    FUN_00416ba0(&local_38,L"Fourier - Power",local_130);
    DAT_01f45468 = DAT_01f45468 + 1;
    uVar5 = FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    if (param_4 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_4 & 0x1f) & 5U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbd850,1,param_1);
    }
    else {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbdb20,1,param_1);
    }
    FUN_01cc5c60(param_1);
    lVar7 = FUN_01cc5cc0(param_1);
    if (lVar7 != 0) {
      FUN_01cc1400(lVar7,&local_138,*(undefined8 *)PTR_DAT_02001f18);
      FUN_004170c0(&DAT_013db464,local_138,1);
    }
    if (param_4 == 1) {
      FUN_00414b50(&local_40,&PTR_DAT_013db450);
    }
    else {
      FUN_00414b50(&local_40,&DAT_013db5e8);
    }
    if (param_3 == '\0') {
      FUN_00414b50(&local_38,L"/Hz]");
    }
    else {
      FUN_00414b50(&local_38,&DAT_013db48c);
    }
    local_30 = 0;
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_140,0x129);
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_150,0x13e);
    uVar11 = local_40;
    FUN_00416cd0(&local_148,4,local_150,&DAT_013db49c,local_40,local_38);
    in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffff00000000;
    in_stack_fffffffffffffe00 = local_148;
    FUN_00f16900(local_198,param_1,0,local_140,uVar11 & 0xffffffffffffff00,1,
                 in_stack_fffffffffffffdf8,local_148,param_4,1,2,&local_30,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_90);
    FUN_01acf9e0(lVar6,local_90);
    uVar5 = local_30;
    cVar2 = FUN_01ce8540(local_30);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if ((param_2 & 0x20) != 0) {
    iVar9 = iVar9 + 1;
    local_50[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_50);
    if (param_5 == '\0') {
      FUN_0043f750(&local_168,DAT_01f45468);
      FUN_00416ba0(&local_38,L"Fourier - Amplitude",local_168);
    }
    else {
      FUN_013d2e10(&local_158,param_1 + 0x68);
      FUN_0043f750(&local_160,DAT_01f45468);
      FUN_00416cd0(&local_38,3,local_158,L" - Amplitude",local_160);
    }
    DAT_01f45468 = DAT_01f45468 + 1;
    uVar5 = FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_38,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    if (param_4 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (param_4 & 0x1f) & 5U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbddf0,1,param_1);
    }
    else {
      local_198 = FUN_01cc6f70(&PTR_FUN_01cbe0c0,1,param_1);
    }
    FUN_01cc5c60(param_1);
    lVar7 = FUN_01cc5cc0(param_1);
    if (param_4 == 1) {
      FUN_00414b50(&local_40,&PTR_DAT_013db450);
    }
    else if (lVar7 == 0) {
      FUN_00414480(&local_40);
    }
    else {
      FUN_01cc1400(lVar7,&local_170,*(undefined8 *)PTR_DAT_02001f18);
      iVar4 = FUN_004170c0(&DAT_013db464,local_170,1);
      FUN_01cc1400(lVar7,&local_178,*(undefined8 *)PTR_DAT_02001f18);
      FUN_00416780(&local_40,*(undefined2 *)(local_178 + -2 + (longlong)(iVar4 + 1) * 2));
    }
    if (param_3 == '\0') {
      FUN_00414b50(&local_38,L"/Hz]");
    }
    else {
      FUN_00414b50(&local_38,&DAT_013db48c);
    }
    local_30 = 0;
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_180,0x129);
    uVar5 = FUN_00b89270();
    FUN_00b8e520(uVar5,&local_190,0x13c);
    uVar11 = local_40;
    FUN_00416cd0(&local_188,4,local_190,&DAT_013db49c,local_40,local_38);
    in_stack_fffffffffffffe00 = local_188;
    FUN_00f16900(local_198,param_1,0,local_180,uVar11 & 0xffffffffffffff00,1,
                 in_stack_fffffffffffffdf8 & 0xffffffff00000000,local_188,param_4,1,2,&local_30,
                 lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_30);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_90);
    FUN_01acf9e0(lVar6,local_90);
    uVar5 = local_30;
    cVar2 = FUN_01ce8540(local_30);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
    FUN_01adc0f0(lVar6,0,0);
  }
  if (iVar9 != 0) {
    lVar6 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
    plVar1 = *(longlong **)(lVar6 + 0x10);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_01cec9c0(lVar6,iVar4 - iVar9,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
                 in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  }
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013db362:
  FUN_00414560(&local_190,0x20);
  FUN_00414560(&local_80,6);
  FUN_00414560(&local_40,2);
  return;
}

