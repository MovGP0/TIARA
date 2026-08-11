/* Ghidra address: 00995080 */
/* Ghidra symbol: FUN_00995080 */


undefined8 FUN_00995080(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = *(int *)(lVar1 + 0x10) - 1;
  if (*(uint *)(lVar1 + 0x10) <= uVar3) {
    FUN_00594f90();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
  FUN_00599670(*(longlong *)(param_1 + 8) + 8,*(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1,5);
  return uVar2;
}

