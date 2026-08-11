/* Ghidra address: 00818770 */
/* Ghidra symbol: FUN_00818770 */


void FUN_00818770(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  int local_48;
  int local_44;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  lVar2 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 == 0) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  cVar5 = FUN_0065be20(lVar2);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FUN_0065be20(lVar1);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FUN_00818720(param_1);
  if (cVar5 != '\0') {
    uVar9 = FUN_0065b870(lVar1);
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 != 0) {
      uVar9 = FUN_0065b870(lVar1);
      thunk_FUN_03ab0e43(uVar9,0);
    }
    uVar9 = FUN_0065b870(lVar2);
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 != 0) {
      uVar9 = FUN_0065b870(lVar2);
      thunk_FUN_03ab0e43(uVar9,0);
    }
    uVar9 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 == 0) {
      return;
    }
    uVar9 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    thunk_FUN_03ab0e43(uVar9,0);
    return;
  }
  bVar4 = false;
  FUN_008194f0(param_1,&local_38);
  local_6c = 0x7fffffff;
  local_70 = 0x7fffffff;
  local_68 = -0x7fffffff;
  local_64 = -0x7fffffff;
  FUN_008199e0(param_1);
  iVar6 = FUN_007ff9d0();
  iVar12 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar9 = FUN_008199e0(param_1);
      lVar10 = FUN_007ffa40(uVar9,iVar12);
      if (*(char *)(lVar10 + 0xa9) != '\0') {
        uVar9 = FUN_008199e0(param_1);
        uVar9 = FUN_007ffa40(uVar9,iVar12);
        lVar10 = FUN_0065b870(uVar9);
        if (lVar10 != *(longlong *)(param_1 + 0x58)) {
          uVar9 = FUN_008199e0(param_1);
          uVar9 = FUN_007ffa40(uVar9,iVar12);
          uVar9 = FUN_0065b870(uVar9);
          thunk_FUN_03e49910(uVar9,&local_48);
          thunk_FUN_03e49910(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x698),&local_58);
          FUN_00423b50(&local_48,-local_58,-local_54);
          if (local_48 < local_6c) {
            local_6c = local_48;
          }
          if (local_44 < local_70) {
            local_70 = local_44;
          }
          iVar7 = FUN_004230a0(&local_48);
          if (local_68 < local_48 + iVar7) {
            local_68 = FUN_004230a0(&local_48);
            local_68 = local_48 + local_68;
          }
          iVar7 = FUN_004230c0(&local_48);
          if (local_64 < local_44 + iVar7) {
            local_64 = FUN_004230c0(&local_48);
            local_64 = local_44 + local_64;
          }
        }
      }
      iVar12 = iVar12 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((local_6c < 0) || (iVar6 = FUN_004230a0(&local_38), iVar6 < local_68)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if ((local_70 < 0) || (iVar6 = FUN_004230c0(&local_38), iVar6 < local_64)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((bVar3) && (!bVar11)) {
    if ((local_6c < 0) ||
       (iVar6 = FUN_004230a0(&local_38), iVar6 - *(int *)(lVar2 + 0x98) < local_68)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
  }
  if ((bVar11) && (!bVar3)) {
    if ((local_70 < 0) ||
       (iVar6 = FUN_004230c0(&local_38), iVar6 - *(int *)(lVar1 + 0x9c) < local_64)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  if (bVar11) {
    uVar9 = FUN_0065b870(lVar1);
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 != 0) goto LAB_00818b58;
    uVar9 = FUN_0065b870(lVar1);
    uVar8 = FUN_004230a0(&local_38);
    thunk_FUN_041cc6e2(uVar9,0,local_38,local_2c - *(int *)(lVar1 + 0x9c),uVar8,
                       *(undefined4 *)(lVar1 + 0x9c),0x40);
    uVar9 = FUN_0065b870(lVar1);
    thunk_FUN_03ab0e43(uVar9,5);
    bVar4 = true;
  }
  else {
LAB_00818b58:
    if (!bVar11) {
      uVar9 = FUN_0065b870(lVar1);
      iVar6 = thunk_FUN_0419e3da(uVar9);
      if (iVar6 != 0) {
        uVar9 = FUN_0065b870(lVar1);
        thunk_FUN_03ab0e43(uVar9,0);
        bVar4 = true;
      }
    }
  }
  if (bVar3) {
    uVar9 = FUN_0065b870(lVar2);
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 != 0) goto LAB_00818c63;
    if (bVar11) {
      uVar9 = FUN_0065b870(lVar2);
      iVar6 = *(int *)(lVar2 + 0x98);
      iVar12 = FUN_004230c0(&local_38);
      thunk_FUN_041cc6e2(uVar9,0,local_30 - iVar6,local_34,iVar6,iVar12 - *(int *)(lVar1 + 0x9c),
                         0x40);
    }
    else {
      uVar9 = FUN_0065b870(lVar2);
      iVar6 = *(int *)(lVar2 + 0x98);
      uVar8 = FUN_004230c0(&local_38);
      thunk_FUN_041cc6e2(uVar9,0,local_30 - iVar6,local_34,iVar6,uVar8,0x40);
    }
    uVar9 = FUN_0065b870(lVar2);
    thunk_FUN_03ab0e43(uVar9,5);
    bVar4 = true;
  }
  else {
LAB_00818c63:
    if (!bVar3) {
      uVar9 = FUN_0065b870(lVar2);
      iVar6 = thunk_FUN_0419e3da(uVar9);
      if (iVar6 != 0) {
        uVar9 = FUN_0065b870(lVar2);
        thunk_FUN_03ab0e43(uVar9,0);
        bVar4 = true;
      }
    }
  }
  iVar6 = FUN_004230a0(&local_38);
  iVar12 = FUN_004230c0(&local_38);
  FUN_00819200(param_1);
  uVar9 = FUN_0065b870(lVar1);
  iVar7 = thunk_FUN_0419e3da(uVar9);
  if (iVar7 != 0) {
    if (0 < local_6c) {
      local_6c = 0;
    }
    iVar7 = FUN_004230a0(&local_38);
    if (local_68 < iVar7) {
      local_68 = FUN_004230a0(&local_38);
    }
    if (param_2 != '\0') {
      *(undefined1 *)(param_1 + 0xd8) = 1;
      uVar9 = FUN_0065b870(lVar2);
      iVar7 = thunk_FUN_0419e3da(uVar9);
      if (iVar7 == 0) {
        FUN_0068e9b0(lVar1,iVar6);
      }
      else {
        FUN_0068e9b0(lVar1,iVar6 - *(int *)(lVar2 + 0x98));
      }
      FUN_0068e6f0(lVar1,-local_6c,0,(local_68 - local_6c) + -1);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(lVar1 + 0x494);
      *(undefined1 *)(param_1 + 0xd8) = 0;
    }
    *(undefined2 *)(lVar1 + 0x4aa) = *(undefined2 *)(lVar1 + 0x4a0);
  }
  uVar9 = FUN_0065b870(lVar2);
  iVar6 = thunk_FUN_0419e3da(uVar9);
  if (iVar6 != 0) {
    if (0 < local_70) {
      local_70 = 0;
    }
    iVar6 = FUN_004230c0(&local_38);
    if (local_64 < iVar6) {
      local_64 = FUN_004230c0(&local_38);
    }
    if (param_2 != '\0') {
      *(undefined1 *)(param_1 + 0xd9) = 1;
      uVar9 = FUN_0065b870(lVar1);
      iVar6 = thunk_FUN_0419e3da(uVar9);
      if (iVar6 == 0) {
        FUN_0068e9b0(lVar2,iVar12);
      }
      else {
        FUN_0068e9b0(lVar2,iVar12 - *(int *)(lVar1 + 0x9c));
      }
      FUN_0068e6f0(lVar2,-local_70,0,(local_64 - local_70) + -1);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(lVar2 + 0x494);
      *(undefined1 *)(param_1 + 0xd9) = 0;
    }
    *(undefined2 *)(lVar2 + 0x4aa) = *(undefined2 *)(lVar2 + 0x4a0);
  }
  uVar9 = FUN_0065b870(lVar1);
  iVar6 = thunk_FUN_0419e3da(uVar9);
  if (iVar6 == 0) {
    uVar9 = FUN_0065b870(lVar2);
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 == 0) {
      bVar4 = false;
    }
  }
  uVar9 = FUN_0065b870(lVar1);
  iVar6 = thunk_FUN_0419e3da(uVar9);
  if (iVar6 != 0) {
    uVar9 = FUN_0065b870(lVar2);
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 != 0) {
      uVar9 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
      iVar6 = thunk_FUN_0419e3da(uVar9);
      if (iVar6 == 0) {
        uVar9 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
        thunk_FUN_041cc6e2(uVar9,0,local_30 - *(int *)(lVar2 + 0x98),
                           local_2c - *(int *)(lVar1 + 0x9c),*(int *)(lVar2 + 0x98),
                           *(int *)(lVar1 + 0x9c),0x40);
        uVar9 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
        thunk_FUN_03ab0e43(uVar9,5);
        goto LAB_00818fbe;
      }
    }
  }
  uVar9 = FUN_0065b870(lVar1);
  iVar6 = thunk_FUN_0419e3da(uVar9);
  if (iVar6 != 0) {
    uVar9 = FUN_0065b870(lVar2);
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 != 0) goto LAB_00818fbe;
    uVar9 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
    iVar6 = thunk_FUN_0419e3da(uVar9);
    if (iVar6 == 0) goto LAB_00818fbe;
  }
  uVar9 = FUN_0065b870(*(undefined8 *)(param_1 + 0xd0));
  thunk_FUN_03ab0e43(uVar9,0);
LAB_00818fbe:
  if (bVar4) {
    FUN_00818770(param_1,param_2);
  }
  return;
}

