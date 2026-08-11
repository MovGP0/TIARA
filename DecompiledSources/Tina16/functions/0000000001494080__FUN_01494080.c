/* Ghidra address: 01494080 */
/* Ghidra symbol: FUN_01494080 */


void FUN_01494080(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
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
  longlong local_30;
  
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  *(int *)(param_1 + 0x90c) = *(int *)(param_1 + 0x9c);
  *(int *)(param_1 + 0x910) =
       (*(int *)(param_1 + 0x9c) - *(int *)(*(longlong *)(param_1 + 0x700) + 0x9c)) + -0xdc;
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(*(longlong *)(param_1 + 0x6b8) + 0x9c);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(*(longlong *)(param_1 + 0x6b0) + 0x9c);
  *(undefined4 *)(param_1 + 0x91c) = *(undefined4 *)(*(longlong *)(param_1 + 0x840) + 0x9c);
  FUN_0064cf60(param_1,0x4a9);
  *(undefined1 *)(*(longlong *)PTR_DAT_02004e40 + 0x1829) = 1;
  uVar9 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x8b8));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0xd0);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar9);
  FUN_0149aa00(param_1,0,0xffffff,0);
  uVar9 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  *(undefined8 *)(param_1 + 0xbc0) = uVar9;
  plVar1 = *(longlong **)(param_1 + 0xbc0);
  (**(code **)(*plVar1 + 0x50))(plVar1,L"OpenIPRDlg");
  FUN_00414ad0(plVar1 + 0x20,&DAT_01494c34);
  FUN_00414ad0(plVar1 + 0x1c,L"Interpreter file (*.IPR)|*.IPR");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80214;
  FUN_00416cd0(&local_70,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_68 = local_70;
  FUN_00416cd0(&local_78,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_60 = local_78;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_68,1);
  uVar9 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  *(undefined8 *)(param_1 + 0xbc8) = uVar9;
  plVar1 = *(longlong **)(param_1 + 0xbc8);
  (**(code **)(*plVar1 + 0x50))(plVar1,L"SaveIPRDlg");
  FUN_0177dd40(plVar1,&DAT_01494c34);
  FUN_00414ad0(plVar1 + 0x1c,L"Interpreter file (*.IPR)|*.IPR");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80116;
  FUN_00416cd0(&local_80,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_68 = local_80;
  FUN_00416cd0(&local_88,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_60 = local_88;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_68,1);
  FUN_0177d560(*(undefined8 *)(param_1 + 0xbc0),*(undefined8 *)PTR_DAT_020049a0);
  FUN_0177d560(*(undefined8 *)(param_1 + 0xbc8),*(undefined8 *)PTR_DAT_020049a0);
  uVar9 = *(undefined8 *)(param_1 + 0x700);
  uVar10 = FUN_00b89270();
  FUN_0041ddd0(&local_98,&PTR_PTR_014936c0);
  FUN_00b8e650(uVar10,&local_90,L"d.DesignTool_Txt_Parameter",local_98);
  FUN_0084e3e0(uVar9,0,0,local_90);
  uVar10 = FUN_00b89270();
  FUN_0041ddd0(&local_a8,&PTR_PTR_014936b0);
  FUN_00b8e650(uVar10,&local_a0,L"d.DesignTool_Txt_Value",local_a8);
  FUN_0084e3e0(uVar9,1,0,local_a0);
  uVar10 = FUN_00b89270();
  FUN_0041ddd0(&local_b8,&PTR_PTR_01493690);
  FUN_00b8e650(uVar10,&local_b0,L"d.DesignTool_Txt_Min",local_b8);
  FUN_0084e3e0(uVar9,2,0,local_b0);
  uVar10 = FUN_00b89270();
  FUN_0041ddd0(&local_c8,&PTR_PTR_014936a0);
  FUN_00b8e650(uVar10,&local_c0,L"d.DesignTool_Txt_Max",local_c8);
  FUN_0084e3e0(uVar9,3,0,local_c0);
  uVar10 = FUN_00b89270();
  FUN_0041ddd0(&local_d8,&PTR_PTR_014936d0);
  FUN_00b8e650(uVar10,&local_d0,L"d.DesignTool_Txt_Comment",local_d8);
  FUN_0084e3e0(uVar9,4,0,local_d0);
  *(undefined1 *)(param_1 + 0xba0) = 1;
  *(undefined1 *)(param_1 + 0x92a) = 0;
  *(undefined4 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x904) = 0;
  *(undefined1 *)(param_1 + 0xba1) = 0;
  *(undefined1 *)(param_1 + 0x929) = 1;
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4e0);
  *(undefined8 *)(param_1 + 0x930) = 0;
  uVar9 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x930) = uVar9;
  FUN_017e8080(uVar9,*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0x860));
  FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),1,0,0);
  uVar9 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 3000) = uVar9;
  uVar9 = FUN_019a4600();
  FUN_01497c60(param_1,uVar9);
  lVar11 = FUN_019a4600();
  *(undefined8 *)(param_1 + 0xbb0) = *(undefined8 *)(lVar11 + 0x208);
  uVar2 = FUN_013b9740(PTR_DAT_02004010);
  uVar3 = FUN_013b9680(*(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x20));
  *(uint *)(param_1 + 0xc08) = uVar2 | uVar3;
  uVar9 = FUN_004b6930(&PTR_FUN_00478280,1);
  lVar11 = *(longlong *)(param_1 + 0x930);
  FUN_010cd270(*(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x18),uVar9,lVar11 + 0x628,
               lVar11 + 0x630,lVar11 + 0x650);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b8) + 0x4e8);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar9);
  FUN_00410f20(uVar9);
  iVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8) + 0x28))();
  iVar12 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar12);
      iVar5 = FUN_004170c0(&DAT_01494e94,local_30,1);
      FUN_00416dc0(&local_38,local_30,1,iVar5 + -1);
      iVar5 = FUN_004170c0(&DAT_01494ea4,local_30,1);
      if (iVar5 < 1) {
        iVar5 = FUN_004170c0(&DAT_01494e94,local_30,1);
        uVar8 = 0;
        if (local_30 != 0) {
          uVar8 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416dc0(&local_40,local_30,iVar5 + 1,uVar8);
      }
      else {
        iVar5 = FUN_004170c0(&DAT_01494e94,local_30,1);
        iVar6 = FUN_004170c0(&DAT_01494ea4,local_30,1);
        iVar7 = FUN_004170c0(&DAT_01494e94,local_30,1);
        FUN_00416dc0(&local_40,local_30,iVar5 + 1,(iVar6 - iVar7) + -1);
      }
      iVar5 = FUN_004170c0(&DAT_01494ea4,local_30,1);
      if (iVar5 < 1) {
        FUN_00414b50(&local_48,L"<none>");
      }
      else {
        iVar5 = FUN_004170c0(&DAT_01494ea4,local_30,1);
        iVar6 = FUN_004170c0(&DAT_01494eb4,local_30,1);
        iVar7 = FUN_004170c0(&DAT_01494ea4,local_30,1);
        FUN_00416dc0(&local_48,local_30,iVar5 + 1,(iVar6 - iVar7) + -1);
      }
      iVar5 = FUN_004170c0(&DAT_01494ea4,local_30,1);
      if (iVar5 < 1) {
        FUN_00414b50(&local_50,L"<none>");
      }
      else {
        iVar5 = FUN_004170c0(&DAT_01494eb4,local_30,1);
        uVar8 = 0;
        if (local_30 != 0) {
          uVar8 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416dc0(&local_50,local_30,iVar5 + 1,uVar8);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 0x10);
      iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar12 < iVar5) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xbb0) + 0x10);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar12);
      }
      else {
        FUN_00414480(&local_58);
      }
      FUN_01495150(param_1,local_38,local_40,local_48,local_50,local_58);
      iVar12 = iVar12 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x920) = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),
               *(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x20));
  uVar9 = *(undefined8 *)(param_1 + 0x8b8);
  uVar10 = FUN_00e81400(&PTR_FUN_00e80d78,1,uVar9);
  FUN_00c0f7b0(uVar9,uVar10);
  uVar9 = FUN_01119b00(&PTR_FUN_01117868,1,param_1);
  *(undefined8 *)(param_1 + 0xbe8) = uVar9;
  uVar9 = FUN_0111c5c0(&PTR_FUN_0111ab88,1,param_1);
  *(undefined8 *)(param_1 + 0xbf0) = uVar9;
  uVar9 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xbe0) = uVar9;
  uVar9 = FUN_013b9a60(&DAT_013b8648,1,0,0,0);
  *(undefined8 *)(param_1 + 0xc00) = uVar9;
  *(undefined1 *)(param_1 + 0xc0c) = 0;
  if (*(char *)(param_1 + 0x92a) == '\0') {
    FUN_01498900(param_1,*(char *)(param_1 + 0x929) == '\0');
  }
  FUN_00414560(&local_d8,0xe);
  FUN_00414560(&local_58,6);
  return;
}

