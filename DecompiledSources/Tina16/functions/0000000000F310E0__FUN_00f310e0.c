/* Ghidra address: 00f310e0 */
/* Ghidra symbol: FUN_00f310e0 */


void FUN_00f310e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  FUN_00453560(param_2,0x7b);
  if (0 < iVar5) {
    lVar2 = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + -8) == 0)) {
      lVar1 = FUN_00410a90();
    }
    FUN_00f30180(*(undefined8 *)(lVar1 + lVar2 * 8),param_2);
  }
  iVar5 = iVar5 + -1;
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      FUN_00453560(param_2,0x2c);
      uVar3 = (ulonglong)iVar4;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if ((lVar1 == 0) || (*(ulonglong *)(lVar1 + -8) <= uVar3)) {
        lVar1 = FUN_00410a90();
      }
      FUN_00f30180(*(undefined8 *)(lVar1 + uVar3 * 8),param_2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00453560(param_2,0x7d);
  return;
}

