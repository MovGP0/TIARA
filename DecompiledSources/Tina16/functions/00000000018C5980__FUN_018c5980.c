/* Ghidra address: 018c5980 */
/* Ghidra symbol: FUN_018c5980 */


void FUN_018c5980(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_018c5900();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_018c5910(param_1,iVar4);
      if (*(longlong *)(lVar1 + 8) == param_2) {
        uVar2 = FUN_018c5910(param_1,iVar4);
        FUN_00410f20(uVar2);
        FUN_004ae870(*(undefined8 *)(param_1 + 8),iVar4);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

