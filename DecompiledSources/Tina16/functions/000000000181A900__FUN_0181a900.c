/* Ghidra address: 0181a900 */
/* Ghidra symbol: FUN_0181a900 */


int FUN_0181a900(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6b0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  }
  return iVar1;
}

