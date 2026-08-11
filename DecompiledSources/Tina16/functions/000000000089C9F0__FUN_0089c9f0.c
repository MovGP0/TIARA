/* Ghidra address: 0089c9f0 */
/* Ghidra symbol: FUN_0089c9f0 */


int FUN_0089c9f0(longlong *param_1,int param_2,longlong param_3,int param_4)

{
  int iVar1;
  int local_20;
  
  if (param_2 == -1) {
    iVar1 = (**(code **)(*param_1 + 0x80))(param_1);
    local_20 = 0;
    if (-1 < param_4) {
      param_4 = param_4 + 1;
      do {
        if (iVar1 == *(int *)(param_3 + (longlong)local_20 * 4)) {
          return iVar1;
        }
        local_20 = local_20 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    (**(code **)(*param_1 + 0x98))(param_1,iVar1);
  }
  return param_2;
}

