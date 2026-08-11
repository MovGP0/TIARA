/* Ghidra address: 00c2ef60 */
/* Ghidra symbol: FUN_00c2ef60 */


void FUN_00c2ef60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(param_1,iVar2);
      if (*plVar1 == param_2) {
        FUN_004095f0(plVar1);
        FUN_004ae870(param_1,iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

