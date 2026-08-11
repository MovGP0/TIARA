/* Ghidra address: 013d4bc0 */
/* Ghidra symbol: FUN_013d4bc0 */


void FUN_013d4bc0(longlong param_1,ulonglong param_2,char param_3,char param_4,undefined1 param_5)

{
  undefined1 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  double dVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffe90;
  undefined1 local_109;
  int local_108;
  undefined8 local_100;
  undefined1 local_f1;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = 0;
  if (param_1 == 0) goto LAB_013d66ac;
  FUN_013d2e70();
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x434);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0xfff5);
  FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,param_5);
  if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x8a0) + 0x80) == '\0') {
LAB_013d4d56:
    FUN_01cec530(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
  }
  else {
    uVar7 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8);
    if ((byte)uVar7 < 8) {
      bVar14 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << ((byte)uVar7 & 0x1f) & 6U) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) goto LAB_013d4d56;
  }
  local_108 = 0;
  if (PTR_DAT_02004010[0x39d] == '\0') {
    local_109 = 0;
  }
  else {
    local_109 = 2;
  }
  if ((param_2 & 1) != 0) {
    local_108 = 1;
    local_60[0] = FUN_00498310(0,0);
    puVar16 = local_60;
    lVar8 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar16);
    FUN_00414ad0(lVar8 + 0x60,&DAT_013d6768);
    if (param_3 == '\0') {
      FUN_0043f750(&local_68,DAT_01f4542c);
      FUN_00416ba0(&local_48,L"AC Ampli",local_68);
      DAT_01f4542c = DAT_01f4542c + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_48,L"SA Ampli");
    }
    else if (param_3 == '\x02') {
      FUN_00414b50(&local_48,L"Imported Ampli");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar8,local_48,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar17 = 0;
    local_40[0] = FUN_01adfeb0(lVar8,param_1,0,0,0,(ulonglong)puVar16 & 0xffffffffffffff00,0);
    if (local_40[0] == 0) {
      if (*PTR_DAT_020052b8 == '\0') {
        cVar3 = FUN_013d4b80(param_1);
        if (cVar3 == '\0') {
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_50,0x11a);
          local_100 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_1);
        }
        else {
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_50,0x122);
          local_100 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_1);
        }
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,&local_78,0x129);
        in_stack_fffffffffffffe90 = local_50;
        FUN_00f16900(local_100,param_1,0,local_78,local_109,1,uVar17 & 0xffffffff00000000,local_50,
                     cVar3 == '\0',1,2,local_40,lVar8,1,0);
      }
      else {
        if (param_4 == '\0') {
          local_100 = FUN_01cc6f70(&PTR_FUN_01cb8cd8,1,param_1);
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_50,0x11b);
          local_f1 = 0;
        }
        else if (param_4 == '\x01') {
          local_100 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_1);
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_50,0x11c);
          local_f1 = 0;
        }
        else if (param_4 == '\x02') {
          local_100 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_1);
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_50,0x11a);
          local_f1 = 1;
        }
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,&local_70,0x129);
        in_stack_fffffffffffffe90 = local_50;
        FUN_00f16900(local_100,param_1,0,local_70,local_109,1,uVar17 & 0xffffffff00000000,local_50,
                     local_f1,1,2,local_40,lVar8,1,0);
      }
      (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x80))
                (*(longlong **)(lVar8 + 0xd8),L"Analysis Result 1",local_40[0]);
      lVar10 = local_40[0];
      cVar3 = FUN_01ce8540(local_40[0]);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar10);
        FUN_01ce6ab0(lVar10,uVar4,0);
      }
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
      FUN_01acf9e0(lVar8,local_88);
      FUN_01adc0f0(lVar8,0,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar8,local_88);
    FUN_01ad0490(lVar8);
    FUN_01acfa60(lVar8);
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar8;
    FUN_013e4fd0(uVar1);
  }
  if ((param_2 & 2) != 0) {
    local_108 = local_108 + 1;
    local_60[0] = FUN_00498310(0,0);
    puVar16 = local_60;
    lVar8 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar16);
    FUN_00414ad0(lVar8 + 0x60,&DAT_013d6768);
    if (param_3 == '\0') {
      FUN_0043f750(&local_90,DAT_01f45430);
      FUN_00416ba0(&local_48,L"AC Phase",local_90);
      DAT_01f45430 = DAT_01f45430 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_48,L"SA Phase");
    }
    else if (param_3 == '\x02') {
      FUN_00414b50(&local_48,L"Imported Phase");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar8,local_48,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar17 = 0;
    local_40[0] = FUN_01adfeb0(lVar8,param_1,0,0,0,(ulonglong)puVar16 & 0xffffffffffffff00,0);
    if (local_40[0] == 0) {
      uVar7 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_1);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_98,0x129);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_a0,0x13d);
      FUN_00416ad0(&local_a0,L" [#deg]");
      in_stack_fffffffffffffe90 = local_a0;
      FUN_00f16900(uVar7,param_1,0,local_98,local_109,1,uVar17 & 0xffffffff00000000,local_a0,0,1,2,
                   local_40,lVar8,1,0);
      (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x80))
                (*(longlong **)(lVar8 + 0xd8),L"Analysis Result 1",local_40[0]);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
      FUN_01acf9e0(lVar8,local_88);
      lVar10 = local_40[0];
      cVar3 = FUN_01ce8540(local_40[0]);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar10);
        FUN_01ce6ab0(lVar10,uVar4,0);
      }
      FUN_01adc0f0(lVar8,0,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar8,local_88);
    FUN_01ad0490(lVar8);
    FUN_01acfa60(lVar8);
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar8;
    FUN_013e4fd0(uVar1);
  }
  if ((param_2 & 8) != 0) {
    local_108 = local_108 + 1;
    local_60[0] = FUN_00498310(0,0);
    puVar16 = local_60;
    lVar8 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar16);
    FUN_00414ad0(lVar8 + 0x60,&DAT_013d6768);
    if (param_3 == '\0') {
      FUN_0043f750(&local_a8,DAT_01f45438);
      FUN_00416ba0(&local_48,L"AC Nyquist",local_a8);
      DAT_01f45438 = DAT_01f45438 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_48,L"SA Nyquist");
    }
    else if (param_3 == '\x02') {
      FUN_00414b50(&local_48,L"Imported Nyquist");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar8,local_48,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar17 = 0;
    uVar4 = 0;
    local_40[0] = FUN_01adfeb0(lVar8,param_1,0,0,0,(ulonglong)puVar16 & 0xffffffffffffff00,0);
    if (local_40[0] == 0) {
      uVar7 = FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_1);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_b0,0x11d);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_b8,0x11e);
      in_stack_fffffffffffffe90 = local_b8;
      FUN_00f16900(uVar7,param_1,0,local_b0,uVar17 & 0xffffffffffffff00,1,CONCAT44(uVar4,2),local_b8
                   ,0,1,2,local_40,lVar8,1,0);
      lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                         (*(longlong **)(local_40[0] + 0x70),0);
      lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                         (*(longlong **)(local_40[0] + 0x70),0);
      lVar12 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                         (*(longlong **)(local_40[0] + 0x78),0);
      lVar13 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                         (*(longlong **)(local_40[0] + 0x78),0);
      if ((*(double *)(lVar10 + 0xc0) - *(double *)(lVar11 + 0xb8)) /
          (*(double *)(lVar12 + 0xc0) - *(double *)(lVar13 + 0xb8)) <= 10.0) {
        lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                           (*(longlong **)(local_40[0] + 0x70),0);
        lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                           (*(longlong **)(local_40[0] + 0x70),0);
        lVar12 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        lVar13 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        if ((*(double *)(lVar10 + 0xc0) - *(double *)(lVar11 + 0xb8)) /
            (*(double *)(lVar12 + 0xc0) - *(double *)(lVar13 + 0xb8)) < 0.1) {
          lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                             (*(longlong **)(local_40[0] + 0x78),0);
          lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                             (*(longlong **)(local_40[0] + 0x78),0);
          lVar12 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                             (*(longlong **)(local_40[0] + 0x70),0);
          lVar13 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                             (*(longlong **)(local_40[0] + 0x70),0);
          dVar15 = ((*(double *)(lVar10 + 0xc0) - *(double *)(lVar11 + 0xb8)) -
                   (*(double *)(lVar12 + 0xc0) - *(double *)(lVar13 + 0xb8))) / 2.0;
          lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                             (*(longlong **)(local_40[0] + 0x70),0);
          lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                             (*(longlong **)(local_40[0] + 0x70),0);
          *(double *)(lVar10 + 0xc0) = *(double *)(lVar11 + 0xc0) + dVar15;
          lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                             (*(longlong **)(local_40[0] + 0x70),0);
          lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                             (*(longlong **)(local_40[0] + 0x70),0);
          *(double *)(lVar10 + 0xb8) = *(double *)(lVar11 + 0xb8) - dVar15;
          lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                             (*(longlong **)(local_40[0] + 0x70),0);
          uVar4 = FUN_01ccdde0(lVar10);
          uVar5 = FUN_01ccde00(lVar10);
          FUN_01cd43b0(lVar10,uVar4,uVar5);
          *(undefined8 *)(lVar10 + 200) = *(undefined8 *)(lVar10 + 0xb8);
          *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(lVar10 + 0xc0);
        }
      }
      else {
        lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                           (*(longlong **)(local_40[0] + 0x70),0);
        lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x70) + 0x30))
                           (*(longlong **)(local_40[0] + 0x70),0);
        lVar12 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        lVar13 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        dVar15 = ((*(double *)(lVar10 + 0xc0) - *(double *)(lVar11 + 0xb8)) -
                 (*(double *)(lVar12 + 0xc0) - *(double *)(lVar13 + 0xb8))) / 2.0;
        lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        *(double *)(lVar10 + 0xc0) = *(double *)(lVar11 + 0xc0) + dVar15;
        lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        lVar11 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        *(double *)(lVar10 + 0xb8) = *(double *)(lVar11 + 0xb8) - dVar15;
        lVar10 = (**(code **)(**(longlong **)(local_40[0] + 0x78) + 0x30))
                           (*(longlong **)(local_40[0] + 0x78),0);
        uVar4 = FUN_01ccddc0(lVar10);
        uVar5 = FUN_01ccddd0(lVar10);
        FUN_01cd43b0(lVar10,uVar4,uVar5);
        *(undefined8 *)(lVar10 + 200) = *(undefined8 *)(lVar10 + 0xb8);
        *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(lVar10 + 0xc0);
      }
      *(undefined1 *)(local_40[0] + 0x68) = 1;
      (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x80))
                (*(longlong **)(lVar8 + 0xd8),L"Analysis Result 1",local_40[0]);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
      FUN_01acf9e0(lVar8,local_88);
      lVar10 = local_40[0];
      cVar3 = FUN_01ce8540(local_40[0]);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar10);
        FUN_01ce6ab0(lVar10,uVar4,0);
      }
      FUN_01adc0f0(lVar8,0,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar8,local_88);
    FUN_01ad0490(lVar8);
    FUN_01acfa60(lVar8);
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar8;
    FUN_013e4fd0(uVar1);
  }
  if ((param_2 & 0x10) != 0) {
    local_108 = local_108 + 1;
    local_60[0] = FUN_00498310(0,0);
    puVar16 = local_60;
    lVar8 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar16);
    FUN_00414ad0(lVar8 + 0x60,&DAT_013d6768);
    if (param_3 == '\0') {
      FUN_0043f750(&local_c0,DAT_01f45444);
      FUN_00416ba0(&local_48,L"AC Group delay",local_c0);
      DAT_01f45444 = DAT_01f45444 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_48,L"SA Group delay");
    }
    else if (param_3 == '\x02') {
      FUN_00414b50(&local_48,L"Imported Group delay");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar8,local_48,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar17 = 0;
    local_40[0] = FUN_01adfeb0(lVar8,param_1,0,0,0,(ulonglong)puVar16 & 0xffffffffffffff00,0);
    if (local_40[0] == 0) {
      uVar7 = FUN_01cc6f70(&PTR_FUN_01cbab10,1,param_1);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_c8,0x129);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_d0,0x128);
      in_stack_fffffffffffffe90 = local_d0;
      FUN_00f16900(uVar7,param_1,0,local_c8,local_109,1,uVar17 & 0xffffffff00000000,local_d0,0,1,2,
                   local_40,lVar8,1,0);
      (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x80))
                (*(longlong **)(lVar8 + 0xd8),L"Analysis Result 1",local_40[0]);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
      FUN_01acf9e0(lVar8,local_88);
      lVar10 = local_40[0];
      cVar3 = FUN_01ce8540(local_40[0]);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar10);
        FUN_01ce6ab0(lVar10,uVar4,0);
      }
      FUN_01adc0f0(lVar8,0,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar8,local_88);
    FUN_01ad0490(lVar8);
    FUN_01acfa60(lVar8);
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar8;
    FUN_013e4fd0(uVar1);
  }
  if ((param_2 & 4) != 0) {
    local_108 = local_108 + 1;
    local_60[0] = FUN_00498310(0,0);
    puVar16 = local_60;
    lVar8 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)PTR_DAT_02001e00,0,
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),puVar16);
    FUN_00414ad0(lVar8 + 0x60,&DAT_013d6768);
    if (param_3 == '\0') {
      FUN_0043f750(&local_d8,DAT_01f45434);
      FUN_00416ba0(&local_48,L"AC Bode",local_d8);
      DAT_01f45434 = DAT_01f45434 + 1;
    }
    else if (param_3 == '\x01') {
      FUN_00414b50(&local_48,L"SA Bode");
    }
    else if (param_3 == '\x02') {
      FUN_00414b50(&local_48,L"Imported Bode");
    }
    FUN_01cec150(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),lVar8,local_48,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
    uVar17 = (ulonglong)puVar16 & 0xffffffffffffff00;
    uVar18 = 0;
    local_40[0] = FUN_01adfeb0(lVar8,param_1,0,0,0,uVar17,0);
    if (local_40[0] == 0) {
      cVar3 = FUN_013d4b80(param_1);
      if (cVar3 == '\0') {
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,&local_50,0x11a);
        local_100 = FUN_01cc6f70(&PTR_FUN_01cb8fa8,1,param_1);
      }
      else {
        uVar7 = FUN_00b89270();
        FUN_00b8e520(uVar7,&local_50,0x122);
        local_100 = FUN_01cc6f70(&PTR_FUN_01cb8ae0,1,param_1);
      }
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_e0,0x129);
      uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
      in_stack_fffffffffffffe90 = local_50;
      FUN_00f16900(local_100,param_1,0,local_e0,local_109,uVar17,uVar18 & 0xffffffff00000000,
                   local_50,cVar3 == '\0',1,2,local_40,lVar8,1,0);
      (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x80))
                (*(longlong **)(lVar8 + 0xd8),L"Analysis Result 1",local_40[0]);
      lVar10 = local_40[0];
      cVar3 = FUN_01ce8540(local_40[0]);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar10);
        FUN_01ce6ab0(lVar10,uVar4,0);
      }
    }
    uVar18 = 0;
    local_40[0] = FUN_01adfeb0(lVar8,param_1,1,0,0,uVar17 & 0xffffffffffffff00,0);
    if (local_40[0] == 0) {
      uVar7 = FUN_01cc6f70(&PTR_FUN_01cb9528,1,param_1);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_e8,0x129);
      uVar9 = FUN_00b89270();
      FUN_00b8e520(uVar9,&local_f0,0x13d);
      FUN_00416ad0(&local_f0,L" [#deg]");
      in_stack_fffffffffffffe90 = local_f0;
      FUN_00f16900(uVar7,param_1,0,local_e8,local_109,1,uVar18 & 0xffffffff00000000,local_f0,0,1,2,
                   local_40,lVar8,1,0);
      (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x80))
                (*(longlong **)(lVar8 + 0xd8),L"Analysis Result 1",local_40[0]);
      FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
      FUN_01acf9e0(lVar8,local_88);
      lVar10 = local_40[0];
      cVar3 = FUN_01ce8540(local_40[0]);
      if (cVar3 != '\0') {
        uVar4 = FUN_01ce83f0(lVar10);
        FUN_01ce6ab0(lVar10,uVar4,0);
      }
      FUN_01adc0f0(lVar8,0,0);
    }
    FUN_01a782f0(*(undefined8 *)PTR_DAT_02001e00,local_88);
    FUN_01acf9e0(lVar8,local_88);
    *(undefined1 *)(lVar8 + 0x10d) = 1;
    FUN_01ad0490();
    FUN_01acfa60(lVar8);
    *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x798) = lVar8;
    FUN_013e4fd0(uVar1);
  }
  lVar8 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
  if (local_108 != 0) {
    plVar2 = *(longlong **)(lVar8 + 0x10);
    iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
    FUN_01cec9c0(lVar8,iVar6 - local_108,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),
                 in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  }
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0x4d2) == '\x01') {
    *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + -1;
    FUN_00800700(*(undefined8 *)PTR_DAT_02001e00,0);
  }
  uVar7 = FUN_0065b870(*(undefined8 *)PTR_DAT_02001e00);
  thunk_FUN_03ab0e43(uVar7,9);
  (**(code **)(**(longlong **)PTR_DAT_02001e00 + 600))(*(longlong **)PTR_DAT_02001e00);
  FUN_0064e140(*(undefined8 *)PTR_DAT_02001e00,0);
LAB_013d66ac:
  FUN_00414560(&local_f0,0xd);
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_50,2);
  return;
}

