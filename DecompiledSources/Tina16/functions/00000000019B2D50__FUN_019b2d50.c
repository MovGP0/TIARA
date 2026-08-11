/* Ghidra address: 019b2d50 */
/* Ghidra symbol: FUN_019b2d50 */


void FUN_019b2d50(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_00594f90();
  }
  if (param_2 == 0) {
    FUN_019b2da0(param_1,0);
  }
  else {
    iVar1 = 4;
    if (4 < param_2) {
      do {
        iVar1 = iVar1 * 2;
      } while (iVar1 < param_2);
    }
    FUN_019b2da0(param_1,iVar1);
  }
  return;
}

