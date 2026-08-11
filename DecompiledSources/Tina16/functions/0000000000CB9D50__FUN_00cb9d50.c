/* Ghidra address: 00cb9d50 */
/* Ghidra symbol: FUN_00cb9d50 */


undefined1 FUN_00cb9d50(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x158) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x1a9);
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x61);
  }
  return uVar1;
}

