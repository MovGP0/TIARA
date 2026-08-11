/* Ghidra address: 0140b070 */
/* Ghidra symbol: FUN_0140b070 */


void FUN_0140b070(char param_1,int param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                 undefined8 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_78 [39];
  char local_51;
  int local_50;
  int local_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = *param_3;
  local_38 = param_3[1];
  uVar2 = param_3[2];
  local_40._4_4_ = (uint)((ulonglong)uVar1 >> 0x20);
  uVar6 = local_40._4_4_;
  local_30._0_4_ = (int)uVar2;
  iVar7 = (int)local_30;
  local_30._4_4_ = (uint)((ulonglong)uVar2 >> 0x20);
  uVar10 = (uint)local_38;
  if ((local_30._4_4_ != 0) && (local_30._4_4_ < (uint)local_38)) {
    uVar10 = local_30._4_4_;
  }
  bVar11 = local_30._4_4_ == 0;
  uVar4 = local_30._4_4_;
  local_51 = param_1;
  local_50 = param_2;
  local_40 = uVar1;
  local_30 = uVar2;
  if (bVar11) {
    uVar4 = FUN_0140af50(param_5,param_7,0);
  }
  uVar9 = (ulonglong)uVar4;
  if (uVar4 < 0x10000) {
    uVar9 = 0x10000;
  }
  if ((int)local_40 < 5) {
    if ((int)local_40 == 4) {
      if (local_51 != '\0') {
        local_50 = FUN_0140a660(1,param_5);
      }
      FUN_0140b020(uVar6,local_50,param_4,param_8);
      if (uVar6 <= uVar10 - 1) {
        iVar7 = ((uVar10 - 1) - uVar6) + 1;
        do {
          uVar5 = FUN_0140b040(auStack_78,uVar6);
          local_4c = FUN_0140a5e0(uVar5,param_5);
          FUN_0140b020(uVar6 + 1,local_4c,param_4,param_8);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if ((int)local_40 == 0) {
      local_50 = 0;
      FUN_0140b020(uVar6,0,param_4,param_8);
      local_4c = local_50;
      if (uVar6 <= uVar10) {
        iVar7 = (uVar10 - uVar6) + 1;
        do {
          FUN_0140b020(uVar6,local_4c,param_4,param_8);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if ((int)local_40 == 1) {
      FUN_0140b020(uVar6,local_50,param_4,param_8);
      local_4c = local_50;
      if (uVar6 <= uVar10) {
        iVar7 = (uVar10 - uVar6) + 1;
        do {
          FUN_0140b020(uVar6,local_4c,param_4,param_8);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if ((int)local_40 == 2) {
      if (local_51 != '\0') {
        local_50 = 1;
      }
      FUN_0140b020(uVar6,local_50,param_4,param_8);
      if (uVar6 <= uVar10 - 1) {
        iVar7 = ((uVar10 - 1) - uVar6) + 1;
        do {
          uVar5 = FUN_0140b040(auStack_78,uVar6);
          local_4c = FUN_0140a5e0(uVar5,param_5);
          FUN_0140b020(uVar6 + 1,local_4c,param_4,param_8);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if ((int)local_40 == 3) {
      if (local_51 != '\0') {
        local_50 = FUN_0140a5b0(param_5 + -1);
      }
      FUN_0140b020(uVar6,local_50,param_4,param_8);
      if (uVar6 <= uVar10 - 1) {
        iVar7 = ((uVar10 - 1) - uVar6) + 1;
        do {
          uVar5 = FUN_0140b040(auStack_78,uVar6);
          local_4c = FUN_0140a620(uVar5,param_5);
          FUN_0140b020(uVar6 + 1,local_4c,param_4,param_8);
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  else if ((int)local_40 == 5) {
    if (local_51 != '\0') {
      uVar5 = FUN_0140a5b0(param_5 + -1);
      local_50 = FUN_0140a660(uVar5,param_5);
    }
    FUN_0140b020(uVar6,local_50,param_4,param_8);
    if (uVar6 <= uVar10 - 1) {
      iVar7 = ((uVar10 - 1) - uVar6) + 1;
      do {
        uVar5 = FUN_0140b040(auStack_78,uVar6);
        local_4c = FUN_0140a620(uVar5,param_5);
        FUN_0140b020(uVar6 + 1,local_4c,param_4,param_8);
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if ((int)local_40 == 6) {
    if (local_51 != '\0') {
      local_50 = 0;
    }
    FUN_0140b020(uVar6,local_50,param_4,param_8);
    local_4c = local_50;
    uVar6 = uVar6 + 1;
    if (uVar6 <= uVar10) {
      iVar8 = (uVar10 - uVar6) + 1;
      do {
        uVar3 = (ulonglong)(uint)(local_4c + iVar7) % uVar9;
        local_4c = (int)uVar3;
        FUN_0140b020(uVar6,uVar3,param_4,param_8);
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if ((int)local_40 == 7) {
    if (local_51 != '\0') {
      local_50 = FUN_0140a5b0(param_5);
      local_50 = local_50 + -1;
    }
    FUN_0140b020(uVar6,local_50,param_4,param_8);
    local_4c = local_50;
    uVar6 = uVar6 + 1;
    if (uVar6 <= uVar10) {
      iVar8 = (uVar10 - uVar6) + 1;
      do {
        if (local_4c == 0) {
          local_4c = FUN_0140af50(param_5,param_7,0);
        }
        local_4c = local_4c - iVar7;
        FUN_0140b020(uVar6,local_4c,param_4,param_8);
        uVar6 = uVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

