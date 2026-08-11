/* Ghidra address: 00cb9b40 */
/* Ghidra symbol: FUN_00cb9b40 */


undefined1 FUN_00cb9b40(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x158) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x1aa);
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x62);
  }
  return uVar1;
}

