/* Ghidra address: 01d34b20 */
/* Ghidra symbol: FUN_01d34b20 */


int FUN_01d34b20(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (-1 < iVar2 + -1) {
    do {
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

