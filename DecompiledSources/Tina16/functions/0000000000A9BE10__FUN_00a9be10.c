/* Ghidra address: 00a9be10 */
/* Ghidra symbol: FUN_00a9be10 */


void FUN_00a9be10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)FUN_00ac3910(param_1,iVar2);
      (**(code **)(*plVar1 + 0xa8))(plVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

