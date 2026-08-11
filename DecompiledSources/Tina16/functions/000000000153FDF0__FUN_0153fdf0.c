/* Ghidra address: 0153fdf0 */
/* Ghidra symbol: FUN_0153fdf0 */


undefined8 FUN_0153fdf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d347d0(lVar1,iVar4);
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        uVar3 = 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar3;
}

