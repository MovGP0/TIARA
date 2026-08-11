/* Ghidra address: 00f800e0 */
/* Ghidra symbol: FUN_00f800e0 */


longlong FUN_00f800e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x340) + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_00f81cc0(*(undefined8 *)(*(longlong *)(param_1 + 0x340) + 8),iVar2);
      if (*(int *)(lVar1 + 0x28) == param_2) {
        return lVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

