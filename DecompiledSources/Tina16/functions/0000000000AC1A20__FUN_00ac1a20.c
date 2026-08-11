/* Ghidra address: 00ac1a20 */
/* Ghidra symbol: FUN_00ac1a20 */


void FUN_00ac1a20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_00ac1a90(param_1,iVar3);
      if (((char)plVar1[0x23] == '\0') &&
         (lVar2 = (**(code **)(*plVar1 + 0x100))(plVar1), lVar2 != 0)) {
        (**(code **)(*plVar1 + 0x168))(plVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

