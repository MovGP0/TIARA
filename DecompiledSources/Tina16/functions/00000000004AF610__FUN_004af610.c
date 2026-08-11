/* Ghidra address: 004af610 */
/* Ghidra symbol: FUN_004af610 */


void FUN_004af610(longlong *param_1,longlong param_2,byte param_3,longlong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  puVar1 = auStack_68;
  local_30 = param_2;
  if (param_4 != 0) {
    local_30 = param_4;
    FUN_004af610(param_1,param_2,0,0);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  if (param_3 < 4) {
    if (param_3 == 3) {
      local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      FUN_004aef40(local_20,*(undefined4 *)(local_30 + 0x10));
      iVar4 = *(int *)(local_30 + 0x10);
      local_24 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar3 = FUN_004aeac0(local_30,local_24);
          iVar2 = FUN_004aeba0(param_1,uVar3);
          if (iVar2 == -1) {
            uVar3 = FUN_004aeac0(local_30,local_24);
            FUN_004ae7e0(local_20,uVar3);
          }
          local_24 = local_24 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_24 = (int)param_1[2] + -1;
      if (-1 < local_24) {
        do {
          uVar3 = FUN_004aeac0(param_1,local_24);
          iVar4 = FUN_004aeba0(local_30,uVar3);
          if (iVar4 != -1) {
            FUN_004ae870(param_1,local_24);
          }
          local_24 = local_24 + -1;
        } while (local_24 != -1);
      }
      local_24 = (int)param_1[2] + *(int *)(local_20 + 0x10);
      if (*(int *)((longlong)param_1 + 0x14) < local_24) {
        FUN_004aef40(param_1,local_24);
      }
      iVar4 = *(int *)(local_20 + 0x10);
      local_24 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar3 = FUN_004aeac0(local_20,local_24);
          FUN_004ae7e0(param_1,uVar3);
          local_24 = local_24 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_00410f20(local_20);
    }
    else if (param_3 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
      FUN_004aef40(param_1,*(undefined4 *)(local_30 + 0x14));
      iVar4 = *(int *)(local_30 + 0x10);
      local_24 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar3 = FUN_004aeac0(local_30,local_24);
          FUN_004ae7e0(param_1,uVar3);
          local_24 = local_24 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (param_3 == 1) {
      local_24 = (int)param_1[2] + -1;
      if (-1 < local_24) {
        do {
          uVar3 = FUN_004aeac0(param_1,local_24);
          iVar4 = FUN_004aeba0(local_30,uVar3);
          if (iVar4 == -1) {
            FUN_004ae870(param_1,local_24);
          }
          local_24 = local_24 + -1;
        } while (local_24 != -1);
      }
    }
    else if (param_3 == 2) {
      iVar4 = *(int *)(local_30 + 0x10);
      local_24 = 0;
      if (-1 < iVar4 + -1) {
        do {
          uVar3 = FUN_004aeac0(local_30,local_24);
          iVar2 = FUN_004aeba0(param_1,uVar3);
          if (iVar2 == -1) {
            uVar3 = FUN_004aeac0(local_30,local_24);
            FUN_004ae7e0(param_1,uVar3);
          }
          local_24 = local_24 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  else if (param_3 == 4) {
    local_24 = (int)param_1[2] + -1;
    if (-1 < local_24) {
      do {
        uVar3 = FUN_004aeac0(param_1,local_24);
        iVar4 = FUN_004aeba0(local_30,uVar3);
        if (iVar4 != -1) {
          FUN_004ae870(param_1,local_24);
        }
        local_24 = local_24 + -1;
      } while (local_24 != -1);
    }
  }
  else if (param_3 == 5) {
    local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_004aef40(local_20,*(undefined4 *)(local_30 + 0x10));
    local_24 = *(int *)(local_30 + 0x10) + -1;
    if (-1 < local_24) {
      do {
        uVar3 = FUN_004aeac0(local_30,local_24);
        iVar4 = FUN_004aeba0(param_1,uVar3);
        if (iVar4 == -1) {
          uVar3 = FUN_004aeac0(local_30,local_24);
          FUN_004ae7e0(local_20,uVar3);
        }
        local_24 = local_24 + -1;
      } while (local_24 != -1);
    }
    FUN_004af610(param_1,local_20,0,0);
    FUN_00410f20(local_20);
  }
  return;
}

