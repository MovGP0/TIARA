/* Ghidra address: 013d6a00 */
/* Ghidra symbol: FUN_013d6a00 */


void FUN_013d6a00(longlong param_1,ulonglong param_2,char param_3,char param_4,undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int iVar10;
  bool bVar11;
  undefined8 *puVar12;
  ulonglong in_stack_fffffffffffffe68;
  uint uVar15;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_138;
  undefined1 local_129;
  ulonglong local_128;
  undefined8 local_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_120 = 0;
  local_128 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_1 == 0) goto LAB_013d8531;
  FUN_013d2e70();
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,param_5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d6bde:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar6 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar6 < 8) {
      bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 6U) != 0;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) goto LAB_013d6bde;
  }
  if (PTR_DAT_02004010[0x3cd] == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 2;
  }
  iVar10 = 0;
  if ((param_2 & 1) != 0) {
    iVar10 = 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_58,DAT_01f4542c);
      FUN_00416ba0(&local_38,L"AC Ampli",local_58);
      DAT_01f4542c = DAT_01f4542c + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"SA Ampli");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar15 = (uint)(in_stack_fffffffffffffe68 >> 0x20);
    local_30 = 0;
    if (*PTR_DAT_020052b8 == '\0') {
      cVar3 = FUN_013d4b80(param_1);
      if (cVar3 == '\0') {
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_40,0x11a);
        local_138 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_1);
      }
      else {
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_40,0x122);
        local_138 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_1);
      }
      local_30 = 0;
      if (*PTR_DAT_020052b8 == '\0') {
        in_stack_fffffffffffffe68 = 0;
        local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,(ulonglong)puVar12 & 0xffffffffffffff00,0);
      }
      if (local_30 == 0) {
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_68,0x129);
        in_stack_fffffffffffffe70 = local_40;
        FUN_00f16900(local_138,param_1,0,local_68,uVar9,1,
                     in_stack_fffffffffffffe68 & 0xffffffff00000000,local_40,cVar3 == '\0',1,2,
                     &local_30,lVar7,1,0);
        (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                  (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
        FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
        FUN_01acf9e0(lVar7,local_78);
        lVar2 = local_30;
        cVar3 = FUN_01ce8540(local_30);
        if (cVar3 != '\0') {
          uVar4 = FUN_01ce83f0(lVar2);
          FUN_01ce6ab0(lVar2,uVar4,0);
        }
        FUN_01ad0490(lVar7);
        FUN_01acfa60(lVar7);
        FUN_01adc0f0(lVar7,0,0);
      }
    }
    else {
      if (param_4 == '\0') {
        local_138 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_1);
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_40,0x11b);
        local_129 = 0;
      }
      else if (param_4 == '\x01') {
        local_138 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_1);
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_40,0x11c);
        local_129 = 0;
      }
      else if (param_4 == '\x02') {
        local_138 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_1);
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_40,0x11a);
        local_129 = 1;
      }
      uVar6 = FUN_00b89270();
      FUN_00b8e520(uVar6,&local_60,0x129);
      in_stack_fffffffffffffe70 = local_40;
      FUN_00f16900(local_138,param_1,0,local_60,uVar9,1,(ulonglong)uVar15 << 0x20,local_40,local_129
                   ,1,2,&local_30,lVar7,1,0);
      iVar10 = 1;
    }
  }
  if ((param_2 & 2) != 0) {
    iVar10 = iVar10 + 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_80,DAT_01f45430);
      FUN_00416ba0(&local_38,L"AC Phase",local_80);
      DAT_01f45430 = DAT_01f45430 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"SA Phase");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar13 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,(ulonglong)puVar12 & 0xffffffffffffff00,0);
    if (local_30 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_1);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_88,0x129);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_90,0x13d);
      FUN_00416ad0(&local_90,L" [#deg]");
      in_stack_fffffffffffffe70 = local_90;
      FUN_00f16900(uVar6,param_1,0,local_88,uVar9,1,uVar13 & 0xffffffff00000000,local_90,0,1,2,
                   &local_30,lVar7,1,0);
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
      FUN_01acf9e0(lVar7,local_78);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
      FUN_01ad0490(lVar7);
      FUN_01acfa60(lVar7);
      FUN_01adc0f0(lVar7,0,0);
    }
  }
  if ((param_2 & 4) != 0) {
    iVar10 = iVar10 + 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_98,DAT_01f45434);
      FUN_00416ba0(&local_38,L"AC Bode",local_98);
      DAT_01f45434 = DAT_01f45434 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"SA Bode");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar13 = (ulonglong)puVar12 & 0xffffffffffffff00;
    uVar14 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,uVar13,0);
    if (local_30 == 0) {
      cVar3 = FUN_013d4b80(param_1);
      if (cVar3 == '\0') {
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_40,0x11a);
        local_138 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_1);
      }
      else {
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_40,0x122);
        local_138 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_1);
      }
      uVar6 = FUN_00b89270();
      FUN_00b8e520(uVar6,&local_a0,0x129);
      uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
      in_stack_fffffffffffffe70 = local_40;
      FUN_00f16900(local_138,param_1,0,local_a0,uVar9,uVar13,uVar14 & 0xffffffff00000000,local_40,
                   cVar3 == '\0',1,2,&local_30,lVar7,1,0);
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
    }
    uVar14 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,uVar13 & 0xffffffffffffff00,0);
    if (local_30 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_1);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_a8,0x129);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_b0,0x13d);
      FUN_00416ad0(&local_b0,L" [#deg]");
      in_stack_fffffffffffffe70 = local_b0;
      FUN_00f16900(uVar6,param_1,0,local_a8,uVar9,1,uVar14 & 0xffffffff00000000,local_b0,0,1,2,
                   &local_30,lVar7,1,0);
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
      FUN_01acf9e0(lVar7,local_78);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
      FUN_01ad0490(lVar7);
      FUN_01acfa60(lVar7);
      FUN_01adc0f0(lVar7,0,0);
    }
  }
  if ((param_2 & 0x10) != 0) {
    iVar10 = iVar10 + 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_b8,DAT_01f45430);
      FUN_00416ba0(&local_38,L"Group delay",local_b8);
      DAT_01f45430 = DAT_01f45430 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"Group delay");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar13 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,(ulonglong)puVar12 & 0xffffffffffffff00,0);
    if (local_30 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_1);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_c0,0x129);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_c8,0x128);
      in_stack_fffffffffffffe70 = local_c8;
      FUN_00f16900(uVar6,param_1,0,local_c0,uVar9,1,uVar13 & 0xffffffff00000000,local_c8,0,1,2,
                   &local_30,lVar7,1,0);
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
      FUN_01acf9e0(lVar7,local_78);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
      FUN_01ad0490(lVar7);
      FUN_01acfa60(lVar7);
      FUN_01adc0f0(lVar7,0,0);
    }
  }
  if ((param_2 & 0x80) != 0) {
    iVar10 = iVar10 + 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_d0,DAT_01f4542c);
      FUN_00416ba0(&local_38,L"AC Loss",local_d0);
      DAT_01f4542c = DAT_01f4542c + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"SA Loss");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar13 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,(ulonglong)puVar12 & 0xffffffffffffff00,0);
    if (local_30 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cb9268,1,param_1);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_d8,0x129);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_e0,0x11a);
      in_stack_fffffffffffffe70 = local_e0;
      FUN_00f16900(uVar6,param_1,0,local_d8,uVar9,1,uVar13 & 0xffffffff00000000,local_e0,1,1,2,
                   &local_30,lVar7,1,0);
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
      FUN_01acf9e0(lVar7,local_78);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
      FUN_01ad0490(lVar7);
      FUN_01acfa60(lVar7);
      FUN_01adc0f0(lVar7,0,0);
    }
  }
  if ((param_2 & 0x100) != 0) {
    iVar10 = iVar10 + 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_e8,DAT_01f45430);
      FUN_00416ba0(&local_38,L"VSWR",local_e8);
      DAT_01f45430 = DAT_01f45430 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"VSWR");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar13 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,(ulonglong)puVar12 & 0xffffffffffffff00,0);
    if (local_30 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cb98d8,1,param_1);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_f0,0x129);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_f8,0x13d);
      FUN_00416ad0(&local_f8,L" [#deg]");
      in_stack_fffffffffffffe70 = local_f8;
      FUN_00f16900(uVar6,param_1,0,local_f0,uVar9,1,uVar13 & 0xffffffff00000000,local_f8,0,1,2,
                   &local_30,lVar7,1,0);
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
      FUN_01acf9e0(lVar7,local_78);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
      FUN_01ad0490(lVar7);
      FUN_01acfa60(lVar7);
      FUN_01adc0f0(lVar7,0,0);
    }
  }
  if ((param_2 & 0x20) != 0) {
    iVar10 = iVar10 + 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_100,DAT_01f4543c);
      FUN_00416ba0(&local_38,L"NA Smith",local_100);
      DAT_01f4543c = DAT_01f4543c + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"SA Smith");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar13 = (ulonglong)puVar12 & 0xffffffffffffff00;
    uVar4 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,uVar13,0);
    if (local_30 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cba688,1,param_1);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_108,0x11d);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_110,0x11e);
      in_stack_fffffffffffffe70 = local_110;
      FUN_00f16900(uVar6,param_1,5,local_108,3,uVar13 & 0xffffffffffffff00,CONCAT44(uVar4,1),
                   local_110,3,0,1,&local_30,lVar7,1,0);
      *(undefined1 *)(local_30 + 0x68) = 1;
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
      FUN_01acf9e0(lVar7,local_78);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
      FUN_01ad0490(lVar7);
      FUN_01acfa60(lVar7);
      FUN_01adc0f0(lVar7,0,0);
    }
  }
  if ((param_2 & 0x40) != 0) {
    iVar10 = iVar10 + 1;
    local_50[0] = FUN_00498310(0,0);
    puVar12 = local_50;
    lVar7 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar12);
    if (param_3 == '\0') {
      FUN_0043f750(&local_118,DAT_01f45440);
      FUN_00416ba0(&local_38,L"NA Polar",local_118);
      DAT_01f45440 = DAT_01f45440 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_38,L"SA Polar");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar7,local_38,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar13 = (ulonglong)puVar12 & 0xffffffffffffff00;
    uVar4 = 0;
    local_30 = FUN_01adfeb0(lVar7,param_1,0,0,0,uVar13,0);
    if (local_30 == 0) {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_1);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_120,0x11d);
      uVar8 = FUN_00b89270();
      FUN_00b8e520(uVar8,&local_128,0x11e);
      in_stack_fffffffffffffe70 = local_128;
      FUN_00f16900(uVar6,param_1,6,local_120,3,uVar13 & 0xffffffffffffff00,CONCAT44(uVar4,1),
                   local_128,3,0,0,&local_30,lVar7,1,0);
      *(undefined1 *)(local_30 + 0x68) = 1;
      (**(code **)(**(longlong **)(lVar7 + 0xd8) + 0x80))
                (*(longlong **)(lVar7 + 0xd8),L"Analysis Result 1",local_30);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_78);
      FUN_01acf9e0(lVar7,local_78);
      lVar2 = local_30;
      cVar3 = FUN_01ce8540(local_30);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar2);
        FUN_01ce6ab0(lVar2,uVar4,0);
      }
      FUN_01ad0490(lVar7);
      FUN_01acfa60(lVar7);
      FUN_01adc0f0(lVar7,0,0);
    }
  }
  lVar7 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  if (iVar10 != 0) {
    plVar1 = *(longlong **)(lVar7 + 0x10);
    iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_01cec9c0(lVar7,iVar5 - iVar10,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
                 in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  }
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar6 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar6,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013d8531:
  FUN_00414560(&local_128,0x16);
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_40,2);
  return;
}

