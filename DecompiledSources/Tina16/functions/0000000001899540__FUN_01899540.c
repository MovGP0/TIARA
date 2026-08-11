/* Ghidra address: 01899540 */
/* Ghidra symbol: FUN_01899540 */


undefined1 FUN_01899540(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x4b8) + 0xa9);
  }
  return uVar1;
}

