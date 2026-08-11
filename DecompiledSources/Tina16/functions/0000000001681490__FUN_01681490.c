/* Ghidra address: 01681490 */
/* Ghidra symbol: FUN_01681490 */


undefined8 FUN_01681490(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8);
}

