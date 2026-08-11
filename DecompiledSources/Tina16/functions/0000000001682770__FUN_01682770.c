/* Ghidra address: 01682770 */
/* Ghidra symbol: FUN_01682770 */


undefined8 FUN_01682770(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 8);
}

