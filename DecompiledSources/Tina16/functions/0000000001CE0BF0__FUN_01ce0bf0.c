/* Ghidra address: 01ce0bf0 */
/* Ghidra symbol: FUN_01ce0bf0 */


void FUN_01ce0bf0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,longlong *param_6)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int local_44;
  int local_40;
  int local_3c;
  int local_34;
  int local_2c;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_005fd6d0(param_6[0xf],2);
      uVar6 = FUN_01a90ee0(0x808080);
      FUN_005fd4e0(param_6[0xf],uVar6);
      FUN_005fd640(param_6[0xf],0xe);
      FUN_005fdcb0(param_6[0x10],1);
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),0);
      local_44 = *(int *)(lVar8 + 0xe8);
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),0);
      local_40 = *(int *)(lVar8 + 0xec);
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x94));
      local_3c = *(int *)(lVar8 + 0xe8);
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x94));
      local_2c = *(int *)(lVar8 + 0xec);
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
      local_34 = 1;
      if (0 < iVar7) {
        do {
          iVar10 = local_34 + -1;
          lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                            (*(longlong **)(param_1 + 0x70),iVar10);
          iVar11 = local_40;
          if (*(char *)(lVar8 + 0x10) != '\0') {
            lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                              (*(longlong **)(param_1 + 0x70),iVar10);
            iVar11 = *(int *)(lVar8 + 0xe8);
            if (local_44 < *(int *)(lVar8 + 0xe8)) {
              iVar11 = local_44;
            }
            lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                              (*(longlong **)(param_1 + 0x70),iVar10);
            local_44 = iVar11;
            iVar11 = *(int *)(lVar8 + 0xec);
            if (*(int *)(lVar8 + 0xec) < local_40) {
              iVar11 = local_40;
            }
          }
          local_40 = iVar11;
          local_34 = local_34 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_34 = *(int *)(param_1 + 0x94);
      iVar10 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x98) + -1;
      iVar11 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78))
      ;
      iVar7 = iVar11 + -1;
      if (iVar10 < iVar11 + -1) {
        iVar7 = iVar10;
      }
      if (local_34 <= iVar7) {
        iVar7 = (iVar7 - local_34) + 1;
        do {
          lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),local_34);
          iVar11 = *(int *)(lVar8 + 0xe8);
          if (*(int *)(lVar8 + 0xe8) < local_3c) {
            iVar11 = local_3c;
          }
          lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),local_34);
          iVar10 = *(int *)(lVar8 + 0xec);
          if (local_2c < *(int *)(lVar8 + 0xec)) {
            iVar10 = local_2c;
          }
          local_34 = local_34 + 1;
          iVar7 = iVar7 + -1;
          local_3c = iVar11;
          local_2c = iVar10;
        } while (iVar7 != 0);
      }
      (**(code **)(*param_6 + 0xf8))(param_6,param_2,local_2c,param_4,local_3c);
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
      local_34 = 1;
      if (iVar7 < 1) {
        return;
      }
      do {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),local_34 + -1);
        lVar8 = FUN_004113f0(uVar9,&DAT_01ccbf00);
        if (*(char *)(lVar8 + 0x10) != '\0') {
          FUN_01cd2d70(lVar8,param_2,param_4,param_6);
        }
        local_34 = local_34 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return;
    }
    if (5 < (byte)(cVar1 - 2U)) {
      return;
    }
  }
  FUN_005fd6d0(param_6[0xf],2);
  uVar6 = FUN_01a90ee0(0x808080);
  FUN_005fd4e0(param_6[0xf],uVar6);
  FUN_005fd640(param_6[0xf],0xe);
  FUN_005fdcb0(param_6[0x10],1);
  bVar4 = false;
  bVar2 = false;
  bVar3 = false;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  local_34 = 1;
  if (0 < iVar7) {
    do {
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),local_34 + -1);
      if (*(char *)(lVar8 + 0x10) != '\0') {
        bVar4 = true;
      }
      local_34 = local_34 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
  local_44 = *(int *)(lVar8 + 0xe8);
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
  local_40 = *(int *)(lVar8 + 0xec);
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))(*(longlong **)(param_1 + 0x78),0);
  local_3c = *(int *)(lVar8 + 0xe8);
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))(*(longlong **)(param_1 + 0x78),0);
  local_2c = *(int *)(lVar8 + 0xec);
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  local_34 = 1;
  if (0 < iVar7) {
    do {
      iVar10 = local_34 + -1;
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar10);
      iVar11 = local_40;
      if (*(char *)(lVar8 + 0x10) != '\0') {
        bVar4 = true;
        bVar2 = true;
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),iVar10);
        iVar11 = *(int *)(lVar8 + 0xe8);
        if (local_44 < *(int *)(lVar8 + 0xe8)) {
          iVar11 = local_44;
        }
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),iVar10);
        local_44 = iVar11;
        iVar11 = *(int *)(lVar8 + 0xec);
        if (*(int *)(lVar8 + 0xec) < local_40) {
          iVar11 = local_40;
        }
      }
      local_40 = iVar11;
      local_34 = local_34 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  local_34 = 1;
  bVar5 = false;
  if (0 < iVar7) {
    do {
      bVar3 = bVar5;
      iVar11 = local_34 + -1;
      lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar11);
      if (*(char *)(lVar8 + 0x10) != '\0') {
        bVar4 = true;
        bVar3 = true;
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar11);
        iVar10 = *(int *)(lVar8 + 0xe8);
        if (*(int *)(lVar8 + 0xe8) < local_3c) {
          iVar10 = local_3c;
        }
        lVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar11);
        local_2c = *(int *)(lVar8 + 0xec);
        local_3c = iVar10;
        if (local_40 < local_2c) {
          local_2c = local_40;
        }
      }
      local_34 = local_34 + 1;
      iVar7 = iVar7 + -1;
      bVar5 = bVar3;
    } while (iVar7 != 0);
  }
  if (bVar4) {
    if ((bool)(bVar3 & bVar2)) {
      (**(code **)(*param_6 + 0xf8))(param_6,param_2,param_3,param_4,param_5);
    }
    else if ((!bVar2) || (bVar3)) {
      if ((bool)(bVar3 & !bVar2)) {
        (**(code **)(*param_6 + 0xf8))(param_6,local_44,param_3,local_40,param_5);
      }
    }
    else {
      (**(code **)(*param_6 + 0xf8))(param_6,param_2,local_2c,param_4,local_3c);
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    local_34 = 1;
    if (0 < iVar7) {
      do {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),local_34 + -1);
        lVar8 = FUN_004113f0(uVar9,&DAT_01ccbf00);
        if (*(char *)(lVar8 + 0x10) != '\0') {
          FUN_01cd2d70(lVar8,param_2,param_4,param_6);
        }
        local_34 = local_34 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    local_34 = 1;
    if (0 < iVar7) {
      do {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),local_34 + -1);
        lVar8 = FUN_004113f0(uVar9,&DAT_01ccbf00);
        if (*(char *)(lVar8 + 0x10) != '\0') {
          FUN_01cd2d70(lVar8,param_3,param_5,param_6);
        }
        local_34 = local_34 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else {
    (**(code **)(*param_6 + 0xf8))(param_6,param_2,param_3,param_4,param_5);
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    local_34 = 1;
    if (0 < iVar7) {
      do {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),local_34 + -1);
        FUN_01cd2d70(uVar9,param_2,param_4,param_6);
        local_34 = local_34 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    local_34 = 1;
    if (0 < iVar7) {
      do {
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),local_34 + -1);
        FUN_01cd2d70(uVar9,param_3,param_5,param_6);
        local_34 = local_34 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

