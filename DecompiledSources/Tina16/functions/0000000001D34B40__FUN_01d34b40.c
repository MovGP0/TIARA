/* Ghidra address: 01d34b40 */
/* Ghidra symbol: FUN_01d34b40 */


int FUN_01d34b40(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((iVar1 < *(int *)(param_1 + 0x10) &&
         (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) != param_2))) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 == *(int *)(param_1 + 0x10)) {
    iVar1 = -1;
  }
  return iVar1;
}

