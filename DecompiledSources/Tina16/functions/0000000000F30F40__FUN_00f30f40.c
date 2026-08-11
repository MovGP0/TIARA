/* Ghidra address: 00f30f40 */
/* Ghidra symbol: FUN_00f30f40 */


int FUN_00f30f40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 1;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = (ulonglong)iVar5;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + -8) <= uVar3)) {
        lVar2 = FUN_00410a90();
      }
      iVar1 = FUN_00f300d0(*(undefined8 *)(lVar2 + uVar3 * 8));
      iVar4 = iVar4 + iVar1 + 1;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar4 == 1) {
    iVar4 = 2;
  }
  return iVar4;
}

