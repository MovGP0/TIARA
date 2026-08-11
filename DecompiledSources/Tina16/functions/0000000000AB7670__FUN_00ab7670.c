/* Ghidra address: 00ab7670 */
/* Ghidra symbol: FUN_00ab7670 */


int FUN_00ab7670(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0xa8) - 2U < 0x80000000) {
    iVar3 = *(int *)(param_1 + 0xa8) + -1;
    do {
      if ((*(short *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x98) + (longlong)iVar2 * 2) ==
           0x20) ||
         (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x98) + (longlong)iVar2 * 2) ==
          0xa0)) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

