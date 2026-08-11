/* Ghidra address: 009744d0 */
/* Ghidra symbol: FUN_009744d0 */


void FUN_009744d0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  while (lVar1 = *(longlong *)(param_1 + 0x98), 0 < *(int *)(lVar1 + 0x10)) {
    uVar2 = *(uint *)(lVar1 + 0x10) - 1;
    if (*(uint *)(lVar1 + 0x10) <= uVar2) {
      FUN_00594f90();
    }
    FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
    FUN_00599670(*(longlong *)(param_1 + 0x98) + 8,
                 *(int *)(*(longlong *)(param_1 + 0x98) + 0x10) + -1,5);
  }
  return;
}

