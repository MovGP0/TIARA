/* Ghidra address: 00bc5500 */
/* Ghidra symbol: FUN_00bc5500 */


int FUN_00bc5500(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0xe;
    while ((0 < iVar1 &&
           ((*(longlong *)(param_1 + 8 + (longlong)iVar1 * 8) == 0 ||
            (*(longlong *)(param_1 + 0x80 + (longlong)iVar1 * 8) == 0))))) {
      iVar1 = iVar1 + -1;
    }
  }
  return iVar1;
}

