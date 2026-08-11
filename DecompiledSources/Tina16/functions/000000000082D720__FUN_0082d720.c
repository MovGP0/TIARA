/* Ghidra address: 0082d720 */
/* Ghidra symbol: FUN_0082d720 */


undefined4 FUN_0082d720(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 4);
}

