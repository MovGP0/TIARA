/* Ghidra address: 00876ad0 */
/* Ghidra symbol: FUN_00876ad0 */


int FUN_00876ad0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
  }
  iVar1 = (iVar1 - param_3) + 1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if ((-1 < param_2) && (param_2 < iVar1)) {
    iVar1 = param_2;
  }
  return iVar1;
}

