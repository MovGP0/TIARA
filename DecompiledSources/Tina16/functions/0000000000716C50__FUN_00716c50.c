/* Ghidra address: 00716c50 */
/* Ghidra symbol: FUN_00716c50 */


void FUN_00716c50(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) - 1;
  if (-1 < (int)uVar2) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      if (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) + 0x10) ==
          param_2) {
        FUN_00599670(*(longlong *)(param_1 + 0x28) + 8,uVar2,5);
        break;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffff);
  }
  uVar2 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) - 1;
  if (-1 < (int)uVar2) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8);
      if (*(int *)(lVar1 + 0x10) == param_2) {
        FUN_00599670(*(longlong *)(param_1 + 0x20) + 8,uVar2,5);
        FUN_00410f20(lVar1);
        return;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffff);
  }
  return;
}

