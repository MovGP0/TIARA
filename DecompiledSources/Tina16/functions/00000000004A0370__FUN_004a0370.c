/* Ghidra address: 004a0370 */
/* Ghidra symbol: FUN_004a0370 */


void FUN_004a0370(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10) - 1;
  if (-1 < (int)uVar2) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8);
      FUN_0049f500(lVar1,param_2);
      if (*(int *)(*(longlong *)(lVar1 + 0x18) + 0x10) == 0) {
        FUN_00599670(*(longlong *)(param_1 + 8) + 8,uVar2,5);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0xffffffff);
  }
  return;
}

