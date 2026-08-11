/* Ghidra address: 00f34eb0 */
/* Ghidra symbol: FUN_00f34eb0 */


void FUN_00f34eb0(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_00594f90();
  }
  if (param_2 == 0) {
    FUN_00f34f00(param_1,0);
  }
  else {
    iVar1 = 4;
    if (4 < param_2) {
      do {
        iVar1 = iVar1 * 2;
      } while (iVar1 < param_2);
    }
    FUN_00f34f00(param_1,iVar1);
  }
  return;
}

