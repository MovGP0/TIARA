/* Ghidra address: 00bd74c0 */
/* Ghidra symbol: FUN_00bd74c0 */


int FUN_00bd74c0(longlong param_1,short param_2,short param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_00bd7720(param_1,iVar2);
      if (((*(short *)(lVar1 + 0x18) == param_2) &&
          (lVar1 = FUN_00bd7720(param_1,iVar2), *(short *)(lVar1 + 0x1a) == param_3)) &&
         (lVar1 = FUN_00bd7720(param_1,iVar2), *(short *)(lVar1 + 0x1c) == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

