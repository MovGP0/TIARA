/* Ghidra address: 004d2ce0 */
/* Ghidra symbol: FUN_004d2ce0 */


void FUN_004d2ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong local_30;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x10)) {
      uVar3 = *(int *)(lVar1 + 0x10) - 1;
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8) == param_2) {
        FUN_00599670(*(longlong *)(param_1 + 0x28) + 8,uVar3,5);
      }
      else {
        local_30 = param_2;
        FUN_005974f0(*(longlong *)(param_1 + 0x28) + 8,&local_30);
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x10) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x28) = 0;
      FUN_00410f20(uVar2);
    }
  }
  return;
}

