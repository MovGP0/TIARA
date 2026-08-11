/* Ghidra address: 01d2d190 */
/* Ghidra symbol: FUN_01d2d190 */


void FUN_01d2d190(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar4 = *(int *)(param_1 + 0x48);
    iVar2 = 1;
    if (0 < iVar4) {
      do {
        lVar3 = (longlong)iVar2;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + -0x10 + lVar3 * 0x10);
        *piVar1 = *piVar1 + param_2;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + -0xc + lVar3 * 0x10);
        *piVar1 = *piVar1 + param_3;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + -8 + lVar3 * 0x10);
        *piVar1 = *piVar1 + param_2;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + -4 + lVar3 * 0x10);
        *piVar1 = *piVar1 + param_3;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

