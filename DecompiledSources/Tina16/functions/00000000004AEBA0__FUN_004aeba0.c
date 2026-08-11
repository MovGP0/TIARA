/* Ghidra address: 004aeba0 */
/* Ghidra symbol: FUN_004aeba0 */


int FUN_004aeba0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*plVar3 == param_2) {
        return iVar1;
      }
      plVar3 = plVar3 + 1;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}

