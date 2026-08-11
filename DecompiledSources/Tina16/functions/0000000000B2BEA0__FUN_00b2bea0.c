/* Ghidra address: 00b2bea0 */
/* Ghidra symbol: FUN_00b2bea0 */


undefined1 FUN_00b2bea0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  ushort local_46;
  ushort local_44;
  ushort local_42;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  longlong *plVar8;
  
  local_60 = auStack_b8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = (undefined *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (undefined *)0x0;
  local_20 = 0;
  plVar8 = param_2;
  FUN_00414520(param_2);
  FUN_00414520(&local_30);
  FUN_00414520(&local_38);
  FUN_00414520(&local_40);
  local_42 = 0;
  local_44 = 0;
  local_46 = 0;
  if (*(byte *)(param_2 + 1) < 0x10) {
    uVar7 = (int)CONCAT62((int6)((ulonglong)plVar8 >> 0x10),1) << (*(byte *)(param_2 + 1) & 0x1f);
    plVar8 = (longlong *)(ulonglong)uVar7;
    bVar9 = (uVar7 & 0x140) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    iVar3 = FUN_00b28e10(param_1);
    if (iVar3 <= (int)(uint)*(ushort *)((longlong)param_2 + 9)) {
      uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
      FUN_004134c0(uVar4);
    }
    puVar5 = (ushort *)FUN_00b28df0(param_1,*(undefined2 *)((longlong)param_2 + 9));
    local_42 = *puVar5;
    lVar6 = FUN_00b28df0(param_1,*(undefined2 *)((longlong)param_2 + 9));
    local_44 = *(ushort *)(lVar6 + 2);
    plVar8 = (longlong *)(ulonglong)*(ushort *)((longlong)param_2 + 9);
    lVar6 = FUN_00b28df0(param_1,plVar8);
    local_46 = *(ushort *)(lVar6 + 4);
  }
  uVar1 = local_42;
  if (*(byte *)(param_2 + 1) < 0x10) {
    bVar9 = ((int)CONCAT62((int6)((ulonglong)plVar8 >> 0x10),1) << (*(byte *)(param_2 + 1) & 0x1f) &
            0x140U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    iVar3 = FUN_00b28de0(param_1);
    if (iVar3 <= (int)(uint)uVar1) {
      uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
      FUN_004134c0(uVar4);
    }
    lVar6 = FUN_00b28dc0(param_1,uVar1);
    FUN_00414be0(&local_30,*(undefined8 *)(lVar6 + 8));
  }
  if ((char)param_2[1] == '\a') {
    iVar3 = FUN_00b28660(*(undefined8 *)(param_1 + 0x18));
    if (iVar3 <= (int)(uint)*(ushort *)((longlong)param_2 + 0x15)) {
      uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
      FUN_004134c0(uVar4);
    }
    lVar6 = FUN_00b28440(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)((longlong)param_2 + 0x15));
    FUN_00414be0(&local_40,*(undefined8 *)(lVar6 + 8));
  }
  uVar1 = local_42;
  if ((char)param_2[1] == '\b') {
    uVar4 = FUN_00b28dc0(param_1,local_42);
    iVar3 = FUN_00b28660(uVar4);
    if (iVar3 <= (int)(uint)*(ushort *)((longlong)param_2 + 0x15)) {
      uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
      FUN_004134c0(uVar4);
    }
    uVar4 = FUN_00b28dc0(param_1,uVar1);
    lVar6 = FUN_00b28440(uVar4,*(undefined2 *)((longlong)param_2 + 0x15));
    FUN_00414be0(&local_40,*(undefined8 *)(lVar6 + 8));
  }
  uVar2 = local_42;
  uVar1 = local_44;
  if ((char)param_2[1] == '\x06') {
    uVar4 = FUN_00b28dc0(param_1,local_42);
    iVar3 = FUN_00b286f0(uVar4);
    if ((int)(uint)uVar1 < iVar3) {
      uVar4 = FUN_00b28dc0(param_1,uVar2);
      iVar3 = FUN_00b286f0(uVar4);
      if (iVar3 <= (int)(uint)local_46) goto LAB_00b2c1d7;
    }
    else {
LAB_00b2c1d7:
      uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
      FUN_004134c0(uVar4);
    }
    if (local_44 == local_46) {
      uVar4 = FUN_00b28dc0(param_1,uVar2);
      FUN_00b28670(uVar4,&local_38,uVar1);
    }
    else {
      uVar4 = FUN_00b28dc0(param_1,uVar2);
      FUN_00b28670(uVar4,&local_68,uVar1);
      uVar4 = FUN_00b28dc0(param_1,uVar2);
      FUN_00b28670(uVar4,&local_70,local_46);
      local_98 = local_70;
      FUN_00416310(&local_38,3,local_68,&DAT_00b2c598);
    }
  }
  iVar3 = FUN_00416420(local_30,0);
  if (iVar3 != 0) {
    FUN_00415f90(param_2,local_30);
  }
  iVar3 = FUN_00416420(local_38,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00416420(*param_2,0);
    if (iVar3 != 0) {
      local_50 = 0;
      if (*param_2 != 0) {
        local_50 = *(uint *)(*param_2 + -4) >> 1;
      }
      local_4c = local_50;
      while ((0 < (int)local_4c && (*(short *)(*param_2 + -2 + (longlong)(int)local_4c * 2) != 0x5c)
             )) {
        local_4c = local_4c - 1;
      }
      local_20 = 0;
      FUN_00416430(&local_78,*param_2,1,local_4c);
      FUN_00416020(&local_20,local_78,&DAT_00b2c5a0);
      local_54 = 0;
      if (*param_2 != 0) {
        local_54 = *(uint *)(*param_2 + -4) >> 1;
      }
      FUN_00416430(&local_80,*param_2,local_4c + 1,local_54);
      local_98 = &DAT_00b2c5a8;
      FUN_00416310(param_2,3,local_20,local_80);
      FUN_00414520(&local_20);
    }
    FUN_00415f90(param_2,local_38);
  }
  iVar3 = FUN_00416420(*param_2,0);
  if (iVar3 != 0) {
    local_98 = &DAT_00b2c5b0;
    FUN_00416310(param_2,3,&DAT_00b2c5b0,*param_2);
  }
  if ((char)param_2[1] == '\b') {
    iVar3 = FUN_00416420(*param_2,0);
    if (iVar3 != 0) {
      FUN_00415f90(param_2,&DAT_00b2c5b8);
    }
  }
  iVar3 = FUN_00416420(local_40,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00417170(&LAB_00b2c5c0,local_40,1);
    if (0 < iVar3) {
      FUN_00416430(&local_88,local_40,1,1);
      iVar3 = FUN_00416420(local_88,&DAT_00b2c5b0);
      if (iVar3 != 0) {
        local_98 = local_40;
        local_90 = &DAT_00b2c5b0;
        FUN_00416310(param_2,4,*param_2,&DAT_00b2c5b0);
        goto LAB_00b2c4fa;
      }
    }
    FUN_00415f90(param_2,local_40);
  }
LAB_00b2c4fa:
  local_21 = 1;
  FUN_004145c0(&local_88,5);
  FUN_004145c0(&local_40,3);
  return local_21;
}

