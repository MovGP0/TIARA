/* Ghidra address: 00f30bd0 */
/* Ghidra symbol: FUN_00f30bd0 */


longlong FUN_00f30bd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      uVar3 = (ulonglong)iVar4;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + -8) <= uVar3)) {
        lVar2 = FUN_00410a90();
      }
      lVar2 = *(longlong *)(lVar2 + uVar3 * 8);
      iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x10),param_2);
      if (iVar1 == 0) {
        return lVar2;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

