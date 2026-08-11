/* Ghidra address: 00bcf820 */
/* Ghidra symbol: FUN_00bcf820 */


void FUN_00bcf820(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x38);
    iVar1 = 0;
    if (0 < iVar4) {
      do {
        *(int *)((longlong)plVar2 + 0x1c) = iVar1;
        iVar3 = 0;
        if (*plVar2 != 0) {
          iVar3 = *(int *)(*plVar2 + -4);
        }
        iVar1 = iVar1 + iVar3;
        plVar2 = plVar2 + 5;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

