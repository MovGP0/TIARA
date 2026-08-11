/* Ghidra address: 0044f610 */
/* Ghidra symbol: FUN_0044f610 */


int FUN_0044f610(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 local_20 [4];
  int local_1c [3];
  
  local_1c[0] = 0;
  if (0 < param_2) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + -4);
    }
    if ((iVar1 < param_2) && (param_2 = 0, param_1 != 0)) {
      param_2 = *(int *)(param_1 + -4);
    }
    FUN_0044f4c0(param_1,param_2,local_20,local_1c);
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + -4);
    }
    if (iVar1 * 2 < local_1c[0]) {
      local_1c[0] = 0;
      if (param_1 != 0) {
        local_1c[0] = *(int *)(param_1 + -4);
      }
      local_1c[0] = local_1c[0] * 2;
    }
  }
  return local_1c[0];
}

