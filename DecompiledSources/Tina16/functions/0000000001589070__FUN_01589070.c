/* Ghidra address: 01589070 */
/* Ghidra symbol: FUN_01589070 */


undefined1 FUN_01589070(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10) - 1;
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  return *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1);
}

