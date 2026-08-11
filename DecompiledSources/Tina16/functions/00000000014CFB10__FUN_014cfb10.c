/* Ghidra address: 014cfb10 */
/* Ghidra symbol: FUN_014cfb10 */


int FUN_014cfb10(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = -1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      if (*(int *)(param_1 + 0x220 + (longlong)iVar2 * 0xc) == param_2) {
        iVar1 = iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

