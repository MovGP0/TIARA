/* Ghidra address: 004b1f50 */
/* Ghidra symbol: FUN_004b1f50 */


longlong FUN_004b1f50(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8);
      if (*(int *)(lVar1 + 0x10) == param_2) {
        return lVar1;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

