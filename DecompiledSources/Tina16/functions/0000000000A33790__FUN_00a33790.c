/* Ghidra address: 00a33790 */
/* Ghidra symbol: FUN_00a33790 */


undefined8 FUN_00a33790(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = -1;
  iVar4 = -1;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar1 = FUN_00a338f0(param_1,iVar3);
      iVar4 = iVar5;
      if (param_2 == lVar1) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
      iVar5 = iVar4;
    } while (iVar6 != 0);
  }
  if (iVar4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00a338f0(param_1,iVar4);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    if (iVar4 < *(int *)(param_1 + 0x10)) {
      FUN_00409a70(*(longlong *)(param_1 + 0x18) + (longlong)(iVar4 + 1) * 8,
                   *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 8,
                   (longlong)((*(int *)(param_1 + 0x10) - iVar4) * 8));
    }
  }
  return uVar2;
}

