/* Ghidra address: 00501590 */
/* Ghidra symbol: FUN_00501590 */


undefined8 FUN_00501590(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8);
}

