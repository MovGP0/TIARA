/* Ghidra address: 00d19990 */
/* Ghidra symbol: FUN_00d19990 */


void FUN_00d19990(longlong *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 3) || (5 < param_2)) {
    iVar1 = (**(code **)(*param_1 + 0x60))(*param_1);
    if (iVar1 < 0x15) {
      param_2 = 3;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x60))(*param_1);
      if (iVar1 < 0x1d) {
        param_2 = 4;
      }
      else {
        param_2 = 5;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xcc) = param_2;
  if (param_2 == 3) {
    param_1[0x1b] = (longlong)param_1;
    param_1[0x1a] = (longlong)FUN_00d19a40;
  }
  else if (param_2 == 4) {
    param_1[0x1b] = (longlong)param_1;
    param_1[0x1a] = (longlong)FUN_00d19d30;
  }
  else if (param_2 == 5) {
    param_1[0x1b] = (longlong)param_1;
    param_1[0x1a] = (longlong)FUN_00d1a0d0;
  }
  return;
}

