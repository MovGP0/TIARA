/* Ghidra address: 0145f5e0 */
/* Ghidra symbol: FUN_0145f5e0 */


void FUN_0145f5e0(longlong *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong in_stack_ffffffffffffff28;
  ulonglong in_stack_ffffffffffffff30;
  longlong local_a8;
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
  undefined8 local_40 [2];
  undefined1 local_30 [5];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [9];
  
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_a8 = param_3;
  if (param_3 == 0) {
    local_a8 = FUN_019a4600();
  }
  FUN_019b5af0(*(undefined8 *)PTR_DAT_02002dd8);
  lVar2 = *(longlong *)PTR_DAT_02002dd8;
  *(longlong *)(lVar2 + 0xe78) = local_a8;
  if ((param_1 == (longlong *)0x0) ||
     (cVar3 = FUN_014b7d50(0xe,local_a8,1,0,in_stack_ffffffffffffff28 & 0xffffffffffffff00,
                           in_stack_ffffffffffffff30 & 0xffffffffffff0000,local_30), cVar3 == '\0'))
  goto LAB_01460881;
  if (param_2 == 1) {
    cVar3 = '\0';
  }
  else if (param_2 == 2) {
    cVar3 = '\x02';
  }
  else if (param_2 == 3) {
    cVar3 = '\x03';
  }
  else if ((*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xd18) + 0x80) == '\0') &&
          (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xd20) + 0x80) == '\0')) {
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xd30) + 0x80) == '\0') {
      if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0xd28) + 0x80) == '\0') {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x03';
      }
    }
    else {
      cVar3 = '\x02';
    }
  }
  else {
    cVar3 = '\0';
  }
  *(undefined1 *)(lVar2 + 0xe32) = 1;
  *(undefined1 *)(lVar2 + 0xb1) = 0;
  uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (uVar6 < 0x3e) {
    if (uVar6 == 0x3d) {
      FUN_0145e590();
      uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
      iVar7 = (**(code **)(*param_1 + 0x210))(param_1,0);
      iVar8 = (**(code **)(*param_1 + 0x210))(param_1,1);
      if (iVar7 != iVar8) {
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x80) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x81) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x82) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x83) = uVar4;
        (**(code **)(*param_1 + 0x288))(param_1,local_40);
        FUN_00414ad0(lVar2 + 0x88,local_40[0]);
        *(undefined1 *)(lVar2 + 0x84) = 1;
        FUN_0145f1a0(L"TR result (Ch1):",local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
      }
      iVar7 = (**(code **)(*param_1 + 0x210))(param_1,2);
      iVar8 = (**(code **)(*param_1 + 0x210))(param_1,3);
      if (iVar7 != iVar8) {
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,2);
        *(undefined1 *)(lVar2 + 0x80) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,2);
        *(undefined1 *)(lVar2 + 0x81) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,3);
        *(undefined1 *)(lVar2 + 0x82) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,3);
        *(undefined1 *)(lVar2 + 0x83) = uVar4;
        (**(code **)(*param_1 + 0x288))(param_1,&local_48);
        FUN_00414ad0(lVar2 + 0x88,local_48);
        *(undefined1 *)(lVar2 + 0x84) = 1;
        FUN_0145f1a0(L"TR result (Ch2):",local_a8);
      }
      FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
    }
    else if (uVar6 < 9) {
      if (uVar6 == 8) {
LAB_01460714:
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x80) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x81) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x82) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x83) = uVar5;
        (**(code **)(*param_1 + 0x288))(param_1,&local_a0);
        FUN_00414ad0(lVar2 + 0x88,local_a0);
        *(undefined1 *)(lVar2 + 0x84) = 1;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x70) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x71) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x72) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x73) = uVar5;
        *(undefined1 *)(lVar2 + 0x74) = 0;
        *(undefined1 *)(lVar2 + 0xb1) = 1;
        FUN_0145e590();
        uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
        FUN_0145e790(0,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
        FUN_0145e790(1,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
      }
      else if (uVar6 == 4) {
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x80) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x81) = uVar5;
        *(undefined1 *)(lVar2 + 0x82) = 0;
        *(undefined1 *)(lVar2 + 0x83) = 0;
        (**(code **)(*param_1 + 0x288))(param_1,&local_90);
        FUN_00414ad0(lVar2 + 0x88,local_90);
        *(undefined1 *)(lVar2 + 0x84) = 1;
        if ((*PTR_DAT_020052b8 == '\0') || (cVar3 == '\0')) {
          FUN_0145e590();
          uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
          FUN_0145ef50(0,local_a8);
          FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
          FUN_0145ef50(1,local_a8);
          FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
        }
        else {
          FUN_0145f1a0(L"TR result:",local_a8);
        }
      }
      else {
        if (uVar6 == 5) goto LAB_014603cc;
        if (uVar6 == 6) goto LAB_014605ee;
      }
    }
    else if (uVar6 == 0x21) {
LAB_014603cc:
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
      *(undefined1 *)(lVar2 + 0x80) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
      *(undefined1 *)(lVar2 + 0x81) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
      *(undefined1 *)(lVar2 + 0x82) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
      *(undefined1 *)(lVar2 + 0x83) = uVar5;
      (**(code **)(*param_1 + 0x288))(param_1,&local_88);
      FUN_00414ad0(lVar2 + 0x88,local_88);
      *(undefined1 *)(lVar2 + 0x84) = 1;
      if ((*PTR_DAT_020052b8 == '\0') || (cVar3 == '\0')) {
        FUN_0145e590();
        uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
        FUN_0145ef50(0,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
        FUN_0145ef50(1,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
      }
      else {
        FUN_0145f1a0(L"TR result:",local_a8);
      }
    }
    else if (uVar6 == 0x22) {
LAB_014605ee:
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
      *(undefined1 *)(lVar2 + 0x80) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
      *(undefined1 *)(lVar2 + 0x81) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
      *(undefined1 *)(lVar2 + 0x82) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
      *(undefined1 *)(lVar2 + 0x83) = uVar5;
      (**(code **)(*param_1 + 0x288))(param_1,&local_98);
      FUN_00414ad0(lVar2 + 0x88,local_98);
      *(undefined1 *)(lVar2 + 0x84) = 0;
      if ((*PTR_DAT_020052b8 == '\0') || (cVar3 == '\0')) {
        FUN_0145e590();
        uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
        FUN_0145ef50(0,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
        FUN_0145ef50(1,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
      }
      else {
        FUN_0145f1a0(L"TR result:",local_a8);
      }
    }
  }
  else if (uVar6 < 0x66) {
    if (uVar6 == 0x65) {
      FUN_0145e590();
      uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
      iVar7 = (**(code **)(*param_1 + 0x210))(param_1,0);
      iVar8 = (**(code **)(*param_1 + 0x210))(param_1,1);
      if (iVar7 != iVar8) {
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x80) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x81) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x82) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x83) = uVar4;
        (**(code **)(*param_1 + 0x288))(param_1,&local_50);
        FUN_00414ad0(lVar2 + 0x88,local_50);
        *(undefined1 *)(lVar2 + 0x84) = 1;
        FUN_0145f1a0(L"TR result (Ch1):",local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
      }
      iVar7 = (**(code **)(*param_1 + 0x210))(param_1,2);
      iVar8 = (**(code **)(*param_1 + 0x210))(param_1,3);
      if (iVar7 != iVar8) {
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,2);
        *(undefined1 *)(lVar2 + 0x80) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,2);
        *(undefined1 *)(lVar2 + 0x81) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x82) = uVar4;
        uVar4 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x83) = uVar4;
        (**(code **)(*param_1 + 0x288))(param_1,&local_58);
        FUN_00414ad0(lVar2 + 0x88,local_58);
        *(undefined1 *)(lVar2 + 0x84) = 1;
        FUN_0145f1a0(L"TR result (Ch2):",local_a8);
      }
      FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
    }
    else if (uVar6 == 0x3e) {
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
      *(undefined1 *)(lVar2 + 0x70) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
      *(undefined1 *)(lVar2 + 0x71) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
      *(undefined1 *)(lVar2 + 0x72) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
      *(undefined1 *)(lVar2 + 0x73) = uVar5;
      *(undefined1 *)(lVar2 + 0x74) = 1;
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,2);
      *(undefined1 *)(lVar2 + 0x80) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,2);
      *(undefined1 *)(lVar2 + 0x81) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x210))(param_1,3);
      *(undefined1 *)(lVar2 + 0x82) = uVar5;
      uVar5 = (**(code **)(*param_1 + 0x220))(param_1,3);
      *(undefined1 *)(lVar2 + 0x83) = uVar5;
      (**(code **)(*param_1 + 0x288))(param_1,&local_60);
      FUN_00414ad0(lVar2 + 0x88,local_60);
      *(undefined1 *)(lVar2 + 0x84) = 1;
      FUN_0145e590();
      uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
      FUN_0145e790(0,local_a8);
      FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
      FUN_0145e790(1,local_a8);
      FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
    }
    else if (uVar6 == 0x3f) {
      pbVar9 = (byte *)FUN_01cfde70(param_1,2,0,local_29,&local_2a,&local_2b);
      bVar1 = *pbVar9;
      if (bVar1 < 2) {
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x80) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x81) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x82) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x83) = uVar5;
        (**(code **)(*param_1 + 0x288))(param_1,&local_70);
        FUN_00414ad0(lVar2 + 0x88,local_70);
        *(undefined1 *)(lVar2 + 0x84) = 1;
      }
      else if (bVar1 == 2) {
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x80) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x81) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x82) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x83) = uVar5;
        (**(code **)(*param_1 + 0x288))(param_1,&local_78);
        FUN_00414ad0(lVar2 + 0x88,local_78);
        *(undefined1 *)(lVar2 + 0x84) = 1;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x70) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x71) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
        *(undefined1 *)(lVar2 + 0x72) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
        *(undefined1 *)(lVar2 + 0x73) = uVar5;
        *(undefined1 *)(lVar2 + 0x74) = 0;
        *(undefined1 *)(lVar2 + 0xb1) = 1;
      }
      else if ((byte)(bVar1 - 3) < 2) {
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,2);
        *(undefined1 *)(lVar2 + 0x80) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,2);
        *(undefined1 *)(lVar2 + 0x81) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
        *(undefined1 *)(lVar2 + 0x82) = uVar5;
        uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
        *(undefined1 *)(lVar2 + 0x83) = uVar5;
        (**(code **)(*param_1 + 0x288))(param_1,&local_80);
        FUN_00414ad0(lVar2 + 0x88,local_80);
        *(undefined1 *)(lVar2 + 0x84) = 0;
      }
      pbVar9 = (byte *)FUN_01cfde70(param_1,2,0,local_29,&local_2a,&local_2b);
      bVar1 = *pbVar9;
      if (bVar1 < 3) {
        if (bVar1 == 2) {
          FUN_0145e590();
          uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
          FUN_0145e790(0,local_a8);
          FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
          FUN_0145e790(1,local_a8);
          FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
        }
        else {
          if (bVar1 == 0) goto LAB_0146028b;
          if (bVar1 == 1) goto LAB_01460361;
        }
      }
      else if (bVar1 == 3) {
LAB_0146028b:
        FUN_0145e590();
        uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
        FUN_0145ef50(0,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
        FUN_0145ef50(1,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
      }
      else if (bVar1 == 4) {
LAB_01460361:
        FUN_0145e590();
        uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
        FUN_0145ecb0(0,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
        FUN_0145ecb0(1,local_a8);
        FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
      }
    }
    else if (uVar6 == 0x62) goto LAB_01460714;
  }
  else if (uVar6 == 0x66) {
    uVar5 = (**(code **)(*param_1 + 0x210))(param_1,2);
    *(undefined1 *)(lVar2 + 0x70) = uVar5;
    uVar5 = (**(code **)(*param_1 + 0x220))(param_1,2);
    *(undefined1 *)(lVar2 + 0x71) = uVar5;
    uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
    *(undefined1 *)(lVar2 + 0x72) = uVar5;
    uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
    *(undefined1 *)(lVar2 + 0x73) = uVar5;
    *(undefined1 *)(lVar2 + 0x74) = 1;
    uVar5 = (**(code **)(*param_1 + 0x210))(param_1,1);
    *(undefined1 *)(lVar2 + 0x80) = uVar5;
    uVar5 = (**(code **)(*param_1 + 0x220))(param_1,1);
    *(undefined1 *)(lVar2 + 0x81) = uVar5;
    uVar5 = (**(code **)(*param_1 + 0x210))(param_1,0);
    *(undefined1 *)(lVar2 + 0x82) = uVar5;
    uVar5 = (**(code **)(*param_1 + 0x220))(param_1,0);
    *(undefined1 *)(lVar2 + 0x83) = uVar5;
    (**(code **)(*param_1 + 0x288))(param_1,&local_68);
    FUN_00414ad0(lVar2 + 0x88,local_68);
    *(undefined1 *)(lVar2 + 0x84) = 1;
    FUN_0145e590();
    uVar5 = *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8) + 0x80);
    FUN_0145e790(0,local_a8);
    FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),1);
    FUN_0145e790(1,local_a8);
    FUN_007e2d20(*(undefined8 *)(*(longlong *)PTR_DAT_02005ba8 + 0x7e8),uVar5);
  }
  else if (uVar6 == 0x77) goto LAB_014603cc;
  *(undefined1 *)(lVar2 + 0xe32) = 0;
LAB_01460881:
  FUN_00414560(&local_a0,0xd);
  return;
}

