/* Ghidra address: 0072c9a0 */
/* Ghidra symbol: FUN_0072c9a0 */


longlong * FUN_0072c9a0(longlong param_1,byte param_2,ushort param_3,byte param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  code *pcVar16;
  uint uVar17;
  undefined **ppuVar18;
  undefined4 *puVar19;
  bool bVar20;
  int local_b4;
  int local_9c;
  byte local_92;
  undefined **local_90;
  byte local_81;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_40 [2];
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_58 = 0;
  plVar10 = (longlong *)FUN_0072c160(&PTR_FUN_0072bd98,1,*(undefined8 *)PTR_DAT_02004030,0);
  if (param_2 == 4) {
    (**(code **)(*plVar10 + 0x50))(plVar10,L"MessageForm_Custom");
  }
  else {
    FUN_0041ddd0(&local_58,(&PTR_PTR_01e06828)[param_2]);
    FUN_00416ba0(local_50,L"MessageForm_",local_58);
    (**(code **)(*plVar10 + 0x50))(plVar10,local_50[0]);
  }
  (**(code **)(*(longlong *)plVar10[0x17] + 0x10))
            ((longlong *)plVar10[0x17],*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x118));
  lVar15 = plVar10[0x17];
  uVar2 = (**(code **)(*plVar10 + 0x98))(plVar10);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar15 + 0x18) + 0x28),uVar2,
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  FUN_005fcc80(plVar10[0x17],uVar2);
  (**(code **)(*plVar10 + 0x140))(plVar10,*(undefined1 *)(*(longlong *)PTR_DAT_02004030 + 0x79));
  FUN_007ff680(plVar10,3);
  uVar11 = FUN_007ffbe0(plVar10);
  FUN_005ff880(uVar11,plVar10[0x17]);
  *(undefined1 *)((longlong)plVar10 + 0x4d4) = 1;
  FUN_008004a0(plVar10,1);
  FUN_00800470(plVar10,0);
  plVar10[0x7e] = (longlong)plVar10;
  plVar10[0x7d] = (longlong)FUN_0072c2d0;
  uVar11 = FUN_007ffbe0(plVar10);
  uVar12 = FUN_0072bc40(uVar11);
  local_30 = uVar12;
  iVar3 = thunk_FUN_03f3ed25(8,uVar12 & 0xffffffff,4);
  iVar4 = thunk_FUN_03f3ed25(8,local_30._4_4_,8);
  iVar5 = thunk_FUN_03f3ed25(10,uVar12 & 0xffffffff,4);
  iVar6 = thunk_FUN_03f3ed25(10,local_30._4_4_,8);
  uVar12 = uVar12 & 0xffffffff;
  local_b4 = thunk_FUN_03f3ed25(0x32,uVar12,4);
  local_92 = 0;
  local_90 = (undefined **)&DAT_020124e8;
  ppuVar18 = &PTR_PTR_01e06878;
  do {
    if (local_92 < 0x10) {
      uVar17 = (int)CONCAT62((int6)(uVar12 >> 0x10),1) << (local_92 & 0x1f);
      uVar12 = (ulonglong)uVar17;
      bVar20 = ((ushort)uVar17 & param_3) != 0;
    }
    else {
      bVar20 = false;
    }
    if (bVar20) {
      if (*(int *)local_90 == 0) {
        FUN_004238d0(local_40,0,0,0,0);
        uVar11 = FUN_007ffbe0(plVar10);
        uVar11 = FUN_005ffa40(uVar11);
        FUN_0041ddd0(&local_60,*ppuVar18);
        uVar12 = FUN_00416740(local_60);
        FUN_00652100(plVar10);
        thunk_FUN_041a24be(uVar11);
        *(int *)local_90 = (local_38 - local_40[0]) + 8;
      }
      if (local_b4 < *(int *)local_90) {
        local_b4 = *(int *)local_90;
      }
    }
    local_92 = local_92 + 1;
    ppuVar18 = ppuVar18 + 1;
    local_90 = (undefined **)((longlong)local_90 + 4);
  } while (local_92 != 0xc);
  iVar7 = thunk_FUN_03f3ed25(0xe,local_30._4_4_,8);
  iVar8 = thunk_FUN_03f3ed25(4,local_30 & 0xffffffff,4);
  iVar9 = FUN_00807f90(*(undefined8 *)PTR_DAT_02005950);
  thunk_FUN_0415f13b(local_40,0,0,(longlong)iVar9 / 2 & 0xffffffff,0);
  uVar11 = FUN_007ffbe0(plVar10);
  uVar11 = FUN_005ffa40(uVar11);
  iVar9 = 0;
  if (param_1 != 0) {
    iVar9 = *(int *)(param_1 + -4);
  }
  uVar17 = FUN_00652100(plVar10);
  uVar12 = FUN_00416740(param_1);
  thunk_FUN_041a24be(uVar11,uVar12,iVar9 + 1,local_40,uVar17 | 0x450);
  lVar15 = *(longlong *)(&DAT_01e06850 + (ulonglong)param_2 * 8);
  local_9c = local_34;
  iVar9 = local_38;
  if ((lVar15 != 0) && (iVar9 = local_38 + iVar5 + 0x20, local_34 < 0x20)) {
    local_9c = 0x20;
  }
  iVar5 = 0;
  local_92 = 0;
  do {
    if (local_92 < 0x10) {
      uVar17 = (int)CONCAT62((int6)(uVar12 >> 0x10),1) << (local_92 & 0x1f);
      uVar12 = (ulonglong)uVar17;
      bVar20 = ((ushort)uVar17 & param_3) != 0;
    }
    else {
      bVar20 = false;
    }
    if (bVar20) {
      iVar5 = iVar5 + 1;
    }
    local_92 = local_92 + 1;
  } while (local_92 != 0xc);
  local_80 = 0;
  if (iVar5 != 0) {
    local_80 = local_b4 * iVar5 + iVar8 * (iVar5 + -1);
  }
  iVar5 = local_80;
  if (local_80 < iVar9) {
    iVar5 = iVar9;
  }
  FUN_007fded0(plVar10,iVar5 + iVar3 * 2);
  FUN_007fdf10(plVar10,local_9c + iVar7 + iVar6 + iVar4 * 2);
  iVar5 = FUN_00807f90(*(undefined8 *)PTR_DAT_02005950);
  FUN_00806af0(plVar10,iVar5 / 2 - (int)plVar10[0x13] / 2);
  iVar5 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
  FUN_00806b40(plVar10,iVar5 / 2 - *(int *)((longlong)plVar10 + 0x9c) / 2);
  if (param_2 == 4) {
    FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_70);
    FUN_0064de00(plVar10,local_70);
  }
  else {
    FUN_0041ddd0(&local_68,(&PTR_PTR_01e06828)[param_2]);
    FUN_0064de00(plVar10,local_68);
  }
  if (lVar15 != 0) {
    plVar13 = (longlong *)FUN_007416c0(&PTR_FUN_00732068,1,plVar10);
    (**(code **)(*plVar13 + 0x50))(plVar13,L"Image");
    (**(code **)(*plVar13 + 0x130))(plVar13,plVar10);
    uVar11 = FUN_00603c90(plVar13[99]);
    uVar14 = thunk_FUN_03ccce41(0,lVar15);
    FUN_0060d3b0(uVar11,uVar14);
    (**(code **)(*plVar13 + 0x118))(plVar13,1);
    (**(code **)(*plVar13 + 400))(plVar13,iVar3,iVar4,0x20,0x20);
  }
  lVar15 = FUN_0067eb90(&PTR_FUN_00669e80,1,plVar10);
  plVar10[0xd6] = lVar15;
  plVar13 = (longlong *)plVar10[0xd6];
  (**(code **)(*plVar13 + 0x50))(plVar13,L"Message");
  (**(code **)(*plVar13 + 0x130))(plVar13,plVar10);
  FUN_0067fec0(plVar13,1);
  FUN_0064de00(plVar13,param_1);
  FUN_0064d040(plVar13,local_40);
  (**(code **)(*plVar13 + 0x140))(plVar13,*(undefined1 *)((longlong)plVar10 + 0xb1));
  iVar3 = (iVar9 - local_38) + iVar3;
  pcVar16 = (code *)FUN_00411550(plVar13,0xffc5);
  cVar1 = (*pcVar16)(plVar13);
  if (cVar1 != '\0') {
    iVar5 = FUN_0064d0b0(plVar10);
    iVar3 = (iVar5 - iVar3) - (int)plVar13[0x13];
  }
  (**(code **)(*plVar13 + 400))(plVar13,iVar3,iVar4,local_38,local_34);
  if ((param_3 & 8) == 0) {
    if ((param_3 & 2) == 0) {
      local_81 = 2;
    }
    else {
      local_81 = 1;
    }
  }
  else {
    local_81 = 3;
  }
  iVar5 = FUN_0064d0b0(plVar10);
  local_7c = (iVar5 - local_80) / 2;
  uVar12 = (longlong)(iVar5 - local_80) % 2 & 0xffffffff;
  local_92 = 0;
  ppuVar18 = &PTR_DAT_01e068d8;
  local_90 = &PTR_PTR_01e06878;
  puVar19 = &DAT_01e06938;
  do {
    if (local_92 < 0x10) {
      uVar17 = (int)CONCAT62((int6)(uVar12 >> 0x10),1) << (local_92 & 0x1f);
      uVar12 = (ulonglong)uVar17;
      bVar20 = ((ushort)uVar17 & param_3) != 0;
    }
    else {
      bVar20 = false;
    }
    if (bVar20) {
      plVar13 = (longlong *)FUN_00687cb0(&PTR_FUN_00673008,1,plVar10);
      (**(code **)(*plVar13 + 0x50))(plVar13,*ppuVar18);
      (**(code **)(*plVar13 + 0x130))(plVar13,plVar10);
      FUN_0041ddd0(&local_78,*local_90);
      FUN_0064de00(plVar13,local_78);
      *(undefined4 *)(plVar13 + 0x9e) = *puVar19;
      if (local_92 == param_4) {
        FUN_00688430(plVar13,1);
        FUN_00801e40(plVar10,plVar13);
      }
      if (local_92 == local_81) {
        *(undefined1 *)((longlong)plVar13 + 0x499) = 1;
      }
      uVar12 = (ulonglong)local_7c;
      (**(code **)(*plVar13 + 400))(plVar13,uVar12,local_9c + iVar4 + iVar6,local_b4,iVar7);
      local_7c = local_7c + local_b4 + iVar8;
      if (local_92 == 10) {
        plVar13[0x40] = (longlong)plVar10;
        plVar13[0x3f] = (longlong)FUN_0072c2a0;
      }
    }
    local_92 = local_92 + 1;
    puVar19 = puVar19 + 1;
    local_90 = local_90 + 1;
    ppuVar18 = ppuVar18 + 1;
  } while (local_92 != 0xc);
  FUN_00414560(&local_78,6);
  return plVar10;
}

