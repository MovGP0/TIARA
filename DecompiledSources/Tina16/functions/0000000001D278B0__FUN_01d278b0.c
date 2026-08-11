/* Ghidra address: 01d278b0 */
/* Ghidra symbol: FUN_01d278b0 */


void FUN_01d278b0(longlong param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_res10;
  int local_res20;
  undefined1 auStack_48 [40];
  
  if (param_2 == param_4) {
    if ((*(int *)(param_1 + 0x2020) <= param_2) && (param_2 <= *(int *)(param_1 + 0x2030))) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x1fb8) +
                      (longlong)(param_2 - *(int *)(param_1 + 0x2020)) * 0x18);
      if (param_3 < *piVar1) {
        *piVar1 = param_3;
      }
      if (piVar1[1] < param_3) {
        piVar1[1] = param_3;
      }
    }
  }
  else {
    local_res10 = param_2;
    local_res20 = param_4;
    if (param_4 < param_2) {
      local_res10 = param_4;
      local_res20 = param_2;
    }
    *(int *)(param_1 + 0x1fb4) = local_res10;
    *(int *)(param_1 + 0x1fb0) = local_res20;
    if (*(int *)(param_1 + 0x1fb4) < *(int *)(param_1 + 0x2020)) {
      *(undefined4 *)(param_1 + 0x1fb4) = *(undefined4 *)(param_1 + 0x2020);
    }
    if (*(int *)(param_1 + 0x2030) < *(int *)(param_1 + 0x1fb0)) {
      *(undefined4 *)(param_1 + 0x1fb0) = *(undefined4 *)(param_1 + 0x2030);
    }
    iVar2 = *(int *)(param_1 + 0x1fb4);
    if (iVar2 <= *(int *)(param_1 + 0x1fb0)) {
      iVar3 = (*(int *)(param_1 + 0x1fb0) - iVar2) + 1;
      do {
        if (iVar2 == *(int *)(param_1 + 0x1fb4)) {
          FUN_01d27840(auStack_48,
                       *(longlong *)(param_1 + 0x1fb8) +
                       (longlong)(iVar2 - *(int *)(param_1 + 0x2020)) * 0x18,(float)iVar2);
        }
        else {
          FUN_01d27840(auStack_48,
                       *(longlong *)(param_1 + 0x1fb8) +
                       (longlong)(iVar2 - *(int *)(param_1 + 0x2020)) * 0x18,(float)iVar2 - 0.5);
        }
        if (iVar2 == *(int *)(param_1 + 0x1fb0)) {
          if (*(int *)(param_1 + 0x1fb4) != *(int *)(param_1 + 0x1fb0)) {
            FUN_01d27840(auStack_48,
                         *(longlong *)(param_1 + 0x1fb8) +
                         (longlong)(iVar2 - *(int *)(param_1 + 0x2020)) * 0x18,(float)iVar2);
          }
        }
        else {
          FUN_01d27840(auStack_48,
                       *(longlong *)(param_1 + 0x1fb8) +
                       (longlong)(iVar2 - *(int *)(param_1 + 0x2020)) * 0x18,(float)iVar2 + 0.5);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

