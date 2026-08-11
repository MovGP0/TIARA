/* Ghidra address: 00a33ed0 */
/* Ghidra symbol: FUN_00a33ed0 */


int FUN_00a33ed0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x160) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_00a33e20(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x160),iVar2);
      if (lVar1 == param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

