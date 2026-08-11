/* Ghidra address: 00a27f20 */
/* Ghidra symbol: FUN_00a27f20 */


int FUN_00a27f20(undefined8 param_1,short *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c;
  longlong local_20;
  
  local_20 = 0;
  if (param_4 < 1) {
    if (param_4 < 0) {
      local_2c = 0;
      iVar1 = 0;
      if (param_3 != 0) {
        iVar1 = *(int *)(param_3 + -4);
      }
      iVar2 = 0;
      if (param_2 != (short *)0x0) {
        iVar2 = *(int *)(param_2 + -2);
      }
      iVar1 = (iVar1 - iVar2) + 1;
      local_30 = param_4;
      if (0 < iVar1) {
        do {
          if (*(short *)(param_3 + -2 + (longlong)iVar1 * 2) == *param_2) {
            uVar3 = 0;
            if (param_3 != 0) {
              uVar3 = *(undefined4 *)(param_3 + -4);
            }
            FUN_00416dc0(&local_20,param_3,iVar1,uVar3);
            iVar2 = FUN_004170c0(param_2,local_20,1);
            if ((iVar2 != 0) && (iVar2 + iVar1 != local_2c)) {
              local_2c = iVar2 + iVar1 + -1;
              local_30 = local_30 + 1;
              if (local_30 == 0) break;
            }
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if (local_30 != 0) {
        local_2c = 0;
      }
    }
    else {
      local_2c = 0;
    }
  }
  else {
    FUN_00414b50(&local_20,param_3);
    local_2c = 0;
    if (local_20 != 0) {
      local_2c = *(int *)(local_20 + -4);
    }
    if (0 < param_4) {
      do {
        iVar1 = FUN_004170c0(param_2,local_20,1);
        if (iVar1 < 1) {
          FUN_00414480(&local_20);
          local_2c = local_2c + 1;
        }
        else {
          uVar3 = 0;
          if (local_20 != 0) {
            uVar3 = *(undefined4 *)(local_20 + -4);
          }
          FUN_00416dc0(&local_20,local_20,iVar1 + 1,uVar3);
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    iVar1 = 0;
    if (local_20 != 0) {
      iVar1 = *(int *)(local_20 + -4);
    }
    local_2c = local_2c - iVar1;
  }
  FUN_00414480(&local_20);
  return local_2c;
}

