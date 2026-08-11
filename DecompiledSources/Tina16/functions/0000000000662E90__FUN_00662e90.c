/* Ghidra address: 00662e90 */
/* Ghidra symbol: FUN_00662e90 */


void FUN_00662e90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    FUN_0041ddd0(&local_20,PTR_PTR_02002ad8);
    FUN_0041ddd0(&local_28,PTR_PTR_02001818);
    FUN_00416ad0(&local_20,local_28);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20);
    FUN_004134c0(uVar5);
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    FUN_0041ddd0(&local_30,PTR_PTR_02002ad8);
    FUN_0041ddd0(&local_38,PTR_PTR_020046f0);
    FUN_00416ad0(&local_30,local_38);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30);
    FUN_004134c0(uVar5);
  }
  iVar3 = FUN_006605d0(*(undefined8 *)(param_2 + 0x28));
  if (iVar3 == 1) {
    lVar6 = *(longlong *)(param_1 + 0x90);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined1 *)(lVar6 + 0x20) = 0;
  }
  else if (iVar3 == 2) {
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(param_2 + 0x18);
    }
    if (*(longlong *)(lVar6 + 8) == 0) {
      if (*(longlong *)(param_2 + 0x28) == *(longlong *)(param_1 + 0x90)) {
        FUN_00660d40(lVar6,*(undefined4 *)(param_1 + 0x98));
        uVar4 = FUN_00660cd0(*(undefined8 *)(param_1 + 0x90));
        *(undefined4 *)(param_1 + 0x98) = uVar4;
        FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
        *(longlong *)(param_1 + 0x90) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        FUN_00663c60(param_1);
      }
      else {
        lVar1 = *(longlong *)(lVar6 + 0x10);
        if (lVar1 == 0) {
          *(undefined8 *)(*(longlong *)(lVar6 + 0x28) + 0x10) = 0;
          FUN_00410f20(lVar6);
        }
        else {
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30);
          *(longlong *)(lVar1 + 0x30) = lVar2;
          if (lVar2 == 0) {
            *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x28) + 0x10) = lVar1;
          }
          else {
            *(longlong *)(lVar2 + 0x18) = lVar1;
          }
          lVar1 = *(longlong *)(lVar6 + 0x10);
          *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28);
          lVar2 = *(longlong *)(lVar1 + 0x18);
          while (lVar2 != 0) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
            *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x28);
            lVar2 = *(longlong *)(lVar1 + 0x18);
          }
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18);
          *(longlong *)(lVar1 + 0x18) = lVar2;
          if (lVar2 != 0) {
            *(longlong *)(lVar2 + 0x30) = lVar1;
          }
          local_48 = FUN_00663cb0;
          local_40 = param_1;
          FUN_006612d0(param_1,*(undefined8 *)(lVar1 + 0x28),&local_48);
          FUN_00410f20(*(undefined8 *)(param_2 + 0x28));
          FUN_00410f20(lVar6);
        }
      }
    }
    else {
      lVar1 = *(longlong *)(param_2 + 0x28);
      if (lVar1 == *(longlong *)(param_1 + 0x90)) {
        *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x30) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        uVar4 = FUN_006606d0(*(undefined8 *)(param_1 + 0x90));
        *(undefined4 *)(lVar6 + 0x40) = uVar4;
        FUN_00660af0(lVar6);
      }
      else {
        *(undefined1 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar6 + 8);
        *(undefined8 *)(lVar1 + 0x10) = 0;
        FUN_00410f20(lVar6);
      }
      local_48 = FUN_00663cb0;
      local_40 = param_1;
      FUN_006612d0(param_1,*(undefined8 *)(param_2 + 0x28),&local_48);
    }
  }
  else {
    lVar6 = *(longlong *)(param_2 + 0x30);
    if (lVar6 == 0) {
      *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10) = *(undefined8 *)(param_2 + 0x18);
      lVar6 = *(longlong *)(param_2 + 0x18);
      *(undefined8 *)(lVar6 + 0x30) = 0;
      FUN_00660af0(lVar6);
    }
    else {
      *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      if (*(longlong *)(param_2 + 0x18) != 0) {
        *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) = lVar6;
      }
      uVar4 = FUN_00660cd0(param_2);
      FUN_00660d40(*(undefined8 *)(param_2 + 0x30),uVar4);
      FUN_00660af0(*(undefined8 *)(param_2 + 0x30));
    }
    local_48 = FUN_00663cb0;
    local_40 = param_1;
    FUN_006612d0(param_1,*(undefined8 *)(param_2 + 0x28),&local_48);
  }
  FUN_00410f20(param_2);
  FUN_00414560(&local_38,4);
  return;
}

