/* Ghidra address: 013db650 */
/* Ghidra symbol: FUN_013db650 */


void FUN_013db650(longlong param_1,ulonglong param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong local_res10 [2];
  longlong local_res20;
  ulonglong uVar9;
  ulonglong in_stack_fffffffffffffe38;
  uint uVar10;
  ulonglong in_stack_fffffffffffffe40;
  ulonglong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_158 = 0;
  local_168 = 0;
  local_160 = 0;
  local_140 = 0;
  local_150 = 0;
  local_148 = 0;
  local_138 = 0;
  local_120 = 0;
  local_130 = 0;
  local_128 = 0;
  local_108 = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  if (param_1 == 0) goto LAB_013dccfe;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013db89a:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar5 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar5 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)uVar5 & 0x1f) & 6U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) goto LAB_013db89a;
  }
  uVar10 = (uint)(in_stack_fffffffffffffe38 >> 0x20);
  if (param_3 == '\0') {
    local_40[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
    if (local_res20 == 0) {
      FUN_00414b50(&local_30,L"FourierTHD - Amplitude (D)/Phase");
    }
    else {
      FUN_00414b50(&local_30,local_res20);
    }
    FUN_0043f750(&local_48,DAT_01f4547c);
    FUN_00416ba0(&local_28,local_30,local_48);
    DAT_01f4547c = DAT_01f4547c + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_28,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbddf0,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_58,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_50,4,local_58,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_60,0x13c);
    FUN_00416ad0(&local_60,L" [#V]");
    in_stack_fffffffffffffe38 = (ulonglong)uVar10 << 0x20;
    FUN_00f16900(uVar5,param_1,2,local_50,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_60,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 1",local_20);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbc850,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_70,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_68,4,local_70,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_78,0x13d);
    FUN_00416ad0(&local_78,L" [#deg]");
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    in_stack_fffffffffffffe40 = local_78;
    FUN_00f16900(uVar5,param_1,2,local_68,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_78,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 2",local_20);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar6,local_88);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
  }
  if (param_3 == '\x01') {
    local_40[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
    if (local_res20 == 0) {
      FUN_00414b50(&local_30,L"FourierTHD - Amplitude (C)/Phase");
    }
    else {
      FUN_00414b50(&local_30,local_res20);
    }
    FUN_0043f750(&local_90,DAT_01f4547c);
    FUN_00416ba0(&local_28,local_30,local_90);
    DAT_01f4547c = DAT_01f4547c + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_28,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbc030,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_a0,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_98,4,local_a0,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_a8,0x13c);
    FUN_00416ad0(&local_a8,L" [#V]");
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    FUN_00f16900(uVar5,param_1,2,local_98,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_a8,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 3",local_20);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbc850,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_b8,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_b0,4,local_b8,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_c0,0x13d);
    FUN_00416ad0(&local_c0,L" [#deg]");
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    in_stack_fffffffffffffe40 = local_c0;
    FUN_00f16900(uVar5,param_1,2,local_b0,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_c0,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 4",local_20);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar6,local_88);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
  }
  if (param_3 == '\x02') {
    local_40[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
    if (local_res20 == 0) {
      FUN_00414b50(&local_30,L"FourierTHD - Real/Imaginary");
    }
    else {
      FUN_00414b50(&local_30,local_res20);
    }
    FUN_0043f750(&local_c8,DAT_01f45480);
    FUN_00416ba0(&local_28,local_30,local_c8);
    DAT_01f45480 = DAT_01f45480 + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_28,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbe398,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_d8,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_d0,4,local_d8,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_e0,0x13c);
    FUN_00416ad0(&local_e0,&DAT_013dcfd0);
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    FUN_00f16900(uVar5,param_1,2,local_d0,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_e0,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 5",local_20);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbe890,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_f0,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_e8,4,local_f0,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_f8,0x13c);
    FUN_00416ad0(&local_f8,&PTR_DAT_013dd014);
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    in_stack_fffffffffffffe40 = local_f8;
    FUN_00f16900(uVar5,param_1,2,local_e8,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_f8,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 6",local_20);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar6,local_88);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
  }
  if (param_3 == '\x03') {
    local_40[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
    if (local_res20 == 0) {
      FUN_00414b50(&local_30,L"FourierTHD - Amplitude (rms)/Phase");
    }
    else {
      FUN_00414b50(&local_30,local_res20);
    }
    FUN_0043f750(&local_100,DAT_01f4547c);
    FUN_00416ba0(&local_28,local_30,local_100);
    DAT_01f4547c = DAT_01f4547c + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_28,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbc580,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_110,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_108,4,local_110,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_118,0x13c);
    FUN_00416ad0(&local_118,L" [#V]");
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    FUN_00f16900(uVar5,param_1,2,local_108,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_118,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 7",local_20);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbc850,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_128,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_120,4,local_128,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_130,0x13d);
    FUN_00416ad0(&local_130,L" [#deg]");
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    in_stack_fffffffffffffe40 = local_130;
    FUN_00f16900(uVar5,param_1,2,local_120,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_130,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 8",local_20);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar6,local_88);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
  }
  if (param_3 == '\x04') {
    local_40[0] = FUN_00498310(0,0);
    lVar6 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),local_40);
    if (local_res20 == 0) {
      FUN_00414b50(&local_30,L"FourierTHD - Real (rms)/Imaginary (rms)");
    }
    else {
      FUN_00414b50(&local_30,local_res20);
    }
    FUN_0043f750(&local_138,DAT_01f45480);
    FUN_00416ba0(&local_28,local_30,local_138);
    DAT_01f45480 = DAT_01f45480 + 1;
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar6,local_28,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbed88,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_148,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_140,4,local_148,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_150,0x13c);
    FUN_00416ad0(&local_150,&DAT_013dcfd0);
    in_stack_fffffffffffffe38 = in_stack_fffffffffffffe38 & 0xffffffff00000000;
    FUN_00f16900(uVar5,param_1,2,local_140,uVar9 & 0xffffffffffffff00,1,in_stack_fffffffffffffe38,
                 local_150,0,1,2,&local_20,lVar6,1,0);
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 9",local_20);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    uVar5 = FUN_01cc6f70(&PTR_FUN_01cbf058,1,param_1);
    local_20 = 0;
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_160,0x12f);
    uVar9 = local_res10[0];
    FUN_00416cd0(&local_158,4,local_160,&DAT_013dce20,local_res10[0],L"[#Hz]");
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_168,0x13c);
    FUN_00416ad0(&local_168,&PTR_DAT_013dd014);
    in_stack_fffffffffffffe40 = local_168;
    FUN_00f16900(uVar5,param_1,2,local_158,uVar9 & 0xffffffffffffff00,1,
                 in_stack_fffffffffffffe38 & 0xffffffff00000000,local_168,0,1,2,&local_20,lVar6,1,0)
    ;
    (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x80))
              (*(longlong **)(lVar6 + 0xd8),L"Analysis Result 10",local_20);
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar6,local_88);
    uVar5 = local_20;
    cVar2 = FUN_01ce8540(local_20);
    if (cVar2 != '\0') {
      uVar3 = FUN_01ce83f0(uVar5);
      FUN_01ce6ab0(uVar5,uVar3,0);
    }
    FUN_01ad0490(lVar6);
    FUN_01acfa60(lVar6);
  }
  lVar6 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  plVar1 = *(longlong **)(lVar6 + 0x10);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_01cec9c0(lVar6,iVar4 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
               *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
               *(undefined8 *)PTR_DAT_02001e00,
               *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
               in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar5 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar5,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013dccfe:
  FUN_00414560(&local_168,0x1c);
  FUN_00414560(&local_78,7);
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return;
}

