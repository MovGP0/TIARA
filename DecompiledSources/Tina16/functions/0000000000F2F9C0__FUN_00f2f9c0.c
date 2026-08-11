/* Ghidra address: 00f2f9c0 */
/* Ghidra symbol: FUN_00f2f9c0 */


undefined4 FUN_00f2f9c0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + -4);
  }
  return uVar1;
}

