/* Ghidra address: 007a6d80 */
/* Ghidra symbol: FUN_007a6d80 */


undefined8 FUN_007a6d80(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8);
}

