/* Ghidra address: 00414d00 */
/* Ghidra symbol: FUN_00414d00 */


void FUN_00414d00(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    while (*(short *)(param_1 + (longlong)iVar1 * 2) != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return;
}

