/* Ghidra address: 00954a30 */
/* Ghidra symbol: FUN_00954a30 */


void FUN_00954a30(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00598010(*(longlong *)(param_1 + 0x80) + 8);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x88);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00598010(*(longlong *)(param_1 + 0x88) + 8);
  return;
}

