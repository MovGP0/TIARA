/* Ghidra address: 006f0d60 */
/* Ghidra symbol: FUN_006f0d60 */


int FUN_006f0d60(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  iVar1 = iVar1 * 2;
  if (0x1fe < iVar1) {
    iVar1 = 0x1fe;
  }
  return iVar1;
}

