/* Ghidra address: 0199bdc0 */
/* Ghidra symbol: FUN_0199bdc0 */


int FUN_0199bdc0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  param_2 = param_2 + -1;
  iVar2 = 1;
  if (0 < param_2) {
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x3c8) + (longlong)iVar2 * 8)
          == 0) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}

