/* Ghidra address: 005c6790 */
/* Ghidra symbol: FUN_005c6790 */


undefined2 FUN_005c6790(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  return *(undefined2 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 2);
}

