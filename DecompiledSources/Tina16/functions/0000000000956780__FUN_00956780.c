/* Ghidra address: 00956780 */
/* Ghidra symbol: FUN_00956780 */


void FUN_00956780(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00954a30(param_1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x128) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x128);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00598010(*(longlong *)(param_1 + 0x128) + 8);
  return;
}

