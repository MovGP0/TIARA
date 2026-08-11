/* Ghidra address: 00d58600 */
/* Ghidra symbol: FUN_00d58600 */


void FUN_00d58600(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    FUN_0040d200(param_1,(longlong)(param_2 * 4),0);
  }
  else if (param_3 == -1) {
    FUN_0040d200(param_1,(longlong)(param_2 * 4),0xff);
  }
  else {
    iVar1 = 0;
    if (param_2 - 1U < 0x80000000) {
      do {
        *(int *)(param_1 + (longlong)iVar1 * 4) = param_3;
        iVar1 = iVar1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

